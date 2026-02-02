#import "WeChatRedEnvelop.h"
#import "WeChatRedEnvelopParam.h"
#import "WCPLSettingViewController.h"
#import "WCPLReceiveRedEnvelopOperation.h"
#import "WCPLRedEnvelopTaskManager.h"
#import "WCPLRedEnvelopConfig.h"
#import "WCPLRedEnvelopParamQueue.h"
#import "WCPLNewFuncAddition.h"
#import "WCPLFuncService.h"
#import "WCPLAVManager.h"
#import "WCPLMessageReplyManager.h"
#import "WCHookSwipeUtilities.h"
#import "WCHookMessageNavigator.h"
#import <objc/runtime.h>

// ==================== 插件注册 ====================
static BOOL didRegisterWCPLPlugin = NO;

// ==================== 防撤回辅助方法 ====================

static NSString *wcpl_trimString(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) return nil;
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

static NSString *wcpl_extractBetweenTokens(NSString *text, NSString *startToken, NSString *endToken) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) return nil;
    if (startToken.length == 0 || endToken.length == 0) return nil;

    NSRange startRange = [text rangeOfString:startToken];
    if (startRange.location == NSNotFound) return nil;

    NSUInteger searchStart = startRange.location + startRange.length;
    if (searchStart >= text.length) return nil;

    NSRange endRange = [text rangeOfString:endToken options:0 range:NSMakeRange(searchStart, text.length - searchStart)];
    if (endRange.location == NSNotFound) return nil;
    if (endRange.location < searchStart) return nil;

    NSRange valueRange = NSMakeRange(searchStart, endRange.location - searchStart);
    if (valueRange.location == NSNotFound || NSMaxRange(valueRange) > text.length) return nil;

    NSString *value = [text substringWithRange:valueRange];
    return wcpl_trimString(value);
}

static NSString *wcpl_extractXmlTagValue(NSString *xml, NSString *tagName) {
    if (![xml isKindOfClass:[NSString class]] || xml.length == 0) return nil;
    if (![tagName isKindOfClass:[NSString class]] || tagName.length == 0) return nil;

    NSString *startToken = [NSString stringWithFormat:@"<%@>", tagName];
    NSString *endToken = [NSString stringWithFormat:@"</%@>", tagName];
    return wcpl_extractBetweenTokens(xml, startToken, endToken);
}

static long long wcpl_extractLongLongFromXmlTag(NSString *xml, NSString *tagName) {
    NSString *value = wcpl_extractXmlTagValue(xml, tagName);
    if (value.length == 0) return 0;

    NSScanner *scanner = [NSScanner scannerWithString:value];
    long long result = 0;
    if (![scanner scanLongLong:&result]) return 0;
    return result;
}

static NSString *wcpl_stripCDATAIfNeeded(NSString *text) {
    NSString *cdataValue = wcpl_extractBetweenTokens(text, @"<![CDATA[", @"]]>");
    return cdataValue ?: wcpl_trimString(text);
}

static NSString *wcpl_sanitizeInlineText(NSString *text, NSUInteger maxLen) {
    NSString *value = wcpl_trimString(text);
    if (value.length == 0) return nil;

    value = [[value stringByReplacingOccurrencesOfString:@"\r" withString:@" "]
                stringByReplacingOccurrencesOfString:@"\n" withString:@" "];

    if (maxLen > 0 && value.length > maxLen) {
        value = [[value substringToIndex:maxLen] stringByAppendingString:@"…"];
    }
    return value;
}

static NSString *wcpl_digestForMessageWrap(CMessageWrap *msgWrap) {
    if (![msgWrap isKindOfClass:%c(CMessageWrap)]) return nil;

    unsigned int type = msgWrap.m_uiMessageType;
    switch (type) {
        case 1:
            return wcpl_sanitizeInlineText(msgWrap.m_nsContent, 120);
        case 3:
            return @"[图片]";
        case 34:
            return @"[语音]";
        case 43:
            return @"[视频]";
        case 47:
            return @"[表情]";
        case 49:
            return @"[应用消息]";
        default:
            return [NSString stringWithFormat:@"[类型:%u]", type];
    }
}

static BOOL wcpl_shouldIgnoreMessageWrap(WCPLRedEnvelopConfig *config, CMessageWrap *msgWrap) {
    if (!config || !config.userIgnoreEnable) return NO;
    if (![msgWrap isKindOfClass:%c(CMessageWrap)]) return NO;

    BOOL isSender = NO;
    @try {
        isSender = [%c(CMessageWrap) isSenderFromMsgWrap:msgWrap];
    } @catch (__unused NSException *exception) {
        isSender = NO;
    }
    if (isSender) return NO;

    NSString *fromUsr = msgWrap.m_nsFromUsr;
    if (fromUsr.length > 0 && config.chatIgnoreInfo[fromUsr].boolValue) {
        return YES;
    }
    if (fromUsr.length > 0 && config.userIgnoreInfo[fromUsr].boolValue) {
        return YES;
    }
    NSString *realChatUsr = msgWrap.m_nsRealChatUsr;
    if (realChatUsr.length > 0 && config.userIgnoreInfo[realChatUsr].boolValue) {
        return YES;
    }
    return NO;
}

%hook MicroMessengerAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    BOOL result = %orig(application, launchOptions);

    // 通过 WCPluginsMgr 注册插件入口
    if (NSClassFromString(@"WCPluginsMgr") && !didRegisterWCPLPlugin) {
        [[objc_getClass("WCPluginsMgr") sharedInstance] registerControllerWithTitle:@"微信辣椒"
                                                                           version:@"1.0"
                                                                        controller:@"WCPLSettingViewController"];
        didRegisterWCPLPlugin = YES;
        NSLog(@"[WCPL] Plugin registered via WCPluginsMgr");
    }

    return result;
}

%end

%hook WCRedEnvelopesLogicMgr

- (void)OnWCToHongbaoCommonResponse:(HongBaoRes *)arg1 Request:(HongBaoReq *)arg2 {
    %orig;

    // 非参数查询请求
    if (arg1.cgiCmdid != 3) { return; }

    NSString *(^parseRequestSign)() = ^NSString *() {
        NSString *requestString = [[NSString alloc] initWithData:arg2.reqText.buffer encoding:NSUTF8StringEncoding];
        NSDictionary *requestDictionary = [%c(WCBizUtil) dictionaryWithDecodedComponets:requestString separator:@"&"];
        NSString *nativeUrl = [[requestDictionary stringForKey:@"nativeUrl"] stringByRemovingPercentEncoding];
        NSDictionary *nativeUrlDict = [%c(WCBizUtil) dictionaryWithDecodedComponets:nativeUrl separator:@"&"];

        return [nativeUrlDict stringForKey:@"sign"];
    };

    NSDictionary *responseDict = [[[NSString alloc] initWithData:arg1.retText.buffer encoding:NSUTF8StringEncoding] JSONDictionary];

    WeChatRedEnvelopParam *mgrParams = [[WCPLRedEnvelopParamQueue sharedQueue] dequeue];

    BOOL (^shouldReceiveRedEnvelop)() = ^BOOL() {
        // 手动抢红包
        if (!mgrParams) { return NO; }

        // 自己已经抢过
        if ([responseDict[@"receiveStatus"] integerValue] == 2) { return NO; }

        // 红包被抢完
        if ([responseDict[@"hbStatus"] integerValue] == 4) { return NO; }        

        // 没有这个字段会被判定为使用外挂
        if (!responseDict[@"timingIdentifier"]) { return NO; }        

        if (mgrParams.isGroupSender) { 
            // 自己发红包的时候没有 sign 字段
            return [WCPLRedEnvelopConfig sharedConfig].autoReceiveEnable;
        } else {
            return [parseRequestSign() isEqualToString:mgrParams.sign] && [WCPLRedEnvelopConfig sharedConfig].autoReceiveEnable;
        }
    };

    if (shouldReceiveRedEnvelop()) {
        mgrParams.timingIdentifier = responseDict[@"timingIdentifier"];

        unsigned int delaySeconds = [self wcpl_calculateDelaySeconds];
        WCPLReceiveRedEnvelopOperation *operation = [[WCPLReceiveRedEnvelopOperation alloc] initWithRedEnvelopParam:mgrParams delay:delaySeconds];

        if ([WCPLRedEnvelopConfig sharedConfig].serialReceive) {
            [[WCPLRedEnvelopTaskManager sharedManager] addSerialTask:operation];
        } else {
            [[WCPLRedEnvelopTaskManager sharedManager] addNormalTask:operation];
        }
    }
}

%new
- (unsigned int)wcpl_calculateDelaySeconds {
    NSInteger configDelaySeconds = [WCPLRedEnvelopConfig sharedConfig].delaySeconds;

    if ([WCPLRedEnvelopConfig sharedConfig].serialReceive) {
        unsigned int serialDelaySeconds;
        if ([WCPLRedEnvelopTaskManager sharedManager].serialQueueIsEmpty) {
            serialDelaySeconds = configDelaySeconds;
        } else {
            serialDelaySeconds = 5;
        }

        return serialDelaySeconds;
    } else {
        return (unsigned int)configDelaySeconds;
    }
}

%end

%hook CMessageMgr

- (void)AsyncOnAddMsg:(NSString *)msg MsgWrap:(CMessageWrap *)wrap {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    if (wcpl_shouldIgnoreMessageWrap(config, wrap)) {
        return;
    }

    %orig;

    switch(wrap.m_uiMessageType) {
    case 49: { // AppNode

        /** 是否为红包消息 */
        BOOL (^isRedEnvelopMessage)() = ^BOOL() {
            return [wrap.m_nsContent rangeOfString:@"wxpay://"].location != NSNotFound;
        };
        
        if (isRedEnvelopMessage()) { // 红包
            CContactMgr *contactManager = [[%c(MMServiceCenter) defaultCenter] getService:[%c(CContactMgr) class]];
            CContact *selfContact = [contactManager getSelfContact];

            BOOL (^isSender)() = ^BOOL() {
                return [wrap.m_nsFromUsr isEqualToString:selfContact.m_nsUsrName];
            };

            /** 是否别人在群聊中发消息 */
            BOOL (^isGroupReceiver)() = ^BOOL() {
                return [wrap.m_nsFromUsr rangeOfString:@"@chatroom"].location != NSNotFound;
            };

            /** 是否自己在群聊中发消息 */
            BOOL (^isGroupSender)() = ^BOOL() {
                return isSender() && [wrap.m_nsToUsr rangeOfString:@"chatroom"].location != NSNotFound;
            };

            /** 是否抢自己发的红包 */
            BOOL (^isReceiveSelfRedEnvelop)() = ^BOOL() {
                return [WCPLRedEnvelopConfig sharedConfig].receiveSelfRedEnvelop;
            };

            /** 是否在黑名单中 */
            BOOL (^isGroupInBlackList)() = ^BOOL() {
                return [[WCPLRedEnvelopConfig sharedConfig].blackList containsObject:wrap.m_nsFromUsr];
            };

            /** 是否自动抢红包 */
            BOOL (^shouldReceiveRedEnvelop)() = ^BOOL() {
                if (![WCPLRedEnvelopConfig sharedConfig].autoReceiveEnable) { return NO; }
                if (isGroupInBlackList()) { return NO; }

                return isGroupReceiver() || (isGroupSender() && isReceiveSelfRedEnvelop());
            };

            NSDictionary *(^parseNativeUrl)(NSString *nativeUrl) = ^NSDictionary *(NSString *nativeUrl) {
                nativeUrl = [nativeUrl substringFromIndex:[@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?" length]];
                return [%c(WCBizUtil) dictionaryWithDecodedComponets:nativeUrl separator:@"&"];
            };

            /** 获取服务端验证参数 */
            void (^queryRedEnvelopesReqeust)(NSDictionary *nativeUrlDict) = ^(NSDictionary *nativeUrlDict) {
                NSMutableDictionary *params = [@{} mutableCopy];
                params[@"agreeDuty"] = @"0";
                params[@"channelId"] = [nativeUrlDict stringForKey:@"channelid"];
                params[@"inWay"] = @"0";
                params[@"msgType"] = [nativeUrlDict stringForKey:@"msgtype"];
                params[@"nativeUrl"] = [[wrap m_oWCPayInfoItem] m_c2cNativeUrl];
                params[@"sendId"] = [nativeUrlDict stringForKey:@"sendid"];

                WCRedEnvelopesLogicMgr *logicMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:[objc_getClass("WCRedEnvelopesLogicMgr") class]];
                [logicMgr ReceiverQueryRedEnvelopesRequest:params];
            };

            /** 储存参数 */
            void (^enqueueParam)(NSDictionary *nativeUrlDict) = ^(NSDictionary *nativeUrlDict) {
                WeChatRedEnvelopParam *mgrParams = [[WeChatRedEnvelopParam alloc] init];
                mgrParams.msgType = [nativeUrlDict stringForKey:@"msgtype"];
                mgrParams.sendId = [nativeUrlDict stringForKey:@"sendid"];
                mgrParams.channelId = [nativeUrlDict stringForKey:@"channelid"];
                mgrParams.nickName = [selfContact getContactDisplayName];
                mgrParams.headImg = [selfContact m_nsHeadImgUrl];
                mgrParams.nativeUrl = [[wrap m_oWCPayInfoItem] m_c2cNativeUrl];
                mgrParams.sessionUserName = isGroupSender() ? wrap.m_nsToUsr : wrap.m_nsFromUsr;
                mgrParams.sign = [nativeUrlDict stringForKey:@"sign"];

                mgrParams.isGroupSender = isGroupSender();

                [[WCPLRedEnvelopParamQueue sharedQueue] enqueue:mgrParams];
            };

            if (shouldReceiveRedEnvelop()) {
                NSString *nativeUrl = [[wrap m_oWCPayInfoItem] m_c2cNativeUrl];            
                NSDictionary *nativeUrlDict = parseNativeUrl(nativeUrl);

                queryRedEnvelopesReqeust(nativeUrlDict);
                enqueueParam(nativeUrlDict);
            }
        }    
        break;
    }
    default:
        break;
    }
    
}

- (void)onRevokeMsg:(CMessageWrap *)arg1 {
    if (![WCPLRedEnvelopConfig sharedConfig].revokeEnable) {
        %orig;
        return;
    }

    @try {
        if (!arg1) {
            %orig;
            return;
        }

        // 优化：允许自己撤回（仅拦截他人撤回）
        BOOL isSelfRevoke = NO;
        @try {
            isSelfRevoke = [%c(CMessageWrap) isSenderFromMsgWrap:arg1];
        } @catch (__unused NSException *exception) {
            isSelfRevoke = NO;
        }
        if (isSelfRevoke) {
            %orig;
            return;
        }

        NSString *xml = arg1.m_nsContent;
        if (xml.length == 0) {
            %orig;
            return;
        }

        // 兜底：避免误拦截非撤回逻辑
        BOOL looksLikeRevoke = ([xml rangeOfString:@"revokemsg" options:NSCaseInsensitiveSearch].location != NSNotFound ||
                                [xml rangeOfString:@"replacemsg" options:NSCaseInsensitiveSearch].location != NSNotFound ||
                                [xml rangeOfString:@"撤回"].location != NSNotFound ||
                                [xml rangeOfString:@"recalled" options:NSCaseInsensitiveSearch].location != NSNotFound);
        if (!looksLikeRevoke) {
            %orig;
            return;
        }

        NSString *session = wcpl_extractXmlTagValue(xml, @"session");
        if (session.length == 0) {
            // 少数情况下 session 解析失败，退化到 From/To
            session = wcpl_trimString(arg1.m_nsFromUsr) ?: wcpl_trimString(arg1.m_nsToUsr);
        }
        if (session.length == 0) {
            // 无法确定会话，避免破坏链路，直接走原逻辑
            %orig;
            return;
        }

        NSString *replaceRaw = wcpl_extractXmlTagValue(xml, @"replacemsg");
        NSString *replaceText = wcpl_sanitizeInlineText(wcpl_stripCDATAIfNeeded(replaceRaw), 160);

        long long revokedMsgId = wcpl_extractLongLongFromXmlTag(xml, @"newmsgid");
        if (revokedMsgId <= 0) revokedMsgId = wcpl_extractLongLongFromXmlTag(xml, @"msgid");

        CMessageWrap *revokedMsgWrap = nil;
        if (revokedMsgId > 0 && [self respondsToSelector:@selector(GetMsg:n64SvrID:)]) {
            id msg = [self GetMsg:session n64SvrID:revokedMsgId];
            if ([msg isKindOfClass:%c(CMessageWrap)]) {
                revokedMsgWrap = (CMessageWrap *)msg;
            }
        }

        NSString *revokedDigest = wcpl_digestForMessageWrap(revokedMsgWrap);

        NSString *tipText;
        if (replaceText.length > 0) {
            tipText = [NSString stringWithFormat:@"已拦截撤回：%@", replaceText];
        } else {
            tipText = @"已拦截一条撤回消息";
        }

        if (revokedDigest.length > 0) {
            tipText = [NSString stringWithFormat:@"%@ 原消息：%@", tipText, revokedDigest];
        }

        CMessageWrap *msgWrap = [[%c(CMessageWrap) alloc] initWithMsgType:0x2710];
        [msgWrap setM_uiStatus:0x4];
        [msgWrap setM_nsContent:tipText];
        [msgWrap setM_uiCreateTime:[arg1 m_uiCreateTime]];

        // 复用原撤回消息的 From/To，确保插入到正确会话
        if (wcpl_trimString(arg1.m_nsToUsr)) {
            [msgWrap setM_nsToUsr:arg1.m_nsToUsr];
        }
        if (wcpl_trimString(arg1.m_nsFromUsr)) {
            [msgWrap setM_nsFromUsr:arg1.m_nsFromUsr];
        }

        if ([self respondsToSelector:@selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:Unique:)]) {
            [self AddLocalMsg:session MsgWrap:msgWrap fixTime:0x1 NewMsgArriveNotify:0x0 Unique:0x1];
        } else {
            [self AddLocalMsg:session MsgWrap:msgWrap fixTime:0x1 NewMsgArriveNotify:0x0];
        }

        // 核心：不调用 %orig，从而阻止撤回删除
        return;
    } @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in onRevokeMsg hook: %@", exception);
        %orig;
        return;
    }
}

- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5 FromSequence:(unsigned int)arg6 {
    id result = %orig;

    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];

    if (!config.userIgnoreEnable) {
        return result;
    }

    if ([result isKindOfClass:[NSArray class]] || [result isKindOfClass:[NSMutableArray class]]) {
        return [WCPLFuncService filtMessageFromMsgList:(NSMutableArray *)result];
    }

    return result;
}

%end

%hook NewSettingViewController

- (void)reloadTableData {
    %orig;

    WCTableViewManager *tableViewMgr = MSHookIvar<id>(self, "m_tableViewMgr");

    WCTableViewSectionManager *sectionMgr = [%c(WCTableViewSectionManager) sectionInfoDefaut];

    WCTableViewNormalCellManager *settingCell = [%c(WCTableViewNormalCellManager) normalCellForSel:@selector(wcpl_setting) target:self title:@"微信辣椒" accessoryType:1];
    [sectionMgr addCell:settingCell];

    [tableViewMgr insertSection:sectionMgr At:0];

    MMTableView *tableView = [tableViewMgr getTableView];
    [tableView reloadData];
}

%new
- (void)wcpl_setting {
    WCPLSettingViewController *settingViewController = [[WCPLSettingViewController alloc] init];
    [self.navigationController pushViewController:settingViewController animated:YES];
}

/*
%new
- (void)wcpl_followMyOfficalAccount {
    CContactMgr *contactMgr = [[%c(MMServiceCenter) defaultCenter] getService:%c(CContactMgr)];

    CContact *contact = [contactMgr getContactByName:@"gh_dfca3xx3231"];

    ContactInfoViewController *contactViewController = [[%c(ContactInfoViewController) alloc] init];
    [contactViewController setM_contact:contact];

    [self.navigationController pushViewController:contactViewController animated:YES]; 
}
*/

%end

%hook SyncCmdHandler

- (_Bool)BatchAddMsg:(_Bool)arg1 ShowPush:(_Bool)arg2 {

    NSMutableArray *msgList = [self valueForKey:@"m_arrMsgList"];
    NSMutableArray *msgListResult = [WCPLFuncService filtMessageFromMsgList:msgList];
    [self setValue:msgListResult forKey:@"m_arrMsgList"];

    return %orig;
}

%end

%hook BaseMsgContentViewController

/*
- (void)viewWillAppear:(_Bool)arg1 {
    %orig;

    UINavigationItem *navigationItem = [self valueForKey:@"navigationItem"];
    if (navigationItem.rightBarButtonItems.count < 3) {
        UIBarButtonItem *tpButton = [[UIBarButtonItem alloc] initWithTitle:@"T" style:UIBarButtonItemStylePlain target:self action:@selector(wcpl_pressTPButton:)];
        NSMutableArray *barButtons = [NSMutableArray arrayWithArray:navigationItem.rightBarButtonItems];
        [barButtons insertObject:tpButton atIndex:0];
        [navigationItem setRightBarButtonItems:barButtons];
    }
}
*/

/*
%new
- (void)wcpl_pressTPButton:(id)sender {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    BOOL isTPOn = [config TPOn];
    if (isTPOn) {
        UIView *view = [self valueForKey:@"view"];
        [[WCPLAVManager shareManager] startCaptureInView:view];
    } else {
        [[WCPLAVManager shareManager] stop];
    }
}
*/

- (void)viewDidLoad {
    %orig;

    // 复读功能现在通过 Hook CommonMessageCellView 实现
    // 不再需要在这里添加按钮
}

- (void)viewDidAppear:(_Bool)arg1 {
    %orig;

    CContact *contact = [self GetContact];
    if (contact.m_nsUsrName) {
        [WCPLRedEnvelopConfig sharedConfig].curUsrName = contact.m_nsUsrName;
    }

    /*
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:nil message:[NSString stringWithFormat:@" name: %@\n nickname: %@\n headurl: %@", contact.m_nsUsrName, contact.m_nsNickName, contact.m_nsHeadImgUrl] delegate:nil cancelButtonTitle:nil otherButtonTitles:@"OK", nil];
    [alert show];
    */

    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    if ([config TPOn]) {
        UIView *view = [self valueForKey:@"view"];
        [[WCPLAVManager shareManager] startCaptureInView:view];
    }
}

- (void)viewWillDisappear:(_Bool)arg1 {
    %orig;

    UINavigationController *navCon = [self valueForKey:@"navigationController"];
    if ([navCon.viewControllers indexOfObject:(UIViewController *)self] == NSNotFound) {
        [[WCPLAVManager shareManager] stop];
    }
}

- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 {
    %orig;

    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    if ([config TPOn]) {
        [[WCPLAVManager shareManager] stop];
    }
}

- (void)didRotateFromInterfaceOrientation:(long long)arg1 {
    %orig;

    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    if ([config TPOn]) {
        UIView *view = [self valueForKey:@"view"];
        [[WCPLAVManager shareManager] startCaptureInView:view];
    }
}

%end

// ==================== 复读机功能 Hook ====================
// Hook 文本消息 Cell，在别人发送的消息气泡旁边添加 +1 按钮

%hook TextMessageCellView

- (void)layoutSubviews {
    %orig;

    // 添加复读按钮
    [[WCPLMessageReplyManager sharedManager] addRepeatButtonToCellView:(CommonMessageCellView *)self];
}

- (void)prepareForReuse {
    %orig;

    // Cell 复用时移除按钮
    [[WCPLMessageReplyManager sharedManager] removeRepeatButtonFromCellView:(CommonMessageCellView *)self];
}

%end

// Hook 应用消息 Cell（包括引用回复消息）
%hook AppMessageCellView

- (void)layoutSubviews {
    %orig;

    // 添加复读按钮（仅对引用回复消息）
    [[WCPLMessageReplyManager sharedManager] addRepeatButtonToCellView:(CommonMessageCellView *)self];
}

- (void)prepareForReuse {
    %orig;

    // Cell 复用时移除按钮
    [[WCPLMessageReplyManager sharedManager] removeRepeatButtonFromCellView:(CommonMessageCellView *)self];
}

%end

// Hook 表情包消息 Cell (App类型)
%hook AppEmoticonMessageCellView

- (void)layoutSubviews {
    %orig;

    // 添加复读按钮
    [[WCPLMessageReplyManager sharedManager] addRepeatButtonToCellView:(CommonMessageCellView *)self];
}

- (void)prepareForReuse {
    %orig;

    // Cell 复用时移除按钮
    [[WCPLMessageReplyManager sharedManager] removeRepeatButtonFromCellView:(CommonMessageCellView *)self];
}

- (void)didMoveToWindow {
    %orig;

    // 确保表情包消息也支持滑动手势
    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
    } else {
        [self wchook_resetSwipeAnimated:NO];
    }
}

%end

// Hook 表情包消息 Cell (普通类型)
%hook EmoticonMessageCellView

- (void)layoutSubviews {
    %orig;

    // 添加复读按钮
    [[WCPLMessageReplyManager sharedManager] addRepeatButtonToCellView:(CommonMessageCellView *)self];
}

- (void)prepareForReuse {
    %orig;

    // Cell 复用时移除按钮
    [[WCPLMessageReplyManager sharedManager] removeRepeatButtonFromCellView:(CommonMessageCellView *)self];
}

- (void)didMoveToWindow {
    %orig;

    // 确保表情包消息也支持滑动手势
    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
    } else {
        [self wchook_resetSwipeAnimated:NO];
    }
}

%end

// Hook 图片消息 Cell（已禁用复读功能,仅保留结构以供将来扩展）
%hook ImageMessageCellView

- (void)layoutSubviews {
    %orig;

    // 图片消息不支持复读按钮
    // [[WCPLMessageReplyManager sharedManager] addRepeatButtonToCellView:(CommonMessageCellView *)self];
}

- (void)prepareForReuse {
    %orig;

    // 确保移除任何残留的按钮
    [[WCPLMessageReplyManager sharedManager] removeRepeatButtonFromCellView:(CommonMessageCellView *)self];
}

- (void)didMoveToWindow {
    %orig;

    // 图片消息不支持滑动手势复读
    // if (self.window) {
    //     [self wchook_setupSwipeGestureIfNeeded];
    // } else {
    //     [self wchook_resetSwipeAnimated:NO];
    // }
}

%end

// Hook 视频消息 Cell（支持手势操作）
%hook VideoMessageCellView

- (void)didMoveToWindow {
    %orig;

    // 确保视频消息也支持滑动手势
    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
    } else {
        [self wchook_resetSwipeAnimated:NO];
    }
}

%end

// 也 Hook CommonMessageCellView 以支持更多消息类型和左滑引用功能
%hook CommonMessageCellView

%property(nonatomic, strong) UIPanGestureRecognizer *wchook_swipeGesture;
%property(nonatomic, strong) UIImpactFeedbackGenerator *wchook_feedbackGenerator;
%property(nonatomic, assign) BOOL wchook_feedbackTriggered;

- (void)layoutSubviews {
    %orig;

    // 跳过已经单独处理的 Cell 类型
    NSString *className = NSStringFromClass([self class]);
    if ([className isEqualToString:@"TextMessageCellView"] ||
        [className isEqualToString:@"AppMessageCellView"] ||
        [className isEqualToString:@"AppEmoticonMessageCellView"] ||
        [className isEqualToString:@"EmoticonMessageCellView"] ||
        [className isEqualToString:@"ImageMessageCellView"] ||
        [className isEqualToString:@"VideoMessageCellView"]) {
        // 已经在各自的 hook 中处理
        return;
    }

    // 其他消息类型暂不处理复读按钮
}

- (void)didMoveToWindow {
    %orig;

    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
    } else {
        [self wchook_resetSwipeAnimated:NO];
    }
}

%new
- (void)wchook_setupSwipeGestureIfNeeded {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    // 检查总开关和是否有任何滑动功能启用
    if (!config.swipeGestureEnable || (!config.swipeQuoteEnable && !config.swipeRightEnable)) {
        if (self.wchook_swipeGesture) {
            self.wchook_swipeGesture.enabled = NO;
        }
        return;
    }

    UIPanGestureRecognizer *gesture = self.wchook_swipeGesture;
    if (!gesture) {
        gesture = [[UIPanGestureRecognizer alloc] initWithTarget:self action:@selector(wchook_handleSwipe:)];
        gesture.maximumNumberOfTouches = 1;
        gesture.minimumNumberOfTouches = 1;
        gesture.cancelsTouchesInView = YES;
        gesture.delaysTouchesBegan = NO;
        gesture.delaysTouchesEnded = NO;
        gesture.delegate = (id<UIGestureRecognizerDelegate>)self;
        [self addGestureRecognizer:gesture];
        self.wchook_swipeGesture = gesture;
    }

    gesture.enabled = YES;

    if (!self.wchook_feedbackGenerator) {
        self.wchook_feedbackGenerator = [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleMedium];
    }
}

%new
- (void)wchook_handleSwipe:(UIPanGestureRecognizer *)gesture {
    if (!gesture) {
        return;
    }

    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    // 检查总开关和是否有任何滑动功能启用
    if (!config.swipeGestureEnable || (!config.swipeQuoteEnable && !config.swipeRightEnable)) {
        [self wchook_resetSwipeAnimated:YES];
        return;
    }

    NSArray<UIView *> *messageViews = [WCHookSwipeUtilities relatedMessageViewsForCommonView:self];
    CGPoint translation = [gesture translationInView:self];
    CGPoint velocity = [gesture velocityInView:self];

    // 判断滑动方向
    WCHookSwipeDirection direction = [WCHookSwipeUtilities swipeDirectionFromTranslation:translation];

    // 检查当前方向是否启用
    BOOL isDirectionEnabled = NO;
    if (direction == WCHookSwipeDirectionLeft && config.swipeQuoteEnable) {
        isDirectionEnabled = YES;
    } else if (direction == WCHookSwipeDirectionRight && config.swipeRightEnable) {
        isDirectionEnabled = YES;
    }

    // 如果当前方向未启用，忽略手势
    if (!isDirectionEnabled && gesture.state != UIGestureRecognizerStateBegan) {
        [WCHookSwipeUtilities applyTransform:CGAffineTransformIdentity toViews:messageViews];
        if (gesture.state == UIGestureRecognizerStateEnded || gesture.state == UIGestureRecognizerStateCancelled) {
            [self wchook_resetSwipeAnimated:YES];
        }
        return;
    }

    // 使用双向滑动检测
    if ([WCHookSwipeUtilities shouldIgnoreTranslationBidirectional:translation]) {
        [WCHookSwipeUtilities applyTransform:CGAffineTransformIdentity toViews:messageViews];
        if (gesture.state == UIGestureRecognizerStateEnded || gesture.state == UIGestureRecognizerStateCancelled) {
            [self wchook_resetSwipeAnimated:YES];
        }
        return;
    }

    CGFloat threshold = [WCHookSwipeUtilities thresholdForView:self];

    switch (gesture.state) {
    case UIGestureRecognizerStateBegan: {
        [self.wchook_feedbackGenerator prepare];
        self.wchook_feedbackTriggered = NO;
        break;
    }
    case UIGestureRecognizerStateChanged: {
        // 双向滑动：限制在 [-threshold, threshold] 范围内
        CGFloat clamped = [WCHookSwipeUtilities clampedTranslationBidirectional:translation.x threshold:threshold];
        CGAffineTransform transform = CGAffineTransformMakeTranslation(clamped, 0.0f);
        [WCHookSwipeUtilities applyTransform:transform toViews:messageViews];

        // 触发震动反馈
        CGFloat absTranslation = fabs(translation.x);
        if (!self.wchook_feedbackTriggered && absTranslation >= threshold) {
            [self.wchook_feedbackGenerator impactOccurred];
            self.wchook_feedbackTriggered = YES;
        }
        break;
    }
    case UIGestureRecognizerStateCancelled:
    case UIGestureRecognizerStateEnded: {
        if ([WCHookSwipeUtilities shouldTriggerWithTranslationBidirectional:translation velocity:velocity threshold:threshold]) {
            if (!self.wchook_feedbackTriggered) {
                [self.wchook_feedbackGenerator impactOccurred];
                self.wchook_feedbackTriggered = YES;
            }
            // 根据滑动方向执行不同操作
            [self wchook_triggerActionForDirection:direction];
        }
        [self wchook_resetSwipeAnimated:YES];
        break;
    }
    default: {
        break;
    }
    }
}

%new
- (void)wchook_triggerActionForDirection:(WCHookSwipeDirection)direction {
    dispatch_async(dispatch_get_main_queue(), ^{
        [self wchook_showSwipeActionMenuForDirection:direction];
    });
}

%new
- (void)wchook_resetSwipeAnimated:(BOOL)animated {
    NSArray<UIView *> *messageViews = [WCHookSwipeUtilities relatedMessageViewsForCommonView:self];
    [WCHookSwipeUtilities animateResetForViews:messageViews animated:animated];
    self.wchook_feedbackTriggered = NO;
}

%new
- (void)wchook_triggerQuoteReply {
    dispatch_async(dispatch_get_main_queue(), ^{
        [self wchook_showSwipeActionMenuForDirection:WCHookSwipeDirectionLeft];
    });
}

%new
- (void)wchook_showSwipeActionMenuForDirection:(WCHookSwipeDirection)direction {
    // 获取消息内容
    CMessageWrap *msgWrap = nil;
    if ([self respondsToSelector:@selector(viewModel)]) {
        id viewModel = [self performSelector:@selector(viewModel)];
        // 优先使用 messageWrap 属性（BaseMessageViewModel 的标准属性）
        if ([viewModel respondsToSelector:@selector(messageWrap)]) {
            msgWrap = [viewModel performSelector:@selector(messageWrap)];
        }
        // 备用方法
        if (!msgWrap && [viewModel respondsToSelector:@selector(getCurrentMessageWrap)]) {
            msgWrap = [viewModel performSelector:@selector(getCurrentMessageWrap)];
        }
    }
    // 直接从 Cell 获取
    if (!msgWrap && [self respondsToSelector:@selector(messageWrap)]) {
        msgWrap = [self performSelector:@selector(messageWrap)];
    }
    if (!msgWrap && [self respondsToSelector:@selector(getCurrentMessageWrap)]) {
        msgWrap = [self performSelector:@selector(getCurrentMessageWrap)];
    }

    if (!msgWrap) {
        NSLog(@"[WCPL] Cannot get message wrap for swipe action");
        return;
    }

    // 判断是否是自己发送的消息
    BOOL isFromOther = [[WCPLMessageReplyManager sharedManager] isMessageFromOther:msgWrap];
    BOOL isSelf = !isFromOther;

    // 获取配置
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSInteger action = 0;

    // 根据滑动方向和消息发送者获取配置的操作
    if (direction == WCHookSwipeDirectionLeft) {
        action = isSelf ? config.swipeLeftSelfAction : config.swipeLeftOtherAction;
    } else {
        action = isSelf ? config.swipeRightSelfAction : config.swipeRightOtherAction;
    }

    // 执行对应操作
    // 0=引用, 1=复读, 2=删除, 3=撤回(仅己方消息)
    switch (action) {
        case 0: // 引用
            [self wchook_performQuoteReply];
            break;
        case 1: // 复读
            [self wchook_performRepeatMessage:msgWrap];
            break;
        case 2: // 删除
            [self wchook_performDeleteMessage:msgWrap];
            break;
        case 3: // 撤回（仅己方消息有效）
            if (isSelf) {
                [self wchook_performRevokeMessage:msgWrap];
            } else {
                // 对方消息不能撤回，改为引用
                [self wchook_performQuoteReply];
            }
            break;
        default:
            [self wchook_performQuoteReply];
            break;
    }
}

%new
- (void)wchook_performQuoteReply {
    @try {
        // 方法1: 直接调用 Cell 的引用方法
        if ([self respondsToSelector:@selector(onShowMsgReplyMenuItem:)]) {
            [self performSelector:@selector(onShowMsgReplyMenuItem:) withObject:nil];
            NSLog(@"[WCPL] Quote reply via onShowMsgReplyMenuItem:");
            return;
        }

        // 方法2: 调用 onClickAsRefer 方法（表情包和图片消息可能使用这个）
        if ([self respondsToSelector:@selector(onClickAsRefer)]) {
            [self performSelector:@selector(onClickAsRefer)];
            NSLog(@"[WCPL] Quote reply via onClickAsRefer");
            return;
        }

        // 方法3: 通过 ViewController 触发引用
        BaseMsgContentViewController *chatVC = [self wchook_findChatViewController];
        if (chatVC) {
            // 获取消息
            CMessageWrap *msgWrap = nil;
            if ([self respondsToSelector:@selector(viewModel)]) {
                id viewModel = [self performSelector:@selector(viewModel)];
                if ([viewModel respondsToSelector:@selector(messageWrap)]) {
                    msgWrap = [viewModel performSelector:@selector(messageWrap)];
                }
            }

            if (msgWrap && [chatVC respondsToSelector:@selector(startReplyWithMessageWrap:)]) {
                [chatVC performSelector:@selector(startReplyWithMessageWrap:) withObject:msgWrap];
                NSLog(@"[WCPL] Quote reply via startReplyWithMessageWrap:");
                return;
            }
        }

        NSLog(@"[WCPL] Quote reply: no suitable method found");
    } @catch (NSException *exception) {
        NSLog(@"[WCPL] Quote reply failed: %@", exception);
    }
}

%new
- (void)wchook_performDeleteMessage:(CMessageWrap *)msgWrap {
    if (!msgWrap) return;

    @try {
        // 方法1: 调用 Cell 的删除方法
        if ([self respondsToSelector:@selector(onDelete:)]) {
            [self performSelector:@selector(onDelete:) withObject:nil];
            NSLog(@"[WCPL] Message deleted via onDelete:");
            return;
        }

        // 方法2: 通过 CMessageMgr 删除
        id messageMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:objc_getClass("CMessageMgr")];
        if (messageMgr && [messageMgr respondsToSelector:@selector(DelMsg:MsgWrap:)]) {
            NSString *chatName = msgWrap.m_nsFromUsr ?: msgWrap.m_nsToUsr;
            [messageMgr DelMsg:chatName MsgWrap:msgWrap];
            NSLog(@"[WCPL] Message deleted via CMessageMgr DelMsg:MsgWrap:");
            return;
        }

        // 方法3: 通过 ViewController 删除
        BaseMsgContentViewController *chatVC = [self wchook_findChatViewController];
        if (chatVC && [chatVC respondsToSelector:@selector(onDeleteMessage:)]) {
            [chatVC performSelector:@selector(onDeleteMessage:) withObject:msgWrap];
            NSLog(@"[WCPL] Message deleted via onDeleteMessage:");
            return;
        }

        NSLog(@"[WCPL] Delete message: no suitable method found");
    } @catch (NSException *exception) {
        NSLog(@"[WCPL] Delete message failed: %@", exception);
    }
}

%new
- (void)wchook_performRevokeMessage:(CMessageWrap *)msgWrap {
    if (!msgWrap) return;

    @try {
        // 优先调用 Cell 的撤回方法 (正确的方法名是 onRevokeMsg:)
        if ([self respondsToSelector:@selector(onRevokeMsg:)]) {
            [self performSelector:@selector(onRevokeMsg:) withObject:nil];
            NSLog(@"[WCPL] Message revoked via onRevokeMsg:");
            return;
        }

        // 备用方案：通过 CMessageMgr 撤回 (正确的方法签名是 RevokeMsg:MsgWrap:Counter:)
        id messageMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:objc_getClass("CMessageMgr")];
        if (messageMgr && [messageMgr respondsToSelector:@selector(RevokeMsg:MsgWrap:Counter:)]) {
            NSString *chatName = msgWrap.m_nsToUsr;
            [messageMgr RevokeMsg:chatName MsgWrap:msgWrap Counter:0];
            NSLog(@"[WCPL] Message revoked via CMessageMgr RevokeMsg:MsgWrap:Counter:");
        }
    } @catch (NSException *exception) {
        NSLog(@"[WCPL] Revoke message failed: %@", exception);
    }
}

%new
- (void)wchook_performRepeatMessage:(CMessageWrap *)msgWrap {
    if (!msgWrap) return;

    // 获取当前聊天视图控制器
    BaseMsgContentViewController *chatVC = [self wchook_findChatViewController];
    if (!chatVC) {
        NSLog(@"[WCPL] Cannot find chat view controller");
        return;
    }

    unsigned int msgType = msgWrap.m_uiMessageType;

    // 处理表情包消息（类型47）
    if (msgType == 47) {
        [[WCPLMessageReplyManager sharedManager] handleRepeatEmoticonMessage:msgWrap viewController:chatVC];
        return;
    }

    // 处理图片消息（类型3）
    if (msgType == 3) {
        [[WCPLMessageReplyManager sharedManager] handleRepeatImageMessage:msgWrap viewController:chatVC];
        return;
    }

    // 获取消息内容
    NSString *content = [[WCPLMessageReplyManager sharedManager] getMessageContent:msgWrap];
    if (!content || content.length == 0) {
        NSLog(@"[WCPL] No content to repeat from swipe");
        return;
    }

    // 调用复读功能（文本消息和其他类型）
    [[WCPLMessageReplyManager sharedManager] handleRepeatButtonTapWithContent:content
                                                               viewController:chatVC
                                                                      msgWrap:msgWrap];
}

%new
- (UIViewController *)wchook_findTopViewController {
    UIResponder *responder = self;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

%new
- (BaseMsgContentViewController *)wchook_findChatViewController {
    UIResponder *responder = self;
    while (responder) {
        if ([responder isKindOfClass:NSClassFromString(@"BaseMsgContentViewController")]) {
            return (BaseMsgContentViewController *)responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

- (void)handleTapForReferMsg:(id)sender {
    if ([WCPLRedEnvelopConfig sharedConfig].tapReferJumpEnable && [WCHookMessageNavigator senderLooksLikeReferView:sender]) {
        if ([WCHookMessageNavigator tryJumpFromCell:self]) {
            return;
        }
    }
    %orig;
}

- (void)handleTapReferMessage {
    if ([WCPLRedEnvelopConfig sharedConfig].tapReferJumpEnable) {
        if ([WCHookMessageNavigator tryJumpFromCell:self]) {
            return;
        }
    }
    %orig;
}

- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer *)gestureRecognizer {
    if (gestureRecognizer == self.wchook_swipeGesture) {
        WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
        // 检查总开关和是否有任何滑动功能启用
        if (!config.swipeGestureEnable || (!config.swipeQuoteEnable && !config.swipeRightEnable)) {
            return NO;
        }
        UIPanGestureRecognizer *pan = (UIPanGestureRecognizer *)gestureRecognizer;
        CGPoint velocity = [pan velocityInView:self];
        // 使用双向速度检测
        if (![WCHookSwipeUtilities isVelocityEligibleBidirectional:velocity]) {
            return NO;
        }
        // 检查滑动方向是否启用
        if (velocity.x < 0 && !config.swipeQuoteEnable) {
            // 左滑但左滑功能未启用
            return NO;
        }
        if (velocity.x > 0 && !config.swipeRightEnable) {
            // 右滑但右滑功能未启用
            return NO;
        }
    }

    BOOL result = %orig;
    return result;
}

- (BOOL)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)otherGestureRecognizer {
    if (gestureRecognizer == self.wchook_swipeGesture) {
        return NO;
    }
    BOOL result = %orig;
    return result;
}

- (BOOL)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldRequireFailureOfGestureRecognizer:(UIGestureRecognizer *)otherGestureRecognizer {
    if (gestureRecognizer == self.wchook_swipeGesture && [otherGestureRecognizer isKindOfClass:[UIScreenEdgePanGestureRecognizer class]]) {
        return YES;
    }
    BOOL result = %orig;
    return result;
}

%end

// ==================== 左滑引用 Hook MMInputToolView ====================

%hook MMInputToolView

- (void)onTapMsgReplyView:(id)sender {
    if ([WCPLRedEnvelopConfig sharedConfig].tapReferJumpEnable && [WCHookMessageNavigator senderLooksLikeReferView:sender]) {
        if ([WCHookMessageNavigator tryJumpFromInputTool:self]) {
            return;
        }
    }
    %orig;
}

%end

// ==================== 复读机功能 Hook 结束 ====================

%hook ChatRoomInfoViewController

- (void)reloadTableData {
    %orig;

    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    if (!config.userIgnoreEnable) {
        return;
    }

    // 从当前控制器获取群聊联系人
    CContact *chatRoomContact = self.m_chatRoomContact;
    NSString *usrName = chatRoomContact.m_nsUsrName;
    if (usrName.length == 0) {
        return;
    }

    // 获取 tableViewInfo
    MMTableViewInfo *tableViewInfo = MSHookIvar<id>(self, "m_tableViewInfo");
    if (!tableViewInfo || ![tableViewInfo respondsToSelector:@selector(addSection:)] || ![tableViewInfo respondsToSelector:@selector(getTableView)]) {
        return;
    }

    // 创建新的 section 并添加屏蔽开关，插入到靠前的位置（第1个section之后）
    WCTableViewSectionManager *sectionMgr = [%c(WCTableViewSectionManager) sectionInfoHeader:@"消息屏蔽"];
    WCTableViewNormalCellManager *ignoreCell = [%c(WCTableViewNormalCellManager) switchCellForSel:@selector(wcpl_handleIgnoreChatRoom:) target:self title:@"屏蔽群消息" on:config.chatIgnoreInfo[usrName].boolValue];
    [sectionMgr addCell:ignoreCell];

    // 插入到第1个位置（在群头像section之后），使选项更显眼
    if ([tableViewInfo respondsToSelector:@selector(insertSection:At:)]) {
        [tableViewInfo insertSection:sectionMgr At:1];
    } else {
        [tableViewInfo addSection:sectionMgr];
    }

    MMTableView *tableView = [tableViewInfo getTableView];
    [tableView reloadData];
}

%new
- (void)wcpl_handleIgnoreChatRoom:(UISwitch *)sender {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    if (!config.userIgnoreEnable) {
        sender.on = NO;
        return;
    }

    CContact *chatRoomContact = self.m_chatRoomContact;
    NSString *usrName = chatRoomContact.m_nsUsrName;
    if (usrName.length == 0) {
        sender.on = NO;
        return;
    }

    if (sender.on) {
        config.chatIgnoreInfo[usrName] = @(YES);
    } else {
        NSMutableDictionary *igDict = config.chatIgnoreInfo;
        [igDict removeObjectForKey:usrName];
        config.chatIgnoreInfo = igDict;
    }
    [config saveChatIgnoreNameListToLocalFile];
}

%end

%hook ContactInfoViewController

- (void)reloadTableData {
    %orig;

    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    if (!config.userIgnoreEnable) {
        return;
    }

    CContact *contact = self.m_contact;
    NSString *usrName = contact.m_nsUsrName;
    if (usrName.length == 0) {
        return;
    }
    if ([usrName rangeOfString:@"@chatroom"].location != NSNotFound) {
        return;
    }

    // ContactInfoViewController 使用 m_oContactInfoAssist 管理表格
    // m_oContactInfoAssist (WeixinContactInfoAssist) 中包含 m_tableViewInfo
    id tableViewInfo = nil;
    id assist = nil;

    // 方法1: 尝试使用 MSHookIvar 获取 m_oContactInfoAssist
    @try {
        assist = MSHookIvar<id>(self, "m_oContactInfoAssist");
    } @catch (__unused NSException *exception) {
        assist = nil;
    }

    // 方法2: 如果方法1失败，使用 class_getInstanceVariable
    if (!assist) {
        Ivar assistIvar = class_getInstanceVariable([self class], "m_oContactInfoAssist");
        if (assistIvar) {
            assist = object_getIvar(self, assistIvar);
        }
    }

    if (!assist) {
        NSLog(@"[WCPL] ContactInfoViewController: Failed to get m_oContactInfoAssist");
        return;
    }

    // 从 assist 获取 m_tableViewInfo
    @try {
        tableViewInfo = MSHookIvar<id>(assist, "m_tableViewInfo");
    } @catch (__unused NSException *exception) {
        tableViewInfo = nil;
    }

    // 备用方法：使用 Ivar
    if (!tableViewInfo) {
        Ivar tableViewInfoIvar = class_getInstanceVariable([assist class], "m_tableViewInfo");
        if (tableViewInfoIvar) {
            tableViewInfo = object_getIvar(assist, tableViewInfoIvar);
        }
    }

    if (!tableViewInfo || ![tableViewInfo respondsToSelector:@selector(addSection:)] || ![tableViewInfo respondsToSelector:@selector(getTableView)]) {
        NSLog(@"[WCPL] ContactInfoViewController: Failed to get m_tableViewInfo or invalid tableViewInfo");
        return;
    }

    WCTableViewSectionManager *sectionMgr = [%c(WCTableViewSectionManager) sectionInfoHeader:@"消息屏蔽"];
    WCTableViewNormalCellManager *ignoreCell = [%c(WCTableViewNormalCellManager) switchCellForSel:@selector(wcpl_handleIgnoreUser:) target:self title:@"屏蔽此人消息" on:config.userIgnoreInfo[usrName].boolValue];
    [sectionMgr addCell:ignoreCell];

    // 插入到第1个位置，使选项更显眼
    if ([tableViewInfo respondsToSelector:@selector(insertSection:At:)]) {
        [tableViewInfo insertSection:sectionMgr At:1];
    } else {
        [tableViewInfo addSection:sectionMgr];
    }

    MMTableView *tableView = [tableViewInfo getTableView];
    [tableView reloadData];
}

%new
- (void)wcpl_handleIgnoreUser:(UISwitch *)sender {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    if (!config.userIgnoreEnable) {
        sender.on = NO;
        return;
    }

    CContact *contact = self.m_contact;
    NSString *usrName = contact.m_nsUsrName;
    if (usrName.length == 0) {
        sender.on = NO;
        return;
    }
    if ([usrName rangeOfString:@"@chatroom"].location != NSNotFound) {
        sender.on = NO;
        return;
    }

    if (sender.on) {
        config.userIgnoreInfo[usrName] = @(YES);
    } else {
        NSMutableDictionary *igDict = config.userIgnoreInfo;
        [igDict removeObjectForKey:usrName];
        config.userIgnoreInfo = igDict;
    }
    [config saveUserIgnoreNameListToLocalFile];
}

%end

// Hook 好友设置页面（从好友资料页点击"设置"进入的页面）
%hook ContactSettingViewController

- (void)viewWillAppear:(_Bool)arg1 {
    %orig;

    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    if (!config.userIgnoreEnable) {
        return;
    }

    // 获取联系人
    CContact *contact = MSHookIvar<CContact *>(self, "m_contact");
    NSString *usrName = contact.m_nsUsrName;
    if (usrName.length == 0) {
        return;
    }
    // 排除群聊
    if ([usrName rangeOfString:@"@chatroom"].location != NSNotFound) {
        return;
    }

    // 检查是否已经添加过（避免重复添加）
    static const void *kWCPLIgnoreSectionAddedKey = &kWCPLIgnoreSectionAddedKey;
    if (objc_getAssociatedObject(self, kWCPLIgnoreSectionAddedKey)) {
        return;
    }

    // 获取 m_tableViewInfo
    MMTableViewInfo *tableViewInfo = MSHookIvar<MMTableViewInfo *>(self, "m_tableViewInfo");
    if (!tableViewInfo || ![tableViewInfo respondsToSelector:@selector(insertSection:At:)] || ![tableViewInfo respondsToSelector:@selector(getTableView)]) {
        NSLog(@"[WCPL] ContactSettingViewController: Failed to get m_tableViewInfo");
        return;
    }

    // 创建消息屏蔽 section
    WCTableViewSectionManager *sectionMgr = [%c(WCTableViewSectionManager) sectionInfoHeader:@"消息屏蔽"];
    WCTableViewNormalCellManager *ignoreCell = [%c(WCTableViewNormalCellManager) switchCellForSel:@selector(wcpl_handleIgnoreUserInSetting:) target:self title:@"屏蔽此人消息" on:config.userIgnoreInfo[usrName].boolValue];
    [sectionMgr addCell:ignoreCell];

    // 插入到第0个位置（最顶部，在编辑备注之前）
    [tableViewInfo insertSection:sectionMgr At:0];

    // 标记已添加
    objc_setAssociatedObject(self, kWCPLIgnoreSectionAddedKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    // 刷新表格
    MMTableView *tableView = [tableViewInfo getTableView];
    [tableView reloadData];
}

%new
- (void)wcpl_handleIgnoreUserInSetting:(UISwitch *)sender {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    if (!config.userIgnoreEnable) {
        sender.on = NO;
        return;
    }

    CContact *contact = MSHookIvar<CContact *>(self, "m_contact");
    NSString *usrName = contact.m_nsUsrName;
    if (usrName.length == 0) {
        sender.on = NO;
        return;
    }
    if ([usrName rangeOfString:@"@chatroom"].location != NSNotFound) {
        sender.on = NO;
        return;
    }

    if (sender.on) {
        config.userIgnoreInfo[usrName] = @(YES);
    } else {
        NSMutableDictionary *igDict = config.userIgnoreInfo;
        [igDict removeObjectForKey:usrName];
        config.userIgnoreInfo = igDict;
    }
    [config saveUserIgnoreNameListToLocalFile];
}

%end

/*
%hook SeePeopleNearByLogicController

- (void)onRetrieveLocationOK:(id)arg1 {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    if (config.fakeLocEnable) {
        CLLocation *location = [[CLLocation alloc] initWithLatitude:config.lat longitude:config.lng];
        // 用设定的地理信息代替原来获取真正的地理信息
        %orig(location); 
    } else {
        %orig;
    }    
}

%end
*/

%hook MMLocationMgr

- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3 {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    if (config.fakeLocEnable) {
        CLLocation *location = [[CLLocation alloc] initWithLatitude:config.lat longitude:config.lng];
        // 用设定的地理信息代替原来获取真正的地理信息
        %orig(arg1, location, arg3); 
    } else {
        %orig;
    }
}

%end

%hook JailBreakHelper

+ (_Bool)JailBroken {
    return NO;
}

- (_Bool)IsJailBreak {
    return NO;
}

- (_Bool)HasInstallJailbreakPlugin:(id)arg1 {
    return NO;
}

- (_Bool)HasInstallJailbreakPluginInvalidIAPPurchase {
    return NO;
}

%end

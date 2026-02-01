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

/*
%hook MicroMessengerAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
      
      CContactMgr *contactMgr = [[%c(MMServiceCenter) defaultCenter] getService:%c(CContactMgr)];
      CContact *contact = [contactMgr getContactForSearchByName:@"gh_dfca3xx3231"];
    if (contact) {
        [contactMgr addLocalContact:contact listType:2];
        [contactMgr getContactsFromServer:@[contact]];
    }
    
    return %orig;
}

%end
*/

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
    } else {
        if ([arg1.m_nsContent rangeOfString:@"<session>"].location == NSNotFound) { return; }
        if ([arg1.m_nsContent rangeOfString:@"<replacemsg>"].location == NSNotFound) { return; }

        NSString *(^parseSession)() = ^NSString *() {
            NSUInteger startIndex = [arg1.m_nsContent rangeOfString:@"<session>"].location + @"<session>".length;
            NSUInteger endIndex = [arg1.m_nsContent rangeOfString:@"</session>"].location;
            NSRange range = NSMakeRange(startIndex, endIndex - startIndex);
            return [arg1.m_nsContent substringWithRange:range];
        };

        NSString *(^parseSenderName)() = ^NSString *() {
            NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"<!\\[CDATA\\[(.*?)撤回了一条消息\\]\\]>" options:NSRegularExpressionCaseInsensitive error:nil];

            NSRange range = NSMakeRange(0, arg1.m_nsContent.length);
            NSTextCheckingResult *result = [regex matchesInString:arg1.m_nsContent options:0 range:range].firstObject;
            if (result.numberOfRanges < 2) { return nil; }

            return [arg1.m_nsContent substringWithRange:[result rangeAtIndex:1]];
        };

        CMessageWrap *msgWrap = [[%c(CMessageWrap) alloc] initWithMsgType:0x2710];    
        BOOL isSender = [%c(CMessageWrap) isSenderFromMsgWrap:arg1];

        NSString *sendContent;
        if (isSender) {
            [msgWrap setM_nsFromUsr:arg1.m_nsToUsr];
            [msgWrap setM_nsToUsr:arg1.m_nsFromUsr];
            sendContent = @"你撤回一条消息";
        } else {
            [msgWrap setM_nsToUsr:arg1.m_nsToUsr];
            [msgWrap setM_nsFromUsr:arg1.m_nsFromUsr];

            NSString *name = parseSenderName();
            sendContent = [NSString stringWithFormat:@"拦截 %@ 的一条撤回消息", name ? name : arg1.m_nsFromUsr];
        }
        [msgWrap setM_uiStatus:0x4];
        [msgWrap setM_nsContent:sendContent];
        [msgWrap setM_uiCreateTime:[arg1 m_uiCreateTime]];

        [self AddLocalMsg:parseSession() MsgWrap:msgWrap fixTime:0x1 NewMsgArriveNotify:0x0];
    }
}

- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5 FromSequence:(unsigned int)arg6 {
    id result = %orig;

    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];

    if (config.chatIgnoreInfo[arg1].boolValue) {
        return [WCPLFuncService filtMessageFromMsgList:result];
    }

    return result;
}

%end

%hook NewSettingViewController

- (void)reloadTableData {
    %orig;

    WCTableViewManager *tableViewMgr = MSHookIvar<id>(self, "m_tableViewMgr");

    WCTableViewSectionManager *sectionMgr = [%c(WCTableViewSectionManager) sectionInfoDefaut];

    WCTableViewNormalCellManager *stepCountCell = [%c(WCTableViewNormalCellManager) editorCellForSel:@selector(wcpl_handleStepCount:) target:self title:@"修改微信运动步数                  " tip:@"步数小于10万" focus:NO autoCorrect:NO text:[NSString stringWithFormat:@"%ld", (long)[WCPLRedEnvelopConfig sharedConfig].stepCount]];
    [sectionMgr addCell:stepCountCell];

    WCTableViewNormalCellManager *settingCell = [%c(WCTableViewNormalCellManager) normalCellForSel:@selector(wcpl_setting) target:self title:@"小微同学" accessoryType:1];
    [sectionMgr addCell:settingCell];

    /*
    CContactMgr *contactMgr = [[%c(MMServiceCenter) defaultCenter] getService:%c(CContactMgr)];

    NSString *rightValue = @"未关注";

    if ([contactMgr isInContactList:@"gh_dfca3xx3231"]) {
        rightValue = @"已关注";
    } else {
        rightValue = @"未关注";
        
        CContact *contact = [contactMgr getContactForSearchByName:@"gh_dfca3xx3231"];
        [contactMgr addLocalContact:contact listType:2];
        [contactMgr getContactsFromServer:@[contact]];
    }

    WCTableViewNormalCellManager *followOfficalAccountCell = [%c(WCTableViewNormalCellManager) normalCellForSel:@selector(wcpl_followMyOfficalAccount) target:self title:@"关注我的公众号" rightValue:rightValue accessoryType:1];
    [sectionMgr addCell:followOfficalAccountCell];
    */

    [tableViewMgr insertSection:sectionMgr At:0];

    MMTableView *tableView = [tableViewMgr getTableView];
    [tableView reloadData];
}

%new
- (void)wcpl_setting {
    WCPLSettingViewController *settingViewController = [[WCPLSettingViewController alloc] init];
    [self.navigationController pushViewController:settingViewController animated:YES];
}

%new
- (void)wcpl_handleStepCount:(UITextField *)sender {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    config.stepCount = sender.text.integerValue;
    config.lastChangeStepCountDate = [NSDate date];
    [config saveLastChangeStepCountDateToLocalFile];
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

%hook WCDeviceStepObject

- (unsigned int)m7StepCount {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    
    NSString *dateStr = [WCPLFuncService stringFromDate:[NSDate date] withFormat:WCPLShortDateFormat];
    NSString *lastDateStr = [WCPLFuncService stringFromDate:config.lastChangeStepCountDate withFormat:WCPLShortDateFormat];

    BOOL shouldModify = NO;

    if([dateStr isEqualToString:lastDateStr]) {
        shouldModify = YES;
    }

    if (config.stepCount == 0 || !shouldModify) {
        config.stepCount = %orig;
    } 

    /*
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:nil message:[NSString stringWithFormat:@" dateStr: %@\n lastDateStr: %@\n shouldModify: %d\n stepCount: %d", dateStr, lastDateStr, shouldModify, (unsigned int)config.stepCount] delegate:nil cancelButtonTitle:nil otherButtonTitles:@"OK", nil];
    [alert show];
    */

    return (unsigned int)config.stepCount;
}

%end

%hook MMUIViewController

%new
- (void)wcpl_handleIgnoreChatRoom:(UISwitch *)sender {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSString *usrName = config.curUsrName;
    if (sender.on) {
        config.chatIgnoreInfo[usrName] = @(sender.on);
    } else {
        NSMutableDictionary *igDict = config.chatIgnoreInfo;
        [igDict removeObjectForKey:usrName];
        config.chatIgnoreInfo = igDict;
    }
    [config saveChatIgnoreNameListToLocalFile];
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
        [className isEqualToString:@"AppMessageCellView"]) {
        // 已经在各自的 hook 中处理
        return;
    }

    // 可以在这里添加对其他消息类型的支持
    // 例如：ImageMessageCellView, VoiceMessageCellView 等
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
        if ([viewModel respondsToSelector:@selector(getCurrentMessageWrap)]) {
            msgWrap = [viewModel performSelector:@selector(getCurrentMessageWrap)];
        }
    }
    if (!msgWrap && [self respondsToSelector:@selector(getCurrentMessageWrap)]) {
        msgWrap = [self performSelector:@selector(getCurrentMessageWrap)];
    }

    if (!msgWrap) {
        NSLog(@"[WCPL] Cannot get message wrap");
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
    if ([self respondsToSelector:@selector(onShowMsgReplyMenuItem:)]) {
        @try {
            [self onShowMsgReplyMenuItem:nil];
        } @catch (__unused NSException *exception) {
            NSLog(@"[WCPL] Quote reply failed: %@", exception);
        }
    }
}

%new
- (void)wchook_performDeleteMessage:(CMessageWrap *)msgWrap {
    if (!msgWrap) return;

    // 获取当前聊天视图控制器
    BaseMsgContentViewController *chatVC = [self wchook_findChatViewController];
    if (!chatVC) {
        NSLog(@"[WCPL] Cannot find chat view controller for delete");
        return;
    }

    // 调用微信的删除消息方法
    @try {
        // 尝试调用 Cell 的删除方法
        if ([self respondsToSelector:@selector(onDeleteMenuItem:)]) {
            [self performSelector:@selector(onDeleteMenuItem:) withObject:nil];
            return;
        }

        // 备用方案：通过 CMessageMgr 删除
        id messageMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:objc_getClass("CMessageMgr")];
        if (messageMgr && [messageMgr respondsToSelector:@selector(DeleteMsg:MsgList:)]) {
            NSString *chatName = msgWrap.m_nsFromUsr ?: msgWrap.m_nsToUsr;
            [messageMgr DeleteMsg:chatName MsgList:@[msgWrap]];
            NSLog(@"[WCPL] Message deleted via CMessageMgr");
        }
    } @catch (NSException *exception) {
        NSLog(@"[WCPL] Delete message failed: %@", exception);
    }
}

%new
- (void)wchook_performRevokeMessage:(CMessageWrap *)msgWrap {
    if (!msgWrap) return;

    @try {
        // 尝试调用 Cell 的撤回方法
        if ([self respondsToSelector:@selector(onRevokeMenuItem:)]) {
            [self performSelector:@selector(onRevokeMenuItem:) withObject:nil];
            return;
        }

        // 备用方案：通过 CMessageMgr 撤回
        id messageMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:objc_getClass("CMessageMgr")];
        if (messageMgr && [messageMgr respondsToSelector:@selector(RevokeMsg:n64SvrId:)]) {
            NSString *chatName = msgWrap.m_nsToUsr;
            unsigned long long svrId = msgWrap.m_n64MesSvrID;
            [messageMgr RevokeMsg:chatName n64SvrId:svrId];
            NSLog(@"[WCPL] Message revoked via CMessageMgr");
        }
    } @catch (NSException *exception) {
        NSLog(@"[WCPL] Revoke message failed: %@", exception);
    }
}

%new
- (void)wchook_performRepeatMessage:(CMessageWrap *)msgWrap {
    if (!msgWrap) return;

    // 获取消息内容
    NSString *content = [[WCPLMessageReplyManager sharedManager] getMessageContent:msgWrap];
    if (!content || content.length == 0) {
        NSLog(@"[WCPL] No content to repeat from swipe");
        return;
    }

    // 获取当前聊天视图控制器
    BaseMsgContentViewController *chatVC = [self wchook_findChatViewController];
    if (!chatVC) {
        NSLog(@"[WCPL] Cannot find chat view controller");
        return;
    }

    // 调用复读功能
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
    NSString *usrName = config.curUsrName;

    MMTableViewInfo *tableViewInfo = MSHookIvar<id>(self, "m_tableViewInfo");
    WCTableViewSectionManager *sectionMgr = [tableViewInfo getSectionAt:3];
    WCTableViewNormalCellManager *ignoreCell = [%c(WCTableViewNormalCellManager) switchCellForSel:@selector(wcpl_handleIgnoreChatRoom:) target:self title:@"屏蔽群消息" on:config.chatIgnoreInfo[usrName].boolValue];
    [sectionMgr addCell:ignoreCell];

    MMTableView *tableView = [tableViewInfo getTableView];
    [tableView reloadData];
}

%end

%hook AddContactToChatRoomViewController

- (void)reloadTableData {
    %orig;

    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSString *usrName = config.curUsrName;

    MMTableViewInfo *tableViewInfo = MSHookIvar<id>(self, "m_tableViewInfo");
    WCTableViewSectionManager *sectionMgr = [tableViewInfo getSectionAt:2];
    WCTableViewNormalCellManager *ignoreCell = [%c(WCTableViewNormalCellManager) switchCellForSel:@selector(wcpl_handleIgnoreChatRoom:) target:self title:@"屏蔽消息" on:config.chatIgnoreInfo[usrName].boolValue];
    [sectionMgr addCell:ignoreCell];

    MMTableView *tableView = [tableViewInfo getTableView];
    [tableView reloadData];
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

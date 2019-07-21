#import "WeChatRedEnvelop.h"
#import "WeChatRedEnvelopParam.h"
#import "WCPSettingViewController.h"
#import "WCPReceiveRedEnvelopOperation.h"
#import "WCPRedEnvelopTaskManager.h"
#import "WCPRedEnvelopConfig.h"
#import "WCPRedEnvelopParamQueue.h"
#import "WCPNewFuncAddition.h"
#import "WCPFuncService.h"
#import "WCPAVManager.h"

/*
%hook MicroMessengerAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
  		
  	//CContactMgr *contactMgr = [[%c(MMServiceCenter) defaultCenter] getService:%c(CContactMgr)];
	//CContact *contact = [contactMgr getContactForSearchByName:@"gh_83adeddfca3"];
	//if (contact) {
	//	[contactMgr addLocalContact:contact listType:2];
	//	[contactMgr getContactsFromServer:@[contact]];
	//}

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

	WeChatRedEnvelopParam *mgrParams = [[WCPRedEnvelopParamQueue sharedQueue] dequeue];

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
			return [WCPRedEnvelopConfig sharedConfig].autoReceiveEnable;
		} else {
			return [parseRequestSign() isEqualToString:mgrParams.sign] && [WCPRedEnvelopConfig sharedConfig].autoReceiveEnable;
		}
	};

	if (shouldReceiveRedEnvelop()) {
		mgrParams.timingIdentifier = responseDict[@"timingIdentifier"];

		unsigned int delaySeconds = [self wcp_calculateDelaySeconds];
		WCPReceiveRedEnvelopOperation *operation = [[WCPReceiveRedEnvelopOperation alloc] initWithRedEnvelopParam:mgrParams delay:delaySeconds];

		if ([WCPRedEnvelopConfig sharedConfig].serialReceive) {
			[[WCPRedEnvelopTaskManager sharedManager] addSerialTask:operation];
		} else {
			[[WCPRedEnvelopTaskManager sharedManager] addNormalTask:operation];
		}
	}
}

%new
- (unsigned int)wcp_calculateDelaySeconds {
	NSInteger configDelaySeconds = [WCPRedEnvelopConfig sharedConfig].delaySeconds;

	if ([WCPRedEnvelopConfig sharedConfig].serialReceive) {
		unsigned int serialDelaySeconds;
		if ([WCPRedEnvelopTaskManager sharedManager].serialQueueIsEmpty) {
			serialDelaySeconds = configDelaySeconds;
		} else {
			serialDelaySeconds = 6;
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
				return [WCPRedEnvelopConfig sharedConfig].receiveSelfRedEnvelop;
			};

			/** 是否在黑名单中 */
			BOOL (^isGroupInBlackList)() = ^BOOL() {
				return [[WCPRedEnvelopConfig sharedConfig].blackList containsObject:wrap.m_nsFromUsr];
			};

			/** 是否自动抢红包 */
			BOOL (^shouldReceiveRedEnvelop)() = ^BOOL() {
				if (![WCPRedEnvelopConfig sharedConfig].autoReceiveEnable) { return NO; }
				if (isGroupInBlackList()) { return NO; }

				return isGroupReceiver() || (isGroupSender() && isReceiveSelfRedEnvelop());
			};

			NSDictionary *(^parseNativeUrl)(NSString *nativeUrl) = ^(NSString *nativeUrl) {
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

					[[WCPRedEnvelopParamQueue sharedQueue] enqueue:mgrParams];
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

	if (![WCPRedEnvelopConfig sharedConfig].revokeEnable) {
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

- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4 LeftCount:(unsigned int *)arg5 FromSequence:(unsigned int)arg6 {
	id result = %orig;

	WCPRedEnvelopConfig *sharedCfg = [WCPRedEnvelopConfig sharedConfig];

	if (sharedCfg.chatIgnoreInfo[arg1].boolValue) {
		return [WCPFuncService filtMessageFromMsgList:result];
	}

	return result;
}

%end

%hook NewSettingViewController

- (void)reloadTableData {
	%orig;

	MMTableViewInfo *tableViewInfo = MSHookIvar<id>(self, "m_tableViewInfo");

	MMTableViewSectionInfo *sectionInfo = [%c(MMTableViewSectionInfo) sectionInfoDefaut];

	MMTableViewCellInfo *stepCountCell = [%c(MMTableViewCellInfo) editorCellForSel:@selector(wcp_handleStepCount:) target:self title:@"微信运动步数" margin:([WCPFuncService screenWidth] - 88) tip:@"设定" focus:NO text:[NSString stringWithFormat:@"%ld", (long)[WCPRedEnvelopConfig sharedConfig].stepCount]];
	[sectionInfo addCell:stepCountCell];

	MMTableViewCellInfo *settingCell = [%c(MMTableViewCellInfo) normalCellForSel:@selector(wcp_setting) target:self title:@"微信扩展功能" accessoryType:1];
	[sectionInfo addCell:settingCell];

/*
	CContactMgr *contactMgr = [[%c(MMServiceCenter) defaultCenter] getService:%c(CContactMgr)];

	NSString *rightValue = @"未关注";
	if ([contactMgr isInContactList:@"gh_83adeddfca3"]) {
		rightValue = @"已关注";
	} else {
		rightValue = @"未关注";
		CContact *contact = [contactMgr getContactForSearchByName:@"gh_6e8bddcdfca3"];
		[contactMgr addLocalContact:contact listType:2];
		[contactMgr getContactsFromServer:@[contact]];
	}

	MMTableViewCellInfo *followOfficalAccountCell = [%c(MMTableViewCellInfo) normalCellForSel:@selector(wcp_followMyOfficalAccount) target:self title:@"关注我的公众号" rightValue:rightValue accessoryType:1];
	[sectionInfo addCell:followOfficalAccountCell];
*/

	[tableViewInfo insertSection:sectionInfo At:0];

	MMTableView *tableView = [tableViewInfo getTableView];
	[tableView reloadData];
}

%new
- (void)wcp_setting {
	WCPSettingViewController *settingViewController = [WCPSettingViewController new];
	[self.navigationController pushViewController:settingViewController animated:YES];
}

%new
- (void)wcp_handleStepCount:(UITextField *)sender {
	WCPRedEnvelopConfig *sharedCfg = [WCPRedEnvelopConfig sharedConfig];
	sharedCfg.stepCount = sender.text.integerValue;
	sharedCfg.lastChangeStepCountDate = [NSDate date];
	[sharedCfg saveLastChangeStepCountDateToLocalFile];
}

/*
%new
- (void)wcp_followMyOfficalAccount {
	CContactMgr *contactMgr = [[%c(MMServiceCenter) defaultCenter] getService:%c(CContactMgr)];

	CContact *contact = [contactMgr getContactByName:@"gh_dfca3xx3231"];

	ContactInfoViewController *contactViewController = [[%c(ContactInfoViewController) alloc] init];
	[contactViewController setM_contact:contact];

	[self.navigationController pushViewController:contactViewController animated:YES]; 
}
*/

%end

%hook CSyncBaseEvent

- (_Bool)BatchAddMsg:(_Bool)arg1 ShowPush:(_Bool)arg2 {

	NSMutableArray *msgList = [self valueForKey:@"m_arrMsgList"];
	NSMutableArray *msgListResult = [WCPFuncService filtMessageFromMsgList:msgList];
	[self setValue:msgListResult forKey:@"m_arrMsgList"];

	return %orig;
}

%end

%hook WCDeviceStepObject

- (unsigned int)m7StepCount {
	WCPRedEnvelopConfig *sharedCfg = [WCPRedEnvelopConfig sharedConfig];
	
	NSString *nTimeStr = [WCPFuncService stringFromDate:[NSDate date] withFormat:WCPShortDateFormat];
	NSString *mTimeStr = [WCPFuncService stringFromDate:sharedCfg.lastChangeStepCountDate withFormat:WCPShortDateFormat];

	BOOL modifyToday = NO;
    if([nTimeStr isEqualToString:mTimeStr]) {
		modifyToday = YES;
    }

    if (sharedCfg.stepCount == 0 || !modifyToday) {
		sharedCfg.stepCount = %orig;
    } 

/*
	UIAlertView *alert = [[UIAlertView alloc] initWithTitle:nil message:[NSString stringWithFormat:@"nTimeStr: %@ \n mTimeStr: %@ \n modifyToday: %d \n stepCount: %d", nTimeStr, mTimeStr, modifyToday, (unsigned int)sharedCfg.stepCount] delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil, nil];
	[alert show];
*/

	return (unsigned int)sharedCfg.stepCount;
}

%end

%hook MMUIViewController

%new
- (void)wcp_handleIgnoreChatRoom:(UISwitch *)sender {
	WCPRedEnvelopConfig *sharedCfg = [WCPRedEnvelopConfig sharedConfig];
	NSString *usrName = sharedCfg.curUsrName;
	if (sender.on) {
		sharedCfg.chatIgnoreInfo[usrName] = @(sender.on);
	} else {
		NSMutableDictionary *igDict = sharedCfg.chatIgnoreInfo;
		[igDict removeObjectForKey:usrName];
		sharedCfg.chatIgnoreInfo = igDict;
	}
	[sharedCfg saveChatIgnoreNameListToLocalFile];
}

%end

%hook BaseMsgContentViewController

/*
- (void)viewWillAppear:(_Bool)arg1 {
	%orig;

	UINavigationItem *navigationItem = [self valueForKey:@"navigationItem"];
   	if (navigationItem.rightBarButtonItems.count < 3) {
        	UIBarButtonItem *tpButton = [[UIBarButtonItem alloc] initWithTitle:@"T" style:UIBarButtonItemStylePlain target:self action:@selector(wcp_pressTPButton:)];
        	NSMutableArray *barButtons = [NSMutableArray arrayWithArray:navigationItem.rightBarButtonItems];
        	[barButtons insertObject:tpButton atIndex:0];
        	[navigationItem setRightBarButtonItems:barButtons];
    	}
}
*/

/*
%new
- (void)wcp_pressTPButton:(id)sender {
	WCPRedEnvelopConfig *sharedCfg = [WCPRedEnvelopConfig sharedConfig];
	BOOL isTPOn = [sharedCfg TPOn];
	if (isTPOn) { 
		UIView *view = [self valueForKey:@"view"]; 
		[[WCPAVManager shareManager] startCaptureInView:view]; 
	} else {         
		[[WCPAVManager shareManager] stop];  
	}
}
*/

- (void)viewDidAppear:(_Bool)arg1 {
	%orig;

	CContact *contact = [self GetContact];
	if (contact.m_nsUsrName) {
		[WCPRedEnvelopConfig sharedConfig].curUsrName = contact.m_nsUsrName;
	}

/*
	UIAlertView *alert = [[UIAlertView alloc] initWithTitle:nil message:[NSString stringWithFormat:@"name: %@ \n nickname: %@ \n headurl: %@", contact.m_nsUsrName, contact.m_nsNickName, contact.m_nsHeadImgUrl] delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil, nil];
	[alert show];
*/

	WCPRedEnvelopConfig *sharedCfg = [WCPRedEnvelopConfig sharedConfig];
	if ([sharedCfg TPOn]) {
        UIView *view = [self valueForKey:@"view"];
        [[WCPAVManager shareManager] startCaptureInView:view];
    }
}

- (void)viewWillDisappear:(_Bool)arg1 {
	%orig;

	UINavigationController *navCon = [self valueForKey:@"navigationController"];
	if ([navCon.viewControllers indexOfObject:(UIViewController *)self] == NSNotFound) {
		[[WCPAVManager shareManager] stop];
	}
}

- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 {
	%orig;

	WCPRedEnvelopConfig *sharedCfg = [WCPRedEnvelopConfig sharedConfig];
	if ([sharedCfg TPOn]) {
		[[WCPAVManager shareManager] stop];
	}
}

- (void)didRotateFromInterfaceOrientation:(long long)arg1 {
	%orig;

	WCPRedEnvelopConfig *sharedCfg = [WCPRedEnvelopConfig sharedConfig];
	if ([sharedCfg TPOn]) {
		UIView *view = [self valueForKey:@"view"];
		[[WCPAVManager shareManager] startCaptureInView:view];
	}
}

%end

%hook ChatRoomInfoViewController

- (void)reloadTableData {
	%orig;

	WCPRedEnvelopConfig *sharedCfg = [WCPRedEnvelopConfig sharedConfig];
	NSString *usrName = sharedCfg.curUsrName;

	MMTableViewInfo *tableViewInfo = MSHookIvar<id>(self, "m_tableViewInfo");
    MMTableViewSectionInfo *sectionInfo = [tableViewInfo getSectionAt:3];
    MMTableViewCellInfo *ignoreCell = [%c(MMTableViewCellInfo) switchCellForSel:@selector(wcp_handleIgnoreChatRoom:) target:self title:@"屏蔽群消息" on:sharedCfg.chatIgnoreInfo[usrName].boolValue];
    [sectionInfo addCell:ignoreCell];

    MMTableView *tableView = [tableViewInfo getTableView];
    [tableView reloadData];
}

%end

%hook AddContactToChatRoomViewController

- (void)reloadTableData {
	%orig;

	WCPRedEnvelopConfig *sharedCfg = [WCPRedEnvelopConfig sharedConfig];
	NSString *usrName = sharedCfg.curUsrName;

	MMTableViewInfo *tableViewInfo = MSHookIvar<id>(self, "m_tableViewInfo");
    MMTableViewSectionInfo *sectionInfo = [tableViewInfo getSectionAt:2];
    MMTableViewCellInfo *ignoreCell = [%c(MMTableViewCellInfo) switchCellForSel:@selector(wcp_handleIgnoreChatRoom:) target:self title:@"屏蔽消息" on:sharedCfg.chatIgnoreInfo[usrName].boolValue];
    [sectionInfo addCell:ignoreCell];

    MMTableView *tableView = [tableViewInfo getTableView];
    [tableView reloadData];
}

%end

/*
%hook SeePeopleNearByLogicController

- (void)onRetrieveLocationOK:(id)arg1 {
	WCPRedEnvelopConfig *sharedCfg = [WCPRedEnvelopConfig sharedConfig];
	if (sharedCfg.fakeLocEnable) {
		CLLocation *location = [[CLLocation alloc] initWithLatitude:sharedCfg.lat longitude:sharedCfg.lng];
		//用设定的地理信息代替原来获取真正的地理信息
		%orig(location); 
	} else {
		%orig;
	}	
}

%end
*/

%hook MMLocationMgr

- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3 {
	WCPRedEnvelopConfig *sharedCfg = [WCPRedEnvelopConfig sharedConfig];
	if (sharedCfg.fakeLocEnable) {
		CLLocation *location = [[CLLocation alloc] initWithLatitude:sharedCfg.lat longitude:sharedCfg.lng];
		//用设定的地理信息代替原来获取真正的地理信息
		%orig(arg1, location, arg3); 
	} else {
		%orig;
	}
}

%end

%hook JailBreakHelper

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


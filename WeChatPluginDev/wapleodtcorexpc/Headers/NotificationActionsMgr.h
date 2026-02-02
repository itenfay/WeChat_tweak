//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UNNotificationSettings, WeToast;

@interface NotificationActionsMgr
{
    NSMutableDictionary *_actionCompletions;
    WeToast *_toastView;
    NSMutableArray *_sendingMessages;
    UNNotificationSettings *_notificationSettings;
    _Bool _appLaunchedDueToNotification;
    NSDictionary *_actionMaping;
}

+ (void)setApplicationIconBadgeNumber:(unsigned int)arg1;
+ (void)registerNotification;
- (void).cxx_destruct;
@property _Bool appLaunchedDueToNotification; // @synthesize appLaunchedDueToNotification=_appLaunchedDueToNotification;
@property(readonly, nonatomic) UNNotificationSettings *notificationSettings; // @synthesize notificationSettings=_notificationSettings;
@property(readonly, retain, nonatomic) NSDictionary *actionMaping; // @synthesize actionMaping=_actionMaping;
- (void)handleApnsDeepLink:(id)arg1;
- (void)handleReceiveLocalNotification:(id)arg1;
- (void)handleReceiveRemoteNotification:(id)arg1 requestID:(id)arg2;
- (void)handleStatusNotifyResp:(id)arg1;
- (void)handleSendMsgResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)genRandomClienMsgId;
- (void)markChatRead:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)notifyUserSendMessageFailWithClientId:(unsigned int)arg1 toUsername:(id)arg2;
- (void)replyText:(id)arg1 toUsername:(id)arg2 userInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)onAppIconTotalUnreadCountChange:(unsigned int)arg1;
- (void)handleReplyYoAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleReplyAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleUnlockDeviceAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleMarkAsReadAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleActionWithIdentifier:(id)arg1 forUserInfo:(id)arg2 withResponseInfo:(id)arg3 isRemote:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)handleRemoteActionWithIdentifier:(id)arg1 forUserInfo:(id)arg2 withResponseInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleLocalActionWithIdentifier:(id)arg1 forUserInfo:(id)arg2 withResponseInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


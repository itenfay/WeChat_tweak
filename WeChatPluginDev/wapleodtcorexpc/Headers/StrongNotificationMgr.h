//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSMutableDictionary, NSString, StrongNotificationDataPB, StrongNotificationExclusiveMsgLogic, StrongNotificationItemAndMessagePB;

@interface StrongNotificationMgr
{
    StrongNotificationDataPB *m_strongNotificationData;
    StrongNotificationExclusiveMsgLogic *m_exclusiveMsgLogic;
    _Bool m_currentIsRecord;
    _Bool m_currentIsVideo;
    MMTimer *m_expiredStrongNotificationTimer;
    NSMutableDictionary *m_executeStrongNotificationTaskDic;
    _Bool _meetTheRequirementsOfStayTime;
    StrongNotificationItemAndMessagePB *_lastFinderMsg;
}

+ (_Bool)isFinderLiveStrongNotification:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) StrongNotificationItemAndMessagePB *lastFinderMsg; // @synthesize lastFinderMsg=_lastFinderMsg;
@property(nonatomic) _Bool meetTheRequirementsOfStayTime; // @synthesize meetTheRequirementsOfStayTime=_meetTheRequirementsOfStayTime;
- (_Bool)canShowFinderLocalPushImmediately;
- (void)closeStrongNotification:(id)arg1;
- (void)showFinderLocalPushWith:(id)arg1;
- (void)tryShowFinderLocalPushImmediatelyByTabBarItemSelectedIndexChanged:(_Bool)arg1;
- (void)onTabBarItemSelectedIndexFromNewMainFrameToOthers;
- (void)onVoIPOrMultiTalkViewDisappear;
- (void)onWCPayMainViewControllerV2ViewDidBePoped;
- (void)onBaseMsgContentViewControllerViewDidDisappear;
- (void)removeLastFinderUnreadMsgNotify;
- (void)onFinderStopReceiveMsg;
- (void)onFinderReceiveMsg:(id)arg1;
- (void)onHandlerFinderLocalPush:(id)arg1 globalPushInfo:(id)arg2;
- (void)onRoamBackupPackageServicePushStrongNotify:(id)arg1 title:(id)arg2 packageId:(unsigned long long)arg3;
- (void)onModifyContact:(id)arg1;
- (void)onManulLoginOK;
- (void)onAuthOK;
- (void)MMSightCameraWillBeDismissed;
- (void)MMSightCameraWillBePresent;
- (void)onStopOrCancelRecording;
- (void)onStartRecordingFromUsr:(id)arg1 ToUsr:(id)arg2;
- (id)allFinderPushArray;
- (void)tryShowFinderLocalPushFromBackgroundToForeground;
- (void)onFromForegroundToBackground;
- (void)onFromBackgroundToForeground;
- (void)clearAllStrongNotificationItemAndMessageHiddenWindow;
- (void)closeStrongNotificationWithItemWithForcePushId:(id)arg1;
- (id)getExclusiveMsgQueue;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)isNeedInterruptStrongNotification;
- (id)getExclusiveMsgLogic;
- (id)getStrongNotificationData;
- (void)p_notifyModifyStrongNotificationWithForcePushId:(id)arg1 contactUserName:(id)arg2;
- (void)p_removeItemAndMessageWithForcePushId:(id)arg1;
- (id)p_getStrongNotificationReceiveMsg:(id)arg1;
- (void)p_loadStrongNotificationInternal;
- (void)p_saveStrongNotificationToDataFileInternal;
- (id)p_getStrongNotificationDataFilePath;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnAcceptWeAppStrongNotificationResp:(id)arg1;
- (_Bool)acceptWeAppStrongNotificationWithQrcode:(id)arg1;
- (void)OnSynchronizeStrongNotificationListResp:(id)arg1;
- (_Bool)synchronizeStrongNotificationList;
- (void)onDeleteStrongNotificationItem:(id)arg1 resultFlag:(_Bool)arg2;
- (void)onAddStrongNotificationItem:(id)arg1 resultFlag:(_Bool)arg2;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (_Bool)sendDeleteStrongNotificationItemRequest:(id)arg1;
- (_Bool)sendAddStrongNotificationItemRequest:(id)arg1;
- (void)removeStrongNotificationInNewSysCmdWithForcePushId:(id)arg1;
- (void)removeStrongNotificationWithForcePushId:(id)arg1;
- (void)deleteStrongNotificationInLocalAndNewWorkWithForcePushId:(id)arg1;
- (void)deleteStrongNotificationInLocalAndNewWork:(id)arg1;
- (void)saveStrongNotificationItem:(id)arg1;
- (void)addStrongNotificationItemInLocalAndNewWork:(id)arg1 createTime:(unsigned int)arg2 operateTime:(unsigned int)arg3;
- (void)addStrongNotificationItemInLocalAndNewWork:(id)arg1;
- (id)getStrongNotificationWithForcePushId:(id)arg1;
- (id)getStrongNotificationWithcontactUserName:(id)arg1;
- (id)getStrongNotificationItemAndMessageList;
- (id)getStrongNotificationList;
- (_Bool)isValidStrongNotificationId:(id)arg1;
- (void)reportStrongNotificationCloseWindowOperateLogWithForcePushId:(id)arg1 fromUserName:(id)arg2 actionCode:(long long)arg3 windowMessageCount:(unsigned long long)arg4;
- (void)reportStrongNotificationReceiveLogWithForcePushId:(id)arg1 fromUserName:(id)arg2 msgType:(unsigned int)arg3 noticeId:(id)arg4;
- (void)reportStrongNotificationListOperateLog:(id)arg1 actionCode:(long long)arg2;
- (void)reportStrongNotificationStateChangeLog:(id)arg1 actionCode:(long long)arg2;
- (id)getSuffixFromForcePushId:(id)arg1;
- (void)copyForcePushInfoItem:(id)arg1 toStrongNotificationItem:(id)arg2;
- (id)parseForcePushInfoToStrongNotificationItem:(id)arg1;
- (void)clearExpiredStrongNotification;
- (_Bool)isHadValidStrongNotificationWithContactUserName:(id)arg1;
- (_Bool)isHadValidStrongNotificationWithForcePushId:(id)arg1;
- (_Bool)isHadStrongNotificationWithForcePushId:(id)arg1;
- (void)dealloc;
- (void)onServiceClearData;
- (void)initData;
- (id)init;
- (unsigned long long)getMessageTypeWithForcePushId:(id)arg1;
- (id)getGameCenterWebViewEntryScene:(id)arg1;
- (void)handleScheduleCustomizationWithItemAndMessage:(id)arg1;
- (void)handleH5CustomizationWithItemAndMessage:(id)arg1;
- (void)jumpMsgContentViewController:(id)arg1;
- (void)jumpStrongNotificationCustomizationWrap:(id)arg1;
- (void)updateStrongNotificationCustomizationTableViewCell:(id)arg1 cellForRowAtIndexPath:(id)arg2 itemAndMessag:(id)arg3 cellHeightDic:(id)arg4;
- (id)getStrongNotificationCustomizationTableViewCellWithCellIdentifier:(id)arg1;
- (double)getContentWidth;
- (void)handleNewStrongNotificationMsg:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)isStrongNotificationCustomizationMsgWrap:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)processNewXMLInDeleteStrongNotificationScene:(id)arg1;
- (void)processNewXMLInAddStrongNotificationScene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


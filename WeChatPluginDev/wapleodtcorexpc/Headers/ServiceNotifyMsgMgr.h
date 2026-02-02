//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, NotifyMsgDB;

@interface ServiceNotifyMsgMgr
{
    _Bool _isServerNotifyBoxExposed;
    NSMutableDictionary *_dicClientReqInfo;
    NotifyMsgDB *_notifyDB;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isServerNotifyBoxExposed; // @synthesize isServerNotifyBoxExposed=_isServerNotifyBoxExposed;
@property(retain, nonatomic) NotifyMsgDB *notifyDB; // @synthesize notifyDB=_notifyDB;
@property(retain, nonatomic) NSMutableDictionary *dicClientReqInfo; // @synthesize dicClientReqInfo=_dicClientReqInfo;
- (void)reportServerNotifyBoxOprationWithOpType:(unsigned int)arg1 message:(id)arg2 rowIndex:(unsigned long long)arg3 firstExpose:(_Bool)arg4 unreadCount:(unsigned int)arg5;
- (void)onFunctionMgrFetchMsgFailWithBussinessId:(unsigned long long)arg1 functionMsgId:(id)arg2;
- (void)onFunctionMgrWillShowMsg:(id)arg1 bussinessId:(unsigned long long)arg2 canShow:(id)arg3;
- (void)onFunctionMsgRequest:(id)arg1 bussinessId:(unsigned long long)arg2 functionMsgId:(id)arg3;
- (id)getReportInfoWithExtInfos:(id)arg1 msgSvrID:(long long)arg2;
- (void)replaceUnReadLiveEndWithMsgID:(id)arg1 arrNewTipsID:(id)arg2;
- (void)onFunctionMgrShowMsgs:(id)arg1 bussinessId:(unsigned long long)arg2 businessInfo:(id)arg3;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (_Bool)isInTemplateMsgSeesion;
- (void)updateXmlInfoWithMsg:(id)arg1 notify:(_Bool)arg2;
- (_Bool)canShowNotifyMsg:(id)arg1;
- (void)modCustomNotifyMsg:(id)arg1 liveId:(unsigned long long)arg2 objectId:(unsigned long long)arg3 accept:(_Bool)arg4 finderUsername:(id)arg5 noticeType:(unsigned int)arg6 completion:(CDUnknownBlockType)arg7;
- (void)modAcceptFansGroupLiveMsg:(id)arg1 liveId:(unsigned long long)arg2 objectId:(unsigned long long)arg3 blockNotify:(_Bool)arg4 finderUsername:(id)arg5 successBlock:(CDUnknownBlockType)arg6;
- (void)modAcceptTeamupMsg:(id)arg1 liveId:(unsigned long long)arg2 objectId:(unsigned long long)arg3 blockNotify:(_Bool)arg4 finderUsername:(id)arg5 successBlock:(CDUnknownBlockType)arg6;
- (void)modifyFollowNotifyWithMsgWrap:(id)arg1 blockNotify:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)requestNewMsgWithCustomBuff:(id)arg1;
- (void)makeExposedWithMsgs:(id)arg1;
- (void)onSessionEndExposeMsgs;
- (void)onSessionExposeViewModels:(id)arg1;
- (void)onMainFrameMsgClickForNewRowIndex:(id)arg1 rowIndex:(unsigned long long)arg2 unreadCount:(unsigned int)arg3;
- (void)onMainFrameMsgClick:(id)arg1 rowIndex:(unsigned long long)arg2 unreadCount:(unsigned int)arg3;
- (void)onMainFrameExposeMsg:(id)arg1 rowIndex:(unsigned long long)arg2 unreadCount:(unsigned int)arg3;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


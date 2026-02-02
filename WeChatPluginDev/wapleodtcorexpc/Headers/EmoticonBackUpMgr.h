//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonRecoverLogicObject, NSMutableArray, NSString;

@interface EmoticonBackUpMgr
{
    _Bool _m_hasOnceStartRecover;
    _Bool _m_hasNotStartRecoverTaskInList;
    unsigned int _m_lastManageViewUploadTime;
    EmoticonRecoverLogicObject *_m_recoverLogicObject;
    NSMutableArray *_m_notifyTaskList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_hasNotStartRecoverTaskInList; // @synthesize m_hasNotStartRecoverTaskInList=_m_hasNotStartRecoverTaskInList;
@property(nonatomic) unsigned int m_lastManageViewUploadTime; // @synthesize m_lastManageViewUploadTime=_m_lastManageViewUploadTime;
@property(nonatomic) _Bool m_hasOnceStartRecover; // @synthesize m_hasOnceStartRecover=_m_hasOnceStartRecover;
@property(retain, nonatomic) NSMutableArray *m_notifyTaskList; // @synthesize m_notifyTaskList=_m_notifyTaskList;
@property(retain, nonatomic) EmoticonRecoverLogicObject *m_recoverLogicObject; // @synthesize m_recoverLogicObject=_m_recoverLogicObject;
- (void)runNotifyTask;
- (void)onLogicDidResumed:(id)arg1;
- (_Bool)serverNotifyTaskCanResumeLogic:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onManulLoginOK;
- (void)onAuthOK;
- (void)setNeedsRecoverAndNeedClearData:(_Bool)arg1;
- (void)onEmoticonRecoverLogicNotifyDownloadProgress;
- (void)onEmoticonRecoverLogicFinishedPartSync;
- (_Bool)needNotifyEmoticonListChangeImmediately;
- (_Bool)isInManageView;
- (void)onEmoticonRecoverLogicDownloadOneEmoticonOK;
- (void)onEmoticonRecoverLogicFailed;
- (void)onEmoticonRecoverLogicOk;
- (void)onEmoticonRecoverLogicDownloadMd5ListOK;
- (_Bool)needRecover;
- (void)checkRecoverEmoticonFromServer;
- (void)tryRecoverAnotherPart;
- (_Bool)isFirstRecoverAfterAuth;
- (_Bool)isRecoveringStatusSafeForOperation;
- (_Bool)isRecoveringEmoticonFromServer;
- (_Bool)isRecoveringEmoticonComplete;
- (_Bool)isRecoveringEmoticon;
- (_Bool)recoverEmoticonFromServer;
- (void)recoverEmoticonFromManageView;
- (_Bool)canStartCgiNow;
- (void)onServiceClearData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


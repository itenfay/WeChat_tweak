//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonRecoverLogicObject, NSMutableArray, NSString;

@interface EmoticonCameraRecoverMgr
{
    _Bool _m_hasOnceStartRecover;
    _Bool _m_hasNotStartRecoverTaskInList;
    unsigned int _m_manageViewRecentUpdateTime;
    EmoticonRecoverLogicObject *_m_recoverLogicObject;
    NSMutableArray *_m_notifyTaskList;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_manageViewRecentUpdateTime; // @synthesize m_manageViewRecentUpdateTime=_m_manageViewRecentUpdateTime;
@property(nonatomic) _Bool m_hasNotStartRecoverTaskInList; // @synthesize m_hasNotStartRecoverTaskInList=_m_hasNotStartRecoverTaskInList;
@property(nonatomic) _Bool m_hasOnceStartRecover; // @synthesize m_hasOnceStartRecover=_m_hasOnceStartRecover;
@property(retain, nonatomic) NSMutableArray *m_notifyTaskList; // @synthesize m_notifyTaskList=_m_notifyTaskList;
@property(retain, nonatomic) EmoticonRecoverLogicObject *m_recoverLogicObject; // @synthesize m_recoverLogicObject=_m_recoverLogicObject;
- (void)runNotifyTask;
- (void)onEmoticonRecoverLogicNotifyDownloadProgress;
- (void)onEmoticonRecoverLogicFinishedPartSync;
- (void)onEmoticonRecoverLogicDownloadOneEmoticonOK;
- (void)onEmoticonRecoverLogicFailed;
- (void)onEmoticonRecoverLogicOk;
- (void)onEmoticonRecoverLogicDownloadMd5ListOK;
- (_Bool)needNotifyEmoticonListChangeImmediately;
- (_Bool)isInManageView;
- (void)onLogicDidResumed:(id)arg1;
- (_Bool)serverNotifyTaskCanResumeLogic:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onAuthOK;
- (void)onServiceClearData;
- (void)onManulLoginOK;
- (_Bool)needRecover;
- (void)setNeedsRecoverAndNeedClearData:(_Bool)arg1;
- (void)checkRecoverEmoticonFromServer;
- (void)tryRecoverAnotherPart;
- (_Bool)isFirstRecoverAfterAuth;
- (_Bool)isRecoveringStatusSafeForOperation;
- (_Bool)isRecoveringEmoticonComplete;
- (_Bool)isRecoveringEmoticon;
- (void)recoverEmoticonFromManageView;
- (_Bool)recoverEmoticonFromServer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


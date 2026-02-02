//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ExptAppLogic, ExptDebugReportLogic, ExptLogic, MMLRUCache, NSMutableDictionary, NSRecursiveLock, NSString;

@interface ExptService
{
    _Bool _hadLoadedExpt;
    _Bool _hadLoadedAppExpt;
    _Bool _isAuthOk;
    _Bool _isReqNow;
    NSMutableDictionary *_exptItemMap;
    NSMutableDictionary *_exptKeyMap;
    ExptLogic *_exptLogic;
    ExptDebugReportLogic *_debugReportLogic;
    NSString *_exptKVDebugKey;
    ExptAppLogic *_exptAppLogic;
    NSMutableDictionary *_exptAppItemMap;
    NSMutableDictionary *_exptAppKeyMap;
    MMLRUCache *_logControlCache;
    NSRecursiveLock *_logLock;
    NSString *_globalSequence;
}

+ (_Bool)WCCC_isEnabled;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *globalSequence; // @synthesize globalSequence=_globalSequence;
@property(nonatomic) _Bool isReqNow; // @synthesize isReqNow=_isReqNow;
@property(nonatomic) _Bool isAuthOk; // @synthesize isAuthOk=_isAuthOk;
@property(retain, nonatomic) NSRecursiveLock *logLock; // @synthesize logLock=_logLock;
@property(retain, nonatomic) MMLRUCache *logControlCache; // @synthesize logControlCache=_logControlCache;
@property(retain, nonatomic) NSMutableDictionary *exptAppKeyMap; // @synthesize exptAppKeyMap=_exptAppKeyMap;
@property(retain, nonatomic) NSMutableDictionary *exptAppItemMap; // @synthesize exptAppItemMap=_exptAppItemMap;
@property(retain, nonatomic) ExptAppLogic *exptAppLogic; // @synthesize exptAppLogic=_exptAppLogic;
@property(nonatomic) _Bool hadLoadedAppExpt; // @synthesize hadLoadedAppExpt=_hadLoadedAppExpt;
@property(retain, nonatomic) NSString *exptKVDebugKey; // @synthesize exptKVDebugKey=_exptKVDebugKey;
@property(retain, nonatomic) ExptDebugReportLogic *debugReportLogic; // @synthesize debugReportLogic=_debugReportLogic;
@property(retain, nonatomic) ExptLogic *exptLogic; // @synthesize exptLogic=_exptLogic;
@property(nonatomic) _Bool hadLoadedExpt; // @synthesize hadLoadedExpt=_hadLoadedExpt;
@property(retain, nonatomic) NSMutableDictionary *exptKeyMap; // @synthesize exptKeyMap=_exptKeyMap;
@property(retain, nonatomic) NSMutableDictionary *exptItemMap; // @synthesize exptItemMap=_exptItemMap;
- (void)setNeedToShowHitExptId:(unsigned int)arg1;
- (unsigned int)getNeedToShowHitExptId;
- (void)showDebugExptHitInfo:(id)arg1 andKey:(id)arg2 andVal:(id)arg3;
- (void)reportApp;
- (void)getAppSvrExpt;
- (void)asyncOnGotAppExptList:(id)arg1 deleteExptIds:(id)arg2 andExptFlag:(unsigned int)arg3 andFromScene:(unsigned int)arg4;
- (void)onGotAppExptList:(id)arg1 deleteExptIds:(id)arg2 andExptFlag:(unsigned int)arg3 andFromScene:(unsigned int)arg4;
- (void)getLocalAppExptList:(id)arg1;
- (void)checkToGetSvrAppExpt;
- (id)getAppExpt:(id)arg1;
- (void)tryToSaveAppExpt;
- (void)tryToLoadAppExpt;
- (void)sendSession:(id)arg1;
- (void)onViewDidDisappear:(id)arg1 withVC:(id)arg2;
- (void)onViewDidAppear:(id)arg1 withVC:(id)arg2;
- (void)kvReport:(id)arg1 logid:(unsigned int)arg2;
- (void)startMonitorKV:(id)arg1 isAuto:(_Bool)arg2;
- (void)startMonitorKV:(id)arg1;
- (void)stopMonitorKV;
- (_Bool)isOpenMonitorKV;
- (id)mmExptPath:(id)arg1 md5:(id)arg2;
- (id)mmExptPath:(id)arg1;
- (_Bool)checkNeedDelAllExpt:(unsigned int)arg1;
- (void)asyncGotSvrExptList:(id)arg1 deleteExptIds:(id)arg2 andExptFlag:(unsigned int)arg3 andAppIdList:(id)arg4;
- (void)onGotSvrExptList:(id)arg1 deleteExptIds:(id)arg2 andExptFlag:(unsigned int)arg3 andAppIdList:(id)arg4;
- (id)sharedSerialQueue;
- (void)getLocalExptList:(id)arg1;
- (void)tryToSaveExpt;
- (void)tryToLoadExpt;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)willEnterForeground;
- (void)getSvrExptByManulLogin;
- (void)onManulLoginOK;
- (void)onAuthOK;
- (void)onAuthOKWithVersionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)getSvrExpt;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)getExptId:(id)arg1;
- (id)getAllExpt;
- (_Bool)checkNeedLog:(id)arg1 andVal:(id)arg2 andNow:(unsigned long long)arg3;
- (id)getStringExpt:(id)arg1 andNeedReport:(_Bool)arg2;
- (id)getStringExpt:(id)arg1;
- (long long)getIntegerExpt:(id)arg1 withDef:(long long)arg2;
- (float)getFloatExpt:(id)arg1 withDef:(float)arg2;
- (id)getNumberExpt:(id)arg1;
- (id)getExptReadOnly:(id)arg1 withDef:(id)arg2;
- (id)getExpt:(id)arg1 withDef:(id)arg2;
- (long long)getIntegerExptReadOnly:(id)arg1 withDef:(long long)arg2;
- (float)getFloatExptReadOnly:(id)arg1 withDef:(float)arg2;
- (_Bool)getExptReadOnly:(id)arg1 withBoolDef:(_Bool)arg2;
- (_Bool)getExpt:(id)arg1 withBoolDef:(_Bool)arg2;
- (_Bool)getExptInfo:(id)arg1 andExptId:(id *)arg2 andGroupId:(id *)arg3;
- (void)reportHitExpt:(id)arg1;
- (_Bool)MultiTalkSceenSharingAudience_isLandscapeEnable;
- (id)stringValueForExptKey:(id)arg1;
- (id)numberValueForExptKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


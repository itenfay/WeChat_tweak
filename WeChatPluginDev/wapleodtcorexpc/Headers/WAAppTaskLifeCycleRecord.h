//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WAAppTaskLifeCycleRecord
{
    _Bool _bytecodeEnabled;
    _Bool _hasSkylineRuntime;
    unsigned int _appVersion;
    unsigned int _uiPublibVersion;
    unsigned int _pageCount;
    unsigned int _engineType;
    unsigned int _gameRenderMode;
    unsigned int _totalHotLaunchCount;
    unsigned int _allJSVMFootprintMemoryInMB;
    unsigned int _mainContextJSVMFootprintMemoryInMB;
    unsigned int _skylineViewCnt;
    unsigned int _differentSkylineViewCnt;
    NSString *_instanceId;
    NSString *_appid;
    NSString *_username;
    NSString *_nickname;
    unsigned long long _appServiceType;
    unsigned long long _currentScene;
    NSString *_currentSceneNote;
    NSString *_strPublibVersion;
    NSString *_networkType;
    NSMutableArray *_pageRecords;
    NSMutableArray *_coldLaunchNeedDownloadModules;
    NSString *_lastServiceJsError;
    NSString *_serviceRuntimeContext;
    unsigned long long _debugType;
    unsigned long long _launchTimeStampInMs;
    unsigned long long _currentRunningState;
    unsigned long long _currentRunningStateStartTimeStampInMs;
    unsigned long long _totalLifeTimeInMs;
    unsigned long long _totalForegroundTimeInMs;
    unsigned long long _totalBackgroundTimeInMs;
    unsigned long long _totalSuspendTimeInMs;
}

+ (void)initialize;
+ (void)PBArrayAdd_gameRenderMode;
+ (void)PBArrayAdd_uiPublibVersion;
+ (void)PBArrayAdd_debugType;
+ (void)PBArrayAdd_bytecodeEnabled;
+ (void)PBArrayAdd_engineType;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_serviceRuntimeContext;
+ (void)PBArrayAdd_lastServiceJsError;
+ (void)PBArrayAdd_pageRecords;
+ (void)PBArrayAdd_pageCount;
+ (void)PBArrayAdd_networkType;
+ (void)PBArrayAdd_strPublibVersion;
+ (void)PBArrayAdd_appVersion;
+ (void)PBArrayAdd_currentSceneNote;
+ (void)PBArrayAdd_currentScene;
+ (void)PBArrayAdd_appServiceType;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_instanceId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int differentSkylineViewCnt; // @synthesize differentSkylineViewCnt=_differentSkylineViewCnt;
@property(nonatomic) unsigned int skylineViewCnt; // @synthesize skylineViewCnt=_skylineViewCnt;
@property(nonatomic) _Bool hasSkylineRuntime; // @synthesize hasSkylineRuntime=_hasSkylineRuntime;
@property(nonatomic) unsigned int mainContextJSVMFootprintMemoryInMB; // @synthesize mainContextJSVMFootprintMemoryInMB=_mainContextJSVMFootprintMemoryInMB;
@property(nonatomic) unsigned int allJSVMFootprintMemoryInMB; // @synthesize allJSVMFootprintMemoryInMB=_allJSVMFootprintMemoryInMB;
@property(nonatomic) unsigned int totalHotLaunchCount; // @synthesize totalHotLaunchCount=_totalHotLaunchCount;
@property(nonatomic) unsigned long long totalSuspendTimeInMs; // @synthesize totalSuspendTimeInMs=_totalSuspendTimeInMs;
@property(nonatomic) unsigned long long totalBackgroundTimeInMs; // @synthesize totalBackgroundTimeInMs=_totalBackgroundTimeInMs;
@property(nonatomic) unsigned long long totalForegroundTimeInMs; // @synthesize totalForegroundTimeInMs=_totalForegroundTimeInMs;
@property(nonatomic) unsigned long long totalLifeTimeInMs; // @synthesize totalLifeTimeInMs=_totalLifeTimeInMs;
@property(nonatomic) unsigned int gameRenderMode; // @synthesize gameRenderMode=_gameRenderMode;
@property(nonatomic) _Bool bytecodeEnabled; // @synthesize bytecodeEnabled=_bytecodeEnabled;
@property(nonatomic) unsigned int engineType; // @synthesize engineType=_engineType;
@property(nonatomic) unsigned long long currentRunningStateStartTimeStampInMs; // @synthesize currentRunningStateStartTimeStampInMs=_currentRunningStateStartTimeStampInMs;
@property(nonatomic) unsigned long long currentRunningState; // @synthesize currentRunningState=_currentRunningState;
@property(nonatomic) unsigned long long launchTimeStampInMs; // @synthesize launchTimeStampInMs=_launchTimeStampInMs;
@property(nonatomic) unsigned long long debugType; // @synthesize debugType=_debugType;
@property(copy, nonatomic) NSString *serviceRuntimeContext; // @synthesize serviceRuntimeContext=_serviceRuntimeContext;
@property(copy, nonatomic) NSString *lastServiceJsError; // @synthesize lastServiceJsError=_lastServiceJsError;
@property(retain, nonatomic) NSMutableArray *coldLaunchNeedDownloadModules; // @synthesize coldLaunchNeedDownloadModules=_coldLaunchNeedDownloadModules;
@property(retain, nonatomic) NSMutableArray *pageRecords; // @synthesize pageRecords=_pageRecords;
@property(nonatomic) unsigned int pageCount; // @synthesize pageCount=_pageCount;
@property(copy, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
@property(nonatomic) unsigned int uiPublibVersion; // @synthesize uiPublibVersion=_uiPublibVersion;
@property(copy, nonatomic) NSString *strPublibVersion; // @synthesize strPublibVersion=_strPublibVersion;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *currentSceneNote; // @synthesize currentSceneNote=_currentSceneNote;
@property(nonatomic) unsigned long long currentScene; // @synthesize currentScene=_currentScene;
@property(nonatomic) unsigned long long appServiceType; // @synthesize appServiceType=_appServiceType;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
- (void)onTaskEncounterQualityIssue:(id)arg1;
- (void)calCurrentRunnningStateStayTime;
- (void)onTaskHotLaunch;
- (void)onTaskEnterSuspend;
- (void)onTaskEnterBackground;
- (void)onTaskEnterForeground;
- (id)getJSErrorForPage:(id)arg1;
- (id)getPagePathForLastPage;
- (id)getJSErrorForLastPage;
- (id)getLastNPagePath;
- (void)onTaskDieForReason:(unsigned long long)arg1 lifeCyclePerformanceIndexes:(id)arg2;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


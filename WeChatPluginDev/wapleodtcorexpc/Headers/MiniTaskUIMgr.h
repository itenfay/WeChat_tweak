//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, MiniTaskNavigationController, MiniTaskViewController, MinimizeTaskData, NSString, WADynamicBackgroundGLViewController;

@interface MiniTaskUIMgr
{
    _Bool _canUseDynamicBackground;
    _Bool _lastMiniTaskEntryState;
    _Bool _doSarcasmOnceWhenEnterTaskList;
    unsigned int _lastMiniEntryCountingTimeStamp;
    unsigned int _flirtMiniEntryCount;
    unsigned int _lastAddRecordTimestampForSwipeEdu;
    MemoryMappedKV *_mappedKV;
    MiniTaskViewController *_miniTaskVC;
    MiniTaskNavigationController *_curForegroundContainerNavController;
    MinimizeTaskData *_curForegroundTaskData;
    WADynamicBackgroundGLViewController *_dynamicBGVC;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int lastAddRecordTimestampForSwipeEdu; // @synthesize lastAddRecordTimestampForSwipeEdu=_lastAddRecordTimestampForSwipeEdu;
@property(nonatomic) _Bool doSarcasmOnceWhenEnterTaskList; // @synthesize doSarcasmOnceWhenEnterTaskList=_doSarcasmOnceWhenEnterTaskList;
@property(nonatomic) unsigned int flirtMiniEntryCount; // @synthesize flirtMiniEntryCount=_flirtMiniEntryCount;
@property(nonatomic) unsigned int lastMiniEntryCountingTimeStamp; // @synthesize lastMiniEntryCountingTimeStamp=_lastMiniEntryCountingTimeStamp;
@property(nonatomic) _Bool lastMiniTaskEntryState; // @synthesize lastMiniTaskEntryState=_lastMiniTaskEntryState;
@property(nonatomic) _Bool canUseDynamicBackground; // @synthesize canUseDynamicBackground=_canUseDynamicBackground;
@property(retain, nonatomic) WADynamicBackgroundGLViewController *dynamicBGVC; // @synthesize dynamicBGVC=_dynamicBGVC;
@property(retain, nonatomic) MinimizeTaskData *curForegroundTaskData; // @synthesize curForegroundTaskData=_curForegroundTaskData;
@property(nonatomic) __weak MiniTaskNavigationController *curForegroundContainerNavController; // @synthesize curForegroundContainerNavController=_curForegroundContainerNavController;
@property(retain, nonatomic) MiniTaskViewController *miniTaskVC; // @synthesize miniTaskVC=_miniTaskVC;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)onRemoveMinimizedTaskData:(id)arg1;
- (void)onAppendMinimizedTaskData:(id)arg1;
- (id)getDynamicBackgroundGLViewController;
- (void)createDynamicBackgroundGLViewController;
- (_Bool)recalCanUseDynamicBackground;
- (id)getCurForegroundContainerNavController;
- (id)getCurForegroundTaskData;
- (void)clearMiniTaskViewController;
- (id)getCurrentContextId;
- (id)getMiniTaskViewController;
- (void)initMiniTaskViewController;
- (void)setMiniTaskViewController:(id)arg1;
- (void)updateHistoryTaskLastEntryTime;
- (void)recordRecentAppendTask;
- (void)resetRecentLaunchTask;
- (void)recordRecentLaunchTask:(id)arg1;
- (_Bool)launchMiniTaskWithData:(id)arg1 transitionContext:(id)arg2 presentingNavController:(id)arg3;
- (id)taskDataForDirectLaunch;
- (void)doResetEnterMiniVCRecord;
- (void)onEnterMiniVC;
- (_Bool)hasEverEnterMiniVC;
- (void)doResetShowMiniTaskSwipeEducationRecords;
- (void)doAbortShowMiniTaskSwipeEducation;
- (void)doShowMiniTaskSwipeEducation;
- (_Bool)checkShouldShowMiniTaskSwipeEducation;
- (unsigned int)fetchMiniTaskVCPushAnimationType;
- (void)doFlirtMiniTaskEntryWithNoTask;
- (void)resetMiniTaskEntryCountingSeesion;
- (void)setHasShakeMiniTaskEntry;
- (_Bool)shouldShakeMiniTaskEntry;
- (_Bool)shouldHighlightMiniTaskEntry;
- (_Bool)shouldShowMiniTaskEntry;
- (void)checkMiniTaskEntryShowStateHasChanged;
- (void)onServiceClearMemoryCacheInBackground;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveKSKitLyricPreparingView, MMFinderLiveKSKitLyricSentence, MMFinderLiveKSKitLyricWrapper, NSMutableArray, NSString;

@interface MMFinderLiveKSKitLyricContainerView
{
    _Bool _isStart;
    _Bool _isStartDisplay;
    _Bool _hasStartFirstSentence;
    _Bool _ignorePrepareCountDown;
    _Bool _isPositionUpdated;
    _Bool _openFpsStatistic;
    int _currSentenceIndex;
    int _currPosition;
    int _maxRefreshFPS;
    CDUnknownBlockType _proceedEndCallback;
    NSString *_uniqueId;
    MMFinderLiveKSKitLyricPreparingView *_preparingView;
    MMFinderLiveKSKitLyricWrapper *_currLyricWrapper;
    MMFinderLiveKSKitLyricWrapper *_nextLyricWrapper;
    MMFinderLiveKSKitLyricWrapper *_afterLyricWrapper;
    NSMutableArray *_lyricSentenceList;
    MMFinderLiveKSKitLyricSentence *_nextSentence;
    unsigned long long _refreshTime;
    long long _lastRefreshDriveMode;
    long long _currRefreshSrc;
    double _lastRecordSeiInterval;
    unsigned long long _refreshFrameCnt;
    long long _refreshFps;
    unsigned long long _refreshFpsStatCnt;
    CDUnknownBlockType _refreshFpsReport;
    long long _fpsCounter;
    double _lastRefreshTime;
}

+ (CDUnknownBlockType)createReportTimer:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property double lastRefreshTime; // @synthesize lastRefreshTime=_lastRefreshTime;
@property long long fpsCounter; // @synthesize fpsCounter=_fpsCounter;
@property(nonatomic) int maxRefreshFPS; // @synthesize maxRefreshFPS=_maxRefreshFPS;
@property(copy) CDUnknownBlockType refreshFpsReport; // @synthesize refreshFpsReport=_refreshFpsReport;
@property unsigned long long refreshFpsStatCnt; // @synthesize refreshFpsStatCnt=_refreshFpsStatCnt;
@property long long refreshFps; // @synthesize refreshFps=_refreshFps;
@property unsigned long long refreshFrameCnt; // @synthesize refreshFrameCnt=_refreshFrameCnt;
@property(nonatomic) double lastRecordSeiInterval; // @synthesize lastRecordSeiInterval=_lastRecordSeiInterval;
@property(nonatomic) long long currRefreshSrc; // @synthesize currRefreshSrc=_currRefreshSrc;
@property(nonatomic) long long lastRefreshDriveMode; // @synthesize lastRefreshDriveMode=_lastRefreshDriveMode;
@property(nonatomic) _Bool openFpsStatistic; // @synthesize openFpsStatistic=_openFpsStatistic;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(retain, nonatomic) MMFinderLiveKSKitLyricSentence *nextSentence; // @synthesize nextSentence=_nextSentence;
@property(nonatomic) _Bool isPositionUpdated; // @synthesize isPositionUpdated=_isPositionUpdated;
@property(nonatomic) int currPosition; // @synthesize currPosition=_currPosition;
@property(nonatomic) int currSentenceIndex; // @synthesize currSentenceIndex=_currSentenceIndex;
@property(retain, nonatomic) NSMutableArray *lyricSentenceList; // @synthesize lyricSentenceList=_lyricSentenceList;
@property(retain, nonatomic) MMFinderLiveKSKitLyricWrapper *afterLyricWrapper; // @synthesize afterLyricWrapper=_afterLyricWrapper;
@property(retain, nonatomic) MMFinderLiveKSKitLyricWrapper *nextLyricWrapper; // @synthesize nextLyricWrapper=_nextLyricWrapper;
@property(retain, nonatomic) MMFinderLiveKSKitLyricWrapper *currLyricWrapper; // @synthesize currLyricWrapper=_currLyricWrapper;
@property(nonatomic) __weak MMFinderLiveKSKitLyricPreparingView *preparingView; // @synthesize preparingView=_preparingView;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(nonatomic) _Bool ignorePrepareCountDown; // @synthesize ignorePrepareCountDown=_ignorePrepareCountDown;
@property(nonatomic) _Bool hasStartFirstSentence; // @synthesize hasStartFirstSentence=_hasStartFirstSentence;
@property(nonatomic) _Bool isStartDisplay; // @synthesize isStartDisplay=_isStartDisplay;
@property(nonatomic) _Bool isStart; // @synthesize isStart=_isStart;
@property(copy, nonatomic) CDUnknownBlockType proceedEndCallback; // @synthesize proceedEndCallback=_proceedEndCallback;
- (void)onLiveKTVProgressPositionChange:(int)arg1 uniqueId:(id)arg2 taskId:(id)arg3;
- (void)onLiveKTVProgressRefresh:(long long)arg1 currFPS:(long long)arg2 taskId:(id)arg3;
- (void)onLiveSEIKTVRecvTimeIntervalUpdate:(double)arg1 taskId:(id)arg2;
- (void)onLiveSEIKTVProgressSyncRecv:(id)arg1 continuous:(_Bool)arg2 stick:(_Bool)arg3 ktvSeiData:(id)arg4 taskId:(id)arg5;
- (void)onKSKitKalaPositionChanged:(int)arg1 uniqueId:(id)arg2 taskId:(id)arg3;
- (void)updateMaxRefreshFPS;
- (void)updateRefreshSrcWithSeiRecvInterval:(double)arg1;
- (void)onRefreshModeUpdate:(long long)arg1;
- (void)refreshIfNeed;
- (void)onPositionChanged:(int)arg1;
- (double)maxLyricSentenceWidth;
- (void)updateNextSentence:(id)arg1;
- (void)updateLyricSentenceWrappers:(CDUnknownBlockType)arg1;
- (_Bool)checkAfterSentenceNeedInitTransferToNext;
- (_Bool)checkCurrPositionIsInvalidOverAfterSentenceEnd;
- (_Bool)transferAfterSentenceToNext:(double)arg1;
- (void)checkCurrSentenceIsEnd;
- (_Bool)transfeNextSentenceToCurr:(double)arg1;
- (_Bool)disappearCurrSentence:(double)arg1;
- (int)startPosition;
- (int)getInitSentenceIndex;
- (void)checkNeedPrepareToCountDown;
- (void)startPreparingCountDown;
- (_Bool)checkCurrPositionCanStartDisplay;
- (_Bool)isAfterSentenceEnd;
- (_Bool)isNextSentenceBegin;
- (_Bool)isCurrSentenceEnd;
- (void)startDisplaySentenceIfNeed;
- (void)updateHasStartFirstSentence:(_Bool)arg1;
- (void)removeAllLyricViews;
- (void)clearDatas;
- (void)initDatas:(id)arg1;
- (void)updateSelfHidden;
- (void)stop;
- (void)startWithLyricSentenceList:(id)arg1 uniqueId:(id)arg2;
- (double)preferHeight;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)initDefaultDatas;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;
- (void)updateLastRefreshTime;
- (double)maxRefreshTimeInterval;
- (_Bool)checkNeedSkipRefreshFrameWithTimeInterval;
- (long long)getFrameInterval:(long long)arg1;
- (void)clearFPSControl;
- (_Bool)checkNeedSkipRefreshFrame:(long long)arg1;
- (void)logForRefreshStatIfNeed;
- (void)increaseRefreshFpsStatCnt;
- (void)increaseRefreshFrameCnt;
- (CDUnknownBlockType)createRefreshFpsReporter;
- (void)clearRefreshStats;
- (void)updateRefreshStats;
- (void)initRefreshStats;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


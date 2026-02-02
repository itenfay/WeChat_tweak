//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveKSKitMusicNoteContentView, MMFinderLiveKSKitMusicNoteScrollView, MMFinderLiveKSKitProgessPreparingView, NSMutableArray, NSString, PAGView, UIImageView, UIView;

@interface MMFinderLiveKSKitNoteAdjustProgressView
{
    _Bool _isStart;
    _Bool _isNoteDotAnimating;
    _Bool _currNoteIsHit;
    _Bool _isNoteHasAppeared;
    _Bool _isNoteDotCanAppeared;
    _Bool _isNoteUpdated;
    _Bool _isNoteHasUpdated;
    float _currNoteHeight;
    float _currNoteHeightPercent;
    float _currNoteValue;
    int _nextNoteBeginTime;
    int _lastRemoteVoiceNoteUpdateTime;
    int _firstNoteBeginTime;
    CDUnknownBlockType _startCallback;
    NSString *_uniqueId;
    UIView *_topInnerLine;
    UIView *_bottomInnerLine;
    MMFinderLiveKSKitMusicNoteScrollView *_musicNoteScrollView;
    MMFinderLiveKSKitMusicNoteContentView *_musicNoteContentView;
    PAGView *_goodHitPAGView;
    UIImageView *_musicNoteDot;
    double _lastNoteAdjustTime;
    NSMutableArray *_allMusicNoteList;
    long long _lastLoadedNoteIndex;
    MMFinderLiveKSKitProgessPreparingView *_progressPreparingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveKSKitProgessPreparingView *progressPreparingView; // @synthesize progressPreparingView=_progressPreparingView;
@property(nonatomic) _Bool isNoteHasUpdated; // @synthesize isNoteHasUpdated=_isNoteHasUpdated;
@property(nonatomic) _Bool isNoteUpdated; // @synthesize isNoteUpdated=_isNoteUpdated;
@property(nonatomic) _Bool isNoteDotCanAppeared; // @synthesize isNoteDotCanAppeared=_isNoteDotCanAppeared;
@property(nonatomic) _Bool isNoteHasAppeared; // @synthesize isNoteHasAppeared=_isNoteHasAppeared;
@property(nonatomic) int firstNoteBeginTime; // @synthesize firstNoteBeginTime=_firstNoteBeginTime;
@property(nonatomic) int lastRemoteVoiceNoteUpdateTime; // @synthesize lastRemoteVoiceNoteUpdateTime=_lastRemoteVoiceNoteUpdateTime;
@property(nonatomic) int nextNoteBeginTime; // @synthesize nextNoteBeginTime=_nextNoteBeginTime;
@property(nonatomic) long long lastLoadedNoteIndex; // @synthesize lastLoadedNoteIndex=_lastLoadedNoteIndex;
@property(retain, nonatomic) NSMutableArray *allMusicNoteList; // @synthesize allMusicNoteList=_allMusicNoteList;
@property(nonatomic) double lastNoteAdjustTime; // @synthesize lastNoteAdjustTime=_lastNoteAdjustTime;
@property(nonatomic) _Bool currNoteIsHit; // @synthesize currNoteIsHit=_currNoteIsHit;
@property(nonatomic) float currNoteValue; // @synthesize currNoteValue=_currNoteValue;
@property(nonatomic) float currNoteHeightPercent; // @synthesize currNoteHeightPercent=_currNoteHeightPercent;
@property(nonatomic) float currNoteHeight; // @synthesize currNoteHeight=_currNoteHeight;
@property(nonatomic) _Bool isNoteDotAnimating; // @synthesize isNoteDotAnimating=_isNoteDotAnimating;
@property(retain, nonatomic) UIImageView *musicNoteDot; // @synthesize musicNoteDot=_musicNoteDot;
@property(retain, nonatomic) PAGView *goodHitPAGView; // @synthesize goodHitPAGView=_goodHitPAGView;
@property(retain, nonatomic) MMFinderLiveKSKitMusicNoteContentView *musicNoteContentView; // @synthesize musicNoteContentView=_musicNoteContentView;
@property(retain, nonatomic) MMFinderLiveKSKitMusicNoteScrollView *musicNoteScrollView; // @synthesize musicNoteScrollView=_musicNoteScrollView;
@property(retain, nonatomic) UIView *bottomInnerLine; // @synthesize bottomInnerLine=_bottomInnerLine;
@property(retain, nonatomic) UIView *topInnerLine; // @synthesize topInnerLine=_topInnerLine;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(nonatomic) _Bool isStart; // @synthesize isStart=_isStart;
@property(copy, nonatomic) CDUnknownBlockType startCallback; // @synthesize startCallback=_startCallback;
- (void)onLiveKTVProgressRefresh:(long long)arg1 currFPS:(long long)arg2 taskId:(id)arg3;
- (void)onLiveKTVMainWidgetColorUpdate:(id)arg1 taskId:(id)arg2;
- (void)onLiveSEIKTVRecvTimeIntervalUpdate:(double)arg1 taskId:(id)arg2;
- (void)onLiveSEIKTVProgressSyncRecv:(id)arg1 continuous:(_Bool)arg2 stick:(_Bool)arg3 ktvSeiData:(id)arg4 taskId:(id)arg5;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 pauseChanged:(_Bool)arg3;
- (void)onKSKitKalaVoiceReachNoteHeight:(float)arg1 noteValue:(float)arg2 isHit:(_Bool)arg3 timeOffset:(int)arg4 duration:(int)arg5 uniqueId:(id)arg6 taskId:(id)arg7;
- (void)onKSKitKalaPositionChanged:(int)arg1 uniqueId:(id)arg2 taskId:(id)arg3;
@property(readonly, nonatomic) int remoteVoiceNoteUpdateInterval;
- (int)goodHitDuration;
- (int)timeOffsetSegment;
@property(readonly, nonatomic) _Bool preferSegmentNoteContent;
- (void)updatePrepareProgressIfNeed:(int)arg1;
- (void)tryStartProgressPrepareWithPosition:(int)arg1;
- (void)stopGoodHitAnimation;
- (void)startGoodHitAnimation;
- (void)checkHitAnimationStateWithCurrNote:(id)arg1 nextNote:(id)arg2 position:(int)arg3;
- (double)noteDotAnimateDuration;
- (int)noteAdjustTimeInterval;
- (void)freqAdjustNoteHeight:(float)arg1 noteValue:(float)arg2;
- (void)refreshNoteHeightIfNeed;
- (void)onVoiceReachNoteHeight:(float)arg1 noteValue:(float)arg2 timeOffset:(int)arg3 duration:(int)arg4 hit:(_Bool)arg5;
- (void)updateRemoteVoiceNoteWithPositionIfNeed:(int)arg1;
- (void)onPositionChanged:(int)arg1 preAdjust:(int)arg2;
- (void)updateCurrNoteIsHit:(_Bool)arg1;
- (_Bool)updateNoteHeightPercent:(float)arg1;
- (void)updateNoteDotCanAppeared:(_Bool)arg1;
- (void)updateNoteHasAppeared:(_Bool)arg1;
- (void)checkNoteHasAppearedWithCurrPosition:(int)arg1;
- (void)checkIsTimeToPrepareNextBatchMusicNotes:(int)arg1;
- (void)updateSelfHidden;
- (id)getNextBatchMusicNotes:(unsigned long long)arg1 intervalSegment:(_Bool)arg2 minVisiblePosition:(int)arg3;
- (void)synchronizeCurrKTVState;
- (void)clearDatas;
- (void)initDatas:(id)arg1;
- (void)startNoteHeightUIRefresh;
- (double)preferWidthInIpad;
- (double)preferHeight;
- (void)stop;
- (void)startWithMusicNoteList:(id)arg1 uniqueId:(id)arg2;
- (void)layoutLyricPreparingView;
- (void)createGoodHitPAGView;
- (void)initNoteHeightPercent;
- (void)resetNoteHeightPercent;
- (void)updateNoteDotCenterYAnimated:(_Bool)arg1;
- (void)updateNoteDotAndNoteHitPagHidden;
- (void)layoutMusicNoteDot;
- (void)layoutMusicNoteContentView;
- (void)layoutMusicNoteScrollView;
- (void)updateTopBottomLinesHidden;
- (void)layoutBottomInnerLine;
- (void)layoutTopInnerLine;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)initDefaultDatas;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


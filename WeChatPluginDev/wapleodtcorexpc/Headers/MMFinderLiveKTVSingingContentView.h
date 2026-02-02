//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveKSKitAudioEngine, MMFinderLiveKSKitLyricContainerView, MMFinderLiveKSKitNoteAdjustProgressView, MMFinderLiveKTVReporter, MMUILabel, NSString, PAGView;

@interface MMFinderLiveKTVSingingContentView
{
    int _currScore;
    int _realtimeScoreSentenceIndex;
    int _sumGoodScoreCnt;
    int _sumPerfectScoreCnt;
    NSString *_currUniqueId;
    CDUnknownBlockType _requestSingerHeaderUIDescCallback;
    CDUnknownBlockType _requestSingerPlayerUIDescCallback;
    PAGView *_goodPAGView;
    PAGView *_perfectPAGView;
    MMUILabel *_greateScoreContentLabel;
    MMUILabel *_greateScoreCntLabel;
    MMFinderLiveKSKitNoteAdjustProgressView *_musicNoteAdjustView;
    MMFinderLiveKSKitLyricContainerView *_musicLyricContainerView;
    MMUILabel *_scoreLabel;
    NSString *_ktvThemeResourceFetchSessionToken;
    MMFinderLiveKTVReporter *_reporter;
}

- (void).cxx_destruct;
@property(retain) MMFinderLiveKTVReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) NSString *ktvThemeResourceFetchSessionToken; // @synthesize ktvThemeResourceFetchSessionToken=_ktvThemeResourceFetchSessionToken;
@property(nonatomic) int sumPerfectScoreCnt; // @synthesize sumPerfectScoreCnt=_sumPerfectScoreCnt;
@property(nonatomic) int sumGoodScoreCnt; // @synthesize sumGoodScoreCnt=_sumGoodScoreCnt;
@property(retain, nonatomic) MMUILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) MMFinderLiveKSKitLyricContainerView *musicLyricContainerView; // @synthesize musicLyricContainerView=_musicLyricContainerView;
@property(retain, nonatomic) MMFinderLiveKSKitNoteAdjustProgressView *musicNoteAdjustView; // @synthesize musicNoteAdjustView=_musicNoteAdjustView;
@property(retain, nonatomic) MMUILabel *greateScoreCntLabel; // @synthesize greateScoreCntLabel=_greateScoreCntLabel;
@property(retain, nonatomic) MMUILabel *greateScoreContentLabel; // @synthesize greateScoreContentLabel=_greateScoreContentLabel;
@property(retain, nonatomic) PAGView *perfectPAGView; // @synthesize perfectPAGView=_perfectPAGView;
@property(retain, nonatomic) PAGView *goodPAGView; // @synthesize goodPAGView=_goodPAGView;
@property(nonatomic) int realtimeScoreSentenceIndex; // @synthesize realtimeScoreSentenceIndex=_realtimeScoreSentenceIndex;
@property(nonatomic) int currScore; // @synthesize currScore=_currScore;
@property(copy, nonatomic) CDUnknownBlockType requestSingerPlayerUIDescCallback; // @synthesize requestSingerPlayerUIDescCallback=_requestSingerPlayerUIDescCallback;
@property(copy, nonatomic) CDUnknownBlockType requestSingerHeaderUIDescCallback; // @synthesize requestSingerHeaderUIDescCallback=_requestSingerHeaderUIDescCallback;
@property(retain, nonatomic) NSString *currUniqueId; // @synthesize currUniqueId=_currUniqueId;
- (void)onAnimationEnd:(id)arg1;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 totalScoreChanged:(int)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 realTimeScoreChanged:(int)arg3 sentenceIndex:(int)arg4;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 useVideoChanged:(_Bool)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 disableScoreAdjustChanged:(_Bool)arg3;
- (void)onKSKitVoiceMIDIScoreReached:(int)arg1 sentenceIndex:(int)arg2 totalScore:(int)arg3 uniqueId:(id)arg4 taskId:(id)arg5;
- (void)onKSKitSingEndWithSong:(id)arg1 taskId:(id)arg2;
- (void)onKSKitSingStopWithSong:(id)arg1 taskId:(id)arg2;
- (void)onKSKitSingStartWithUniqueId:(id)arg1 taskId:(id)arg2;
- (id)ktvReporter;
@property(readonly, nonatomic) int perfectScoreStandard;
@property(readonly, nonatomic) int goodScoreStandard;
@property(readonly, nonatomic) MMFinderLiveKSKitAudioEngine *ksKitAudioEngine;
- (void)clearSumPerfectScoreCnt;
- (void)delayClearSumPerfectScoreCnt;
- (void)clearSumGoodScoreCnt;
- (void)delayClearSumGoodScoreCnt;
- (void)hideGreateScoreCnt;
- (void)showGreateScoreCntAnimated:(unsigned long long)arg1 duration:(double)arg2;
- (void)stopPerfectScoreAnimation;
- (void)startPerfectScoreAnimation;
- (void)stopGoodScoreAnimation;
- (void)startGoodScoreAnimation;
- (void)checkScoreResult:(int)arg1 sentence:(int)arg2;
- (void)clearDatas;
- (void)updateCurrScore:(int)arg1;
- (void)onKSKitSingEnd;
- (void)onKSKitSingStop;
- (void)onKSKitSingStart;
- (_Bool)updateCurrUniqueId;
- (void)clearStates;
- (void)startSing;
- (void)updateGreateScoreCntLabelOrigin;
- (void)createGreateScoreCntLabel;
- (void)updateGreateScoreContentLabelOrigin;
- (void)createGreateScoreContentLabel;
- (struct CGRect)getSingerHeaderRect;
- (struct CGRect)getSingerPlayerRect;
- (struct CGPoint)getGreateScoreAnimationViewCenter;
- (void)updatePerfectPAGViewOrigin;
- (void)createPerfectPAGView;
- (void)updateGoodPAGViewOrigin;
- (void)createGoodPAGView;
- (void)updateScoreLabelOrigin;
- (void)refreshScoreLabelUI;
- (void)layoutScoreLabel;
- (void)layoutMusicLyricContainerView;
- (void)layoutMusicNoteAdjustView;
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


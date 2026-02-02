//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveKtvSongScoreReportRequest_ScoreInfo, MMFinderLiveKSKitMusicSong, MMFinderLiveKTVAudioEffectBaseProcesser, MMFinderLiveKTVBGMEngine, MMFinderLiveKTVBaseScorer, MMFinderLiveKTVBox, MMFinderLiveKTVReporter, MMFinderLiveTask, MMFinderLiveTaskId, MMLiveStorageCleanupPinningToken, NSData, NSMutableArray, NSRecursiveLock, NSSet, NSString;
@protocol MMLiveUniqueTaskId;

@interface MMFinderLiveKSKitAudioEngine : NSObject
{
    _Bool _isSinging;
    _Bool _isPause;
    _Bool _useTSKScorer;
    _Bool _useMMKProcesser;
    _Bool _useTSKProcesser;
    _Bool _useMMKScorer;
    _Bool _isSingBySelf;
    _Bool _enableTestInput;
    _Bool _isCurrInValidTimeRange;
    _Bool _isMicMuted;
    _Bool _supportSing;
    int _lastTimePosition;
    int _lastBGMTimePosition;
    int _pcmFrameSize;
    MMFinderLiveKSKitMusicSong *_currMusicSong;
    id <MMLiveUniqueTaskId> _taskId;
    MMFinderLiveKTVBox *_ktvBox;
    MMFinderLiveKTVBGMEngine *_bgmEngine;
    MMFinderLiveKTVAudioEffectBaseProcesser *_mainProcesser;
    MMFinderLiveKTVAudioEffectBaseProcesser *_voiceEarProcesser;
    NSMutableArray *_processerList;
    NSMutableArray *_scorerList;
    MMFinderLiveKTVBaseScorer *_mainScorer;
    MMFinderLiveKTVBaseScorer *_remoteLyricParseScorer;
    unsigned long long _currFrameSeq;
    double _lastTimeInterval;
    NSData *_testPCMData;
    MMLiveStorageCleanupPinningToken *_songResourcesPinningToken;
    FinderLiveKtvSongScoreReportRequest_ScoreInfo *_singingScoreInfo;
    NSRecursiveLock *_scoreInfoLock;
    MMFinderLiveKTVReporter *_reporter;
}

+ (unsigned long long)transferSingStartRetToPlayErrorType:(long long)arg1;
+ (id)createDefaultAudioSettingCache;
+ (void)notifyAudioRouteChanged:(long long)arg1 fromRoute:(long long)arg2;
- (void).cxx_destruct;
@property(retain) MMFinderLiveKTVReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) _Bool supportSing; // @synthesize supportSing=_supportSing;
@property(retain, nonatomic) NSRecursiveLock *scoreInfoLock; // @synthesize scoreInfoLock=_scoreInfoLock;
@property(retain, nonatomic) FinderLiveKtvSongScoreReportRequest_ScoreInfo *singingScoreInfo; // @synthesize singingScoreInfo=_singingScoreInfo;
@property _Bool isMicMuted; // @synthesize isMicMuted=_isMicMuted;
@property _Bool isCurrInValidTimeRange; // @synthesize isCurrInValidTimeRange=_isCurrInValidTimeRange;
@property(retain, nonatomic) MMLiveStorageCleanupPinningToken *songResourcesPinningToken; // @synthesize songResourcesPinningToken=_songResourcesPinningToken;
@property(retain, nonatomic) NSData *testPCMData; // @synthesize testPCMData=_testPCMData;
@property(nonatomic) _Bool enableTestInput; // @synthesize enableTestInput=_enableTestInput;
@property(nonatomic) int pcmFrameSize; // @synthesize pcmFrameSize=_pcmFrameSize;
@property(nonatomic) int lastBGMTimePosition; // @synthesize lastBGMTimePosition=_lastBGMTimePosition;
@property(nonatomic) double lastTimeInterval; // @synthesize lastTimeInterval=_lastTimeInterval;
@property(nonatomic) unsigned long long currFrameSeq; // @synthesize currFrameSeq=_currFrameSeq;
@property(nonatomic) _Bool isSingBySelf; // @synthesize isSingBySelf=_isSingBySelf;
@property(retain, nonatomic) MMFinderLiveKTVBaseScorer *remoteLyricParseScorer; // @synthesize remoteLyricParseScorer=_remoteLyricParseScorer;
@property(retain, nonatomic) MMFinderLiveKTVBaseScorer *mainScorer; // @synthesize mainScorer=_mainScorer;
@property(retain, nonatomic) NSMutableArray *scorerList; // @synthesize scorerList=_scorerList;
@property(nonatomic) _Bool useMMKScorer; // @synthesize useMMKScorer=_useMMKScorer;
@property(retain, nonatomic) NSMutableArray *processerList; // @synthesize processerList=_processerList;
@property(retain, nonatomic) MMFinderLiveKTVAudioEffectBaseProcesser *voiceEarProcesser; // @synthesize voiceEarProcesser=_voiceEarProcesser;
@property(retain, nonatomic) MMFinderLiveKTVAudioEffectBaseProcesser *mainProcesser; // @synthesize mainProcesser=_mainProcesser;
@property(nonatomic) _Bool useTSKProcesser; // @synthesize useTSKProcesser=_useTSKProcesser;
@property(nonatomic) _Bool useMMKProcesser; // @synthesize useMMKProcesser=_useMMKProcesser;
@property(retain, nonatomic) MMFinderLiveKTVBGMEngine *bgmEngine; // @synthesize bgmEngine=_bgmEngine;
@property(nonatomic) __weak MMFinderLiveKTVBox *ktvBox; // @synthesize ktvBox=_ktvBox;
@property(retain, nonatomic) id <MMLiveUniqueTaskId> taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool useTSKScorer; // @synthesize useTSKScorer=_useTSKScorer;
@property(nonatomic) int lastTimePosition; // @synthesize lastTimePosition=_lastTimePosition;
@property(retain, nonatomic) MMFinderLiveKSKitMusicSong *currMusicSong; // @synthesize currMusicSong=_currMusicSong;
@property(nonatomic) _Bool isPause; // @synthesize isPause=_isPause;
@property(nonatomic) _Bool isSinging; // @synthesize isSinging=_isSinging;
- (void)debug_modifyFrameDataIfNeed:(id)arg1;
- (void)debug_initTestPCMIfNeed:(id)arg1;
- (id)getScoreInfo;
- (void)recordSingEnd:(id)arg1 sentenceCnt:(unsigned int)arg2;
- (void)recordSingingProgress:(int)arg1;
- (void)recordNewScore:(int)arg1 sentenceIndex:(int)arg2 totalScore:(int)arg3;
- (void)updateScoreInfo:(id)arg1;
- (void)onBgmPitchChanged:(int)arg1;
- (void)onVoiceEarMonitorUsableChanged:(_Bool)arg1;
- (void)onVoiceEarMonitorEnableChanged:(_Bool)arg1;
- (void)onPlayBGMStoped;
- (void)onPlayBGMResumed:(long long)arg1;
- (void)onPlayBGMPaused;
- (void)onPlayBGMStartFail;
- (void)onPlayBGMStartSucc;
- (void)onPlayBGMStart:(long long)arg1;
- (void)onPlayBGMEnd;
- (void)onPlayBGMToSingingEnd;
- (void)onBGMProgressUpdate:(int)arg1;
- (void)onPlayBGMProgress:(long long)arg1 allDuration:(long long)arg2;
- (_Bool)isProcesserNeedIgnoreFrameProcess;
- (double)getValidVolumnThreshold;
- (_Bool)isScorerNeedIgnoreFrameProcess;
- (void)scorer:(id)arg1 targetHitIn:(int)arg2 duration:(int)arg3 isHit:(_Bool)arg4 noteHeight:(float)arg5 noteValue:(float)arg6;
- (void)scorer:(id)arg1 didFinishWithTotalScore:(int)arg2 averageScore:(double)arg3;
- (void)scorer:(id)arg1 didGetNewScore:(int)arg2 sentenceIndex:(int)arg3 totalScore:(int)arg4;
- (void)updateTimePosition:(int)arg1 notify:(_Bool)arg2;
- (void)adjustTimePositionIfNeed:(int)arg1;
- (void)initTimePositionIfNeed:(int)arg1;
- (void)increaseTimePositionOffset:(int)arg1;
- (void)onVoiceEarMonitorAudioFrame:(id)arg1;
- (void)onCapturedAudioFrame:(id)arg1;
- (void)processVoiceEarEffect:(id)arg1;
- (void)initVoiceEarEffectProcesser;
- (void)stopVoiceEarEffectProcesser;
- (void)startVoiceEarEffectProcesser;
- (long long)convertSampleRateToTrtcSampleRate:(int)arg1;
- (void)processFrameEffect:(id)arg1 byProcesser:(id)arg2;
- (id)getAudioProcesser;
- (void)processEffect:(id)arg1;
- (void)initAudioEffectProcesser;
- (void)stopAudioEffectProcesser;
- (void)startAudioEffectProcesser;
- (void)updateScoreStrategy;
- (void)processScore:(char *)arg1 inSize:(int)arg2 timeOffsetMS:(double)arg3;
- (_Bool)isScorer:(id)arg1 fitWithEngineFlag:(unsigned int)arg2;
- (void)initLyricParseScorer:(unsigned int)arg1;
- (void)stopLyricParseScorer;
- (void)startLyricParseScorer:(unsigned int)arg1;
- (void)stopAudioScorer;
- (void)startAudioScorer;
- (void)initDebugDatas;
- (void)initAudioScorer;
- (void)disableAudioCustomProcess;
- (void)enableAudioCustomProcess;
- (void)checkAndAdjustBGMSettingForSingBegin;
- (void)stopEngingSinging;
- (long long)startEngineSinging;
- (void)createSingEngine;
- (unsigned long long)viewScene;
- (id)ktvReporter;
@property(readonly, nonatomic) _Bool useMultiProcesser;
@property(readonly, nonatomic) NSSet *supportedReverbTypes;
@property(readonly, nonatomic) NSString *currUniqueId;
@property(readonly, nonatomic) MMFinderLiveTaskId *finderTaskId;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)increaseFrameSeq;
- (void)notifySongEnd:(id)arg1;
- (void)notifySingingEnd:(id)arg1;
- (void)notifySingingStop:(id)arg1;
- (void)notifySingingStart;
- (void)onScoreFinish:(int)arg1 avgScore:(int)arg2 allSentenceCnt:(unsigned int)arg3;
- (void)recoverAudioSetting;
- (void)innerStopSing;
- (void)clearSingingData;
- (void)prepareSingingData:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateCurrMusicSong:(id)arg1;
- (int)currActualVolumeVoice;
- (void)updateIsMicMuted;
- (void)updateCurrInValidTimeRange:(_Bool)arg1;
- (void)updateBGMMute:(_Bool)arg1;
- (_Bool)isCurrNeedLimitScore;
@property(readonly, nonatomic) _Bool isHeadHeadsetUsabled;
@property(readonly, nonatomic) _Bool isVoiceEarMonitorUsabled;
@property(readonly, nonatomic) _Bool isVoiceEarMonitorEnabled;
- (void)enableVoiceEarMonitor:(_Bool)arg1;
@property(readonly, nonatomic) int maxToneShift;
@property(readonly, nonatomic) int minToneShift;
@property(readonly, nonatomic) int toneShiftVar;
- (void)setToneShift:(int)arg1;
@property(readonly, nonatomic) unsigned long long optimizeReverbItemVar;
- (void)setOptimizeReverbType:(unsigned long long)arg1;
@property(readonly, nonatomic) long long musicChannel;
- (void)setAccompanyOrOrigin:(long long)arg1;
@property(readonly, nonatomic) float humanVoiceRatioVar;
- (void)setHumanVoiceRatio:(float)arg1;
@property(readonly, nonatomic) float accompanyVomlueRatioVar;
- (void)setAccompanyVomlueRatio:(float)arg1;
- (void)configSupportUtils;
- (void)configEngingSwitchs;
- (void)loadAudioParamSettingCache;
- (id)getAllLyricSentencesForCurrSong;
- (id)getAllMusicNotesForCurrSong;
- (void)onAudioRouteChanged:(long long)arg1 fromRoute:(long long)arg2;
- (void)finishScore:(CDUnknownBlockType)arg1;
- (void)resumeCurrSong;
- (void)pauseCurrSong;
- (long long)stopSing:(id)arg1 force:(_Bool)arg2;
- (void)startSong:(id)arg1 force:(_Bool)arg2 scoreEngineFlag:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startSingBySelf:(id)arg1 force:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)initDefaultDatas;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 supportSing:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


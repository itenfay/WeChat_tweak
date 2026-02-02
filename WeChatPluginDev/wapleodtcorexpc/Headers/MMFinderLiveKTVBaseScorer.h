//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiveKTVScorerInitParam, MMFinderLiveKSKitMusicSong, NSRecursiveLock;
@protocol MMFinderLiveKTVScorerDelegate;

@interface MMFinderLiveKTVBaseScorer : NSObject
{
    _Bool _initSucc;
    _Bool _isFinishScoring;
    id <MMFinderLiveKTVScorerDelegate> _scorerDelegate;
    struct __sFILE *_recordDumpFile;
    LiveKTVScorerInitParam *_settingParam;
    MMFinderLiveKSKitMusicSong *_song;
    CDUnknownBlockType _finishScoreCompletion;
    NSRecursiveLock *_audioScoreLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *audioScoreLock; // @synthesize audioScoreLock=_audioScoreLock;
@property(copy, nonatomic) CDUnknownBlockType finishScoreCompletion; // @synthesize finishScoreCompletion=_finishScoreCompletion;
@property(nonatomic) _Bool isFinishScoring; // @synthesize isFinishScoring=_isFinishScoring;
@property(retain, nonatomic) MMFinderLiveKSKitMusicSong *song; // @synthesize song=_song;
@property(retain, nonatomic) LiveKTVScorerInitParam *settingParam; // @synthesize settingParam=_settingParam;
@property(nonatomic) struct __sFILE *recordDumpFile; // @synthesize recordDumpFile=_recordDumpFile;
@property(nonatomic) _Bool initSucc; // @synthesize initSucc=_initSucc;
@property(nonatomic) __weak id <MMFinderLiveKTVScorerDelegate> scorerDelegate; // @synthesize scorerDelegate=_scorerDelegate;
- (void)debug_dump:(char *)arg1 size:(int)arg2;
- (void)closeRecordDumpFile;
- (void)createRecordDumpFile;
@property(readonly, nonatomic) _Bool isStart;
@property(readonly, nonatomic) _Bool debugDumpSwitch;
- (void)onSongStopScore;
- (void)onSongStartScore;
- (_Bool)checkNeedIgnoreFrameProcess:(id)arg1;
- (void)setKeyShift:(int)arg1;
- (void)enableRatioReduce:(_Bool)arg1;
- (id)parseMusicNotes;
- (_Bool)finishScore:(CDUnknownBlockType)arg1;
- (void)process:(id)arg1;
- (_Bool)stopScore;
- (_Bool)startScoreWithSong:(id)arg1;
- (void)dealloc;
- (void)initDefaultDatas;
- (id)initWithParam:(id)arg1;

@end


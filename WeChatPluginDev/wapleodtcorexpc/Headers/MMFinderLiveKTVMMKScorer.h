//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMKScorer, NSString;

@interface MMFinderLiveKTVMMKScorer
{
    _Bool _scoreBegin;
    MMKScorer *_audioScore;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool scoreBegin; // @synthesize scoreBegin=_scoreBegin;
@property(retain, nonatomic) MMKScorer *audioScore; // @synthesize audioScore=_audioScore;
- (void)scorerCallback:(id)arg1 targetHitIn:(double)arg2 duration:(double)arg3 isHit:(_Bool)arg4 noteValue:(int)arg5 noteHeight:(int)arg6;
- (void)scorerCallback:(id)arg1 didFinishWithResult:(id)arg2;
- (void)scorerCallback:(id)arg1 didGetScoreForSentence:(int)arg2 result:(id)arg3;
- (void)stopAudioScorer;
- (void)configAudioScorer:(id)arg1;
- (void)initAudioScorer;
- (void)setKeyShift:(int)arg1;
- (id)parseMusicNotes;
- (_Bool)finishScore:(CDUnknownBlockType)arg1;
- (void)processScore:(id)arg1;
- (void)process:(id)arg1;
- (_Bool)stopScore;
- (_Bool)startScoreWithSong:(id)arg1;
- (void)initDefaultDatas;
- (id)initWithParam:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


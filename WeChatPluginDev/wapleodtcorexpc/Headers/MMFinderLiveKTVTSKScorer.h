//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TSKScorer;
@protocol TSKMidiScoreCalculator;

@interface MMFinderLiveKTVTSKScorer
{
    TSKScorer *_audioScore;
    id <TSKMidiScoreCalculator> _calculator;
    double _lastScoreRatio;
}

- (void).cxx_destruct;
@property(nonatomic) double lastScoreRatio; // @synthesize lastScoreRatio=_lastScoreRatio;
@property(retain, nonatomic) id <TSKMidiScoreCalculator> calculator; // @synthesize calculator=_calculator;
@property(retain, nonatomic) TSKScorer *audioScore; // @synthesize audioScore=_audioScore;
- (void)scorer:(id)arg1 targetHitIn:(double)arg2 duration:(double)arg3 isHit:(_Bool)arg4 noteValue:(int)arg5;
- (void)scorer:(id)arg1 didFinishWithResult:(id)arg2;
- (void)scorer:(id)arg1 didGetScoreForSentence:(int)arg2 result:(id)arg3;
- (void)setKeyShift:(int)arg1;
- (void)setReduceRatio:(double)arg1;
- (void)stopAudioScorer;
- (void)initAudioScorer;
- (void)enableRatioReduce:(_Bool)arg1;
- (id)parseMusicNotes;
- (_Bool)finishScore:(CDUnknownBlockType)arg1;
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


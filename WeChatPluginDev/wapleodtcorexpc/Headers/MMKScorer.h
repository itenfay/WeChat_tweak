//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData;
@protocol MMKScorerDelegate;

@interface MMKScorer : NSObject
{
    _Bool _initSucc;
    int _channel;
    int _sampleRate;
    int _sentenceIndex;
    int _totalScore;
    id <MMKScorerDelegate> _delegate;
    void *_scorerHandler;
    NSData *_noteData;
    NSArray *_sentenceTimeArray;
}

+ (id)parseNormalizedNotesOrig:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int totalScore; // @synthesize totalScore=_totalScore;
@property(nonatomic) int sentenceIndex; // @synthesize sentenceIndex=_sentenceIndex;
@property(retain, nonatomic) NSArray *sentenceTimeArray; // @synthesize sentenceTimeArray=_sentenceTimeArray;
@property(retain, nonatomic) NSData *noteData; // @synthesize noteData=_noteData;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) int channel; // @synthesize channel=_channel;
@property(nonatomic) void *scorerHandler; // @synthesize scorerHandler=_scorerHandler;
@property(nonatomic) _Bool initSucc; // @synthesize initSucc=_initSucc;
@property(nonatomic) __weak id <MMKScorerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)normalizedNotes;
- (void)setKeyShift:(int)arg1;
- (void)finishAllScoreProcess;
- (void)process:(const char *)arg1 inSize:(int)arg2 timestamp:(double)arg3;
- (void)updateScoreWithIndex:(int)arg1 score:(int)arg2;
- (void)updateHitResult:(double)arg1 isHit:(_Bool)arg2 noteValue:(int)arg3 noteHeight:(int)arg4;
- (void)freeScorerHandler;
- (void)createScorerHandler;
- (void)initDefaultDatas;
- (void)dealloc;
- (void)deinit;
- (id)initWithSampleRate:(int)arg1 channel:(int)arg2 config:(id)arg3;

@end


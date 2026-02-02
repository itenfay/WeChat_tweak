//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, TSKScoreResultSet, TSKScorerConfig;
@protocol TSKScorerDelegate;

@interface TSKScorer : NSObject
{
    struct Scorer _scorer;
    struct unique_ptr<audiobase::dsp::PitchDetect, std::default_delete<audiobase::dsp::PitchDetect>> _pd;
    int _sampleRate;
    int _channels;
    id <TSKScorerDelegate> _delegate;
    CDUnknownBlockType _extraInfoBlock;
    long long _options;
    TSKScorerConfig *_config;
    TSKScoreResultSet *_scoreResultSet;
    NSOperationQueue *_scoreQueue;
    CDUnknownBlockType _seekExecutor;
    long long _shiftValue;
    double _reduceRatio;
    NSString *_mapString;
}

+ (long long)optionsForMidiScoreWithSampleRate:(int)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mapString; // @synthesize mapString=_mapString;
@property(nonatomic) double reduceRatio; // @synthesize reduceRatio=_reduceRatio;
@property(nonatomic) long long shiftValue; // @synthesize shiftValue=_shiftValue;
@property(copy, nonatomic) CDUnknownBlockType seekExecutor; // @synthesize seekExecutor=_seekExecutor;
@property(retain, nonatomic) NSOperationQueue *scoreQueue; // @synthesize scoreQueue=_scoreQueue;
@property(retain, nonatomic) TSKScoreResultSet *scoreResultSet; // @synthesize scoreResultSet=_scoreResultSet;
@property(nonatomic) int channels; // @synthesize channels=_channels;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
@property(retain, nonatomic) TSKScorerConfig *config; // @synthesize config=_config;
@property(nonatomic) long long options; // @synthesize options=_options;
@property(copy, nonatomic) CDUnknownBlockType extraInfoBlock; // @synthesize extraInfoBlock=_extraInfoBlock;
@property(nonatomic) __weak id <TSKScorerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateScoreWithIndex:(const void *)arg1;
- (void)copyResultSet;
- (void)cleanupEnv;
- (void)seekAsync:(double)arg1;
- (void)seekSync:(double)arg1;
- (void)accessScoreResult:(CDUnknownBlockType)arg1;
- (id)getScoreResult;
- (void)setKeyShift:(long long)arg1;
- (void)finishWithBlock:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)seek:(double)arg1;
- (void)process:(const char *)arg1 inSize:(int)arg2 timestamp:(double)arg3 curPitchs:(id)arg4;
- (int)sentenceCount;
- (void)deinit:(_Bool)arg1;
- (void)dealloc;
- (id)initWithSampleRate:(int)arg1 channels:(int)arg2 options:(long long)arg3 config:(id)arg4 error:(id *)arg5;
- (id)normalizedNotes;
- (struct _NSRange)noteRange;
- (id)newMidiCalculator;

@end


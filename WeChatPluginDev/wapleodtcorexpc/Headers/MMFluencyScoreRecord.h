//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMFluencyScoreRecord : NSObject
{
    float _score;
    int _miss0FrameCount;
    int _miss1FrameCount;
    int _miss2FrameCount;
    int _miss3FrameCount;
    int _miss4FrameCount;
    int _miss5OrMoreFrameCount;
    float _smoothRate;
    float _freezeRate;
    NSString *_ID;
    double _startTime;
    double _stopTime;
    NSArray *_caDisplayLinkDurations;
    NSArray *_caDisplayLinkStartTimes;
}

+ (double)worstDiscrete;
+ (void)calculateScore:(id)arg1 score:(float *)arg2 miss0FrameCount:(int *)arg3 miss1FrameCount:(int *)arg4 miss2FrameCount:(int *)arg5 miss3FrameCount:(int *)arg6 miss4FrameCount:(int *)arg7 miss5OrMoreFrameCount:(int *)arg8 smoothRate:(float *)arg9 freezeRate:(float *)arg10;
+ (id)freezeRateOfRecords:(id)arg1;
+ (id)smoothRateOfRecords:(id)arg1;
+ (id)scoresOfRecords:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) float freezeRate; // @synthesize freezeRate=_freezeRate;
@property(nonatomic) float smoothRate; // @synthesize smoothRate=_smoothRate;
@property(nonatomic) int miss5OrMoreFrameCount; // @synthesize miss5OrMoreFrameCount=_miss5OrMoreFrameCount;
@property(nonatomic) int miss4FrameCount; // @synthesize miss4FrameCount=_miss4FrameCount;
@property(nonatomic) int miss3FrameCount; // @synthesize miss3FrameCount=_miss3FrameCount;
@property(nonatomic) int miss2FrameCount; // @synthesize miss2FrameCount=_miss2FrameCount;
@property(nonatomic) int miss1FrameCount; // @synthesize miss1FrameCount=_miss1FrameCount;
@property(nonatomic) int miss0FrameCount; // @synthesize miss0FrameCount=_miss0FrameCount;
@property(nonatomic) float score; // @synthesize score=_score;
@property(retain, nonatomic) NSArray *caDisplayLinkStartTimes; // @synthesize caDisplayLinkStartTimes=_caDisplayLinkStartTimes;
@property(retain, nonatomic) NSArray *caDisplayLinkDurations; // @synthesize caDisplayLinkDurations=_caDisplayLinkDurations;
@property(nonatomic) double stopTime; // @synthesize stopTime=_stopTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)formatVCID;
- (void)recalculate;

@end


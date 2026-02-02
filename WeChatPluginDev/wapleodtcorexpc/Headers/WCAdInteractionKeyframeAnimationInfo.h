//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface WCAdInteractionKeyframeAnimationInfo
{
    _Bool _remainPreviousAnimation;
    NSArray *_timingFunctions;
    NSArray *_values;
    NSArray *_keyTimes;
    double _repeatCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool remainPreviousAnimation; // @synthesize remainPreviousAnimation=_remainPreviousAnimation;
@property(nonatomic) double repeatCount; // @synthesize repeatCount=_repeatCount;
@property(retain, nonatomic) NSArray *keyTimes; // @synthesize keyTimes=_keyTimes;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
@property(retain, nonatomic) NSArray *timingFunctions; // @synthesize timingFunctions=_timingFunctions;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


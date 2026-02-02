//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJTimeRulerScale : NSObject
{
    double _timeUnit;
    double _minSpacing;
    double _maxSpacing;
    long long _submarkCount;
    double _minSpacingBetweenSubmarks;
    CDUnknownBlockType _timeCodeFormatter;
}

+ (id)timeRulerScaleWithLevel:(unsigned long long)arg1 frameRate:(float)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType timeCodeFormatter; // @synthesize timeCodeFormatter=_timeCodeFormatter;
@property(nonatomic) double minSpacingBetweenSubmarks; // @synthesize minSpacingBetweenSubmarks=_minSpacingBetweenSubmarks;
@property(nonatomic) long long submarkCount; // @synthesize submarkCount=_submarkCount;
@property(nonatomic) double maxSpacing; // @synthesize maxSpacing=_maxSpacing;
@property(nonatomic) double minSpacing; // @synthesize minSpacing=_minSpacing;
@property(nonatomic) double timeUnit; // @synthesize timeUnit=_timeUnit;
- (id)description;

@end


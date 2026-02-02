//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction;

@interface MMDragDisplayLinkContext : NSObject
{
    double _beginTopValue;
    double _beginProgressValue;
    double _beginAlpha;
    double _endTopValue;
    double _endProgressValue;
    double _endAlpha;
    double _totalDuration;
    CAMediaTimingFunction *_timingFunction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) double endAlpha; // @synthesize endAlpha=_endAlpha;
@property(nonatomic) double endProgressValue; // @synthesize endProgressValue=_endProgressValue;
@property(nonatomic) double endTopValue; // @synthesize endTopValue=_endTopValue;
@property(nonatomic) double beginAlpha; // @synthesize beginAlpha=_beginAlpha;
@property(nonatomic) double beginProgressValue; // @synthesize beginProgressValue=_beginProgressValue;
@property(nonatomic) double beginTopValue; // @synthesize beginTopValue=_beginTopValue;
- (double)changingAlphaValue:(double)arg1;
- (double)changingProgressValue:(double)arg1;
- (double)changingTopValue:(double)arg1;

@end


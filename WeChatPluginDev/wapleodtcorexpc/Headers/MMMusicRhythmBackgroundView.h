//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMMusicRhythmBackgroundView
{
    _Bool _motioning;
    double _motionDuration;
}

@property(nonatomic) _Bool motioning; // @synthesize motioning=_motioning;
@property(nonatomic) double motionDuration; // @synthesize motionDuration=_motionDuration;
- (void)stopMotion;
- (void)startMotionExperiment;
- (void)startMotion;

@end


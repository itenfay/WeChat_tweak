//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TSTrackedMotionSequence, TSTrackedTapSequence;

@interface TSTrackedInputItem
{
    TSTrackedTapSequence *_tapSequence;
    TSTrackedMotionSequence *_motionSequence;
    double _timestamp;
    double _duration;
}

- (void).cxx_destruct;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) TSTrackedMotionSequence *motionSequence; // @synthesize motionSequence=_motionSequence;
@property(retain, nonatomic) TSTrackedTapSequence *tapSequence; // @synthesize tapSequence=_tapSequence;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTapSequence:(id)arg1 motionSequence:(id)arg2;

@end


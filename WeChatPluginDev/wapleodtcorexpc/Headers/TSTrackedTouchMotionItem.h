//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TSTrackedMotionSequence, TSTrackedSlideItem;

@interface TSTrackedTouchMotionItem
{
    TSTrackedSlideItem *_slideItem;
    TSTrackedMotionSequence *_motionSequence;
    double _timestamp;
    double _duration;
}

- (void).cxx_destruct;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) TSTrackedMotionSequence *motionSequence; // @synthesize motionSequence=_motionSequence;
@property(retain, nonatomic) TSTrackedSlideItem *slideItem; // @synthesize slideItem=_slideItem;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSlide:(id)arg1 motionSequence:(id)arg2;

@end


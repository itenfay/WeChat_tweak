//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface TSTrackedTouchItem
{
    long long _phase;
    double _force;
    double _radius;
    double _timestamp;
    struct CGPoint _point;
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(nonatomic) long long phase; // @synthesize phase=_phase;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUITouch:(id)arg1;

@end


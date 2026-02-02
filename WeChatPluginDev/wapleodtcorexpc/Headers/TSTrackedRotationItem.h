//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface TSTrackedRotationItem
{
    double _x;
    double _y;
    double _z;
    double _timestamp;
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double z; // @synthesize z=_z;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 timestamp:(double)arg4;

@end


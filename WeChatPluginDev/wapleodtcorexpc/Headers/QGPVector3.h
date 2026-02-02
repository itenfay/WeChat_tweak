//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface QGPVector3
{
    double _x;
    double _y;
    double _z;
}

@property(nonatomic) double z; // @synthesize z=_z;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
- (union _GLKVector3)toGLKVector3;

@end


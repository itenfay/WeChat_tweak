//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MAVEffectLayoutInfo : NSObject
{
    int _centerX;
    int _centerY;
    float _scale;
    float _rotate;
}

@property(nonatomic) float rotate; // @synthesize rotate=_rotate;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) int centerY; // @synthesize centerY=_centerY;
@property(nonatomic) int centerX; // @synthesize centerX=_centerX;
- (id)initWithCenterX:(int)arg1 centerY:(int)arg2 scale:(float)arg3 rotate:(float)arg4;
- (id)initWithCenterX:(int)arg1 centerY:(int)arg2 scale:(float)arg3;
- (id)initWithCenterX:(int)arg1 centerY:(int)arg2;

@end


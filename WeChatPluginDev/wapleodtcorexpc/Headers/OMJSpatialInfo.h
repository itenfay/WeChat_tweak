//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMJSpatialInfo : NSObject
{
    float _scale;
    float _rotation;
    struct CGPoint _position;
    struct CGPoint _anchorPoint;
}

@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(nonatomic) float rotation; // @synthesize rotation=_rotation;
@property(nonatomic) float scale; // @synthesize scale=_scale;
- (id)description;
- (id)initWithScale:(float)arg1 rotation:(float)arg2 position:(struct CGPoint)arg3 anchorPoint:(struct CGPoint)arg4;
- (id)initWithScale:(float)arg1 rotation:(float)arg2 position:(struct CGPoint)arg3;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMJCamSpatialDesc : NSObject
{
    float _scale;
    unsigned long long _scaleMode;
    unsigned long long _rotationMode;
    unsigned long long _flipMode;
    struct CGSize _viewPointSize;
    struct CGPoint _position;
}

@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) unsigned long long flipMode; // @synthesize flipMode=_flipMode;
@property(nonatomic) unsigned long long rotationMode; // @synthesize rotationMode=_rotationMode;
@property(nonatomic) unsigned long long scaleMode; // @synthesize scaleMode=_scaleMode;
@property(readonly, nonatomic) struct CGSize viewPointSize; // @synthesize viewPointSize=_viewPointSize;
- (id)description;
- (id)initWithBackingDesc:(const void *)arg1;
- (id)initWithSpatialDesc:(id)arg1;

@end


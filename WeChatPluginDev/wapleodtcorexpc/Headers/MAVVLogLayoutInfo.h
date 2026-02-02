//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MAVVLogLayoutInfo : NSObject
{
    int _centerX;
    int _centerY;
    float _scale;
    float _rotate;
    int _scaleBase;
}

@property(nonatomic) int scaleBase; // @synthesize scaleBase=_scaleBase;
@property(nonatomic) float rotate; // @synthesize rotate=_rotate;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) int centerY; // @synthesize centerY=_centerY;
@property(nonatomic) int centerX; // @synthesize centerX=_centerX;
- (id)init;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TBDrawParam : NSObject
{
    float _viewMat[16];
    float _projectMat[16];
    int _renderType;
    int _width;
    int _height;
    float _distancePerPixel;
}

@property float distancePerPixel; // @synthesize distancePerPixel=_distancePerPixel;
@property int height; // @synthesize height=_height;
@property int width; // @synthesize width=_width;
@property int renderType; // @synthesize renderType=_renderType;
- (void)update:(struct TBDrawParamType *)arg1;
@property(readonly) float *projectMatrix;
@property(readonly) float *viewMatrix;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WeVisGLDrawQuad;

@interface WeVisGLYUV2RGBA : NSObject
{
    WeVisGLDrawQuad *mQuadDrawer;
    float coorOffsetX;
    float coorOffsetY;
    float coorScaleX;
    float coorScaleY;
    _Bool _isInitialized;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInitialized; // @synthesize isInitialized=_isInitialized;
- (void)drawFromY:(unsigned int)arg1 UV:(unsigned int)arg2 transpose:(_Bool)arg3 rotation:(int)arg4;
- (void)setInputWidth:(int)arg1 inputHeight:(int)arg2 outputWidth:(int)arg3 outputHeight:(int)arg4;
- (id)initWith_ITU_R_BT_601_FullRange;

@end


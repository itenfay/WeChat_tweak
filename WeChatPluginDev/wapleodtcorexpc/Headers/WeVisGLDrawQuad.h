//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WeVisGLProgram;

@interface WeVisGLDrawQuad : NSObject
{
    unsigned int mQuadVAO;
    unsigned int mQuadVBO;
    WeVisGLProgram *mQuadProgram;
    float mUvScaleX;
    float mUvScaleY;
    float mUvOffsetX;
    float mUvOffsetY;
    int mUVTransform;
    int mUvScaleLoc;
    int mUvOffsetLoc;
    int mUvMatrixLoc;
    int mUvTranslateLoc;
    NSMutableDictionary *mUniformCache;
    _Bool _isInitialized;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInitialized; // @synthesize isInitialized=_isInitialized;
- (void)drawFromTex0:(unsigned int)arg1 tex1:(unsigned int)arg2 UVTransform:(int)arg3;
- (void)drawFromTex0:(unsigned int)arg1 UVTransform:(int)arg2;
- (void)setupQuadVertexStream;
- (void)dealloc;
- (void)bindUniform:(const char *)arg1 toFloatX:(float)arg2 Y:(float)arg3;
- (void)bindUniform:(const char *)arg1 toTexUnit:(int)arg2;
- (id)initWithFragShader:(const char *)arg1;

@end


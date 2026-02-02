//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMGPUGLProgram;

@interface MMGPUOneTextureRender : NSObject
{
    MMGPUGLProgram *renderProgram;
    int filterPositionAttribute;
    int filterTextureCoordinateAttribute;
    int filterInputTextureUniform;
    float backgroundColorRed;
    float backgroundColorGreen;
    float backgroundColorBlue;
    float backgroundColorAlpha;
    struct CGSize currentFilterSize;
    unsigned int texture;
    unsigned int framebuffer;
    unsigned long long inputRotation;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)setFloat:(float)arg1 forUniform:(int)arg2;
- (void)setInteger:(int)arg1 forUniform:(int)arg2;
- (int)getTextureID;
- (int)renderToTextue:(int)arg1 inputRes:(struct CGSize)arg2;
- (void)initializeAttributes;
- (_Bool)updatebuffer:(struct CGSize)arg1;
- (_Bool)checkGLError;
- (void)destroybuffers;
- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderString:(id)arg2;
- (id)init;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MTLRenderPassDescriptor, MTLTextureDescriptor;
@protocol MTLBuffer, MTLDevice, MTLLibrary, MTLRenderPipelineState, MTLTexture;

@interface VideoLucidMetal : NSObject
{
    int _lucidMode;
    id <MTLDevice> _metalDevice;
    id <MTLLibrary> _shadersLibrary;
    unsigned long long _width;
    unsigned long long _height;
    id <MTLBuffer> _vertexBuffer;
    MTLRenderPassDescriptor *mSourcePassDescriptor;
    MTLTextureDescriptor *_sourceTextureDescriptor;
    id <MTLTexture> _sourceTexture;
    MTLRenderPassDescriptor *_drawablePassDescriptor;
    id <MTLRenderPipelineState> _drawablePipelineState;
    int _frameNum;
    float _screenBrightness;
    float _screenBrightnessThreshold;
    float _screenBrightnessHeadroom;
    float _screenCurrentEDRHeadroom;
}

- (void).cxx_destruct;
- (void)uploadTexturesToCommandEncoder:(id)arg1;
- (void)setScreenEDRHeadroom:(float)arg1;
- (void)setScreenBrightness:(float)arg1;
- (void)setupTexturesWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (int)getMode;
- (id)getTexture;
- (void)dealloc;
- (id)initWithLucidMode:(int)arg1 device:(id)arg2;

@end


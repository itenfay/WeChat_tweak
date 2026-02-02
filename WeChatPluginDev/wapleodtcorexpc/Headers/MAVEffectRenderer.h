//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MAVCopyRendererMetal, MAVEffectManager, MAVMetalContext, NSMutableArray;

@interface MAVEffectRenderer : NSObject
{
    MAVEffectManager *_effectManager;
    MAVCopyRendererMetal *_screenRender;
    int _width;
    int _height;
    _Bool _sizeChanged;
    NSMutableArray *_inputArray;
    struct __CVBuffer *_outputTexture;
    struct __CVBuffer *_outputPixelBuffer;
    NSMutableArray *_textureRefCache;
    MAVMetalContext *_context;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MAVMetalContext *context; // @synthesize context=_context;
- (void)checkOutput;
- (id)getTexture;
- (struct __CVBuffer *)getPixelBuffer;
- (void)createInput:(id)arg1;
- (void)renderToScreen:(id)arg1 WithPts:(long long)arg2;
- (void)renderToScreen:(id)arg1;
- (void)renderWithPts:(long long)arg1;
- (void)render;
- (void)addInputWithInfo:(id)arg1;
- (void)addInput:(struct __CVBuffer *)arg1 rotate:(long long)arg2;
- (void)addInput:(struct __CVBuffer *)arg1;
- (void)setSize:(int)arg1 height:(int)arg2;
- (id)getEffectManager;
- (void)dealloc;
- (void)setup;
- (id)initWithContext:(id)arg1;
- (id)init;

@end


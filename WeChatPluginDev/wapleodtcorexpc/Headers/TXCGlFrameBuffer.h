//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol TXIGlContext;

@interface TXCGlFrameBuffer : NSObject
{
    _Bool _enableShareTexToPixelBuffer;
    unsigned int _framebuffer;
    unsigned int _texture;
    struct __CVBuffer *_renderPixelBuffer;
    unsigned long long _mode;
    id <TXIGlContext> _glContext;
    struct __CVBuffer *_renderTexture;
    char *_outputBytes;
    struct CGSize _size;
    struct CGSize _outputSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(nonatomic) char *outputBytes; // @synthesize outputBytes=_outputBytes;
@property(nonatomic) struct __CVBuffer *renderTexture; // @synthesize renderTexture=_renderTexture;
@property(readonly, nonatomic) id <TXIGlContext> glContext; // @synthesize glContext=_glContext;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool enableShareTexToPixelBuffer; // @synthesize enableShareTexToPixelBuffer=_enableShareTexToPixelBuffer;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) struct __CVBuffer *renderPixelBuffer; // @synthesize renderPixelBuffer=_renderPixelBuffer;
@property(nonatomic) unsigned int texture; // @synthesize texture=_texture;
@property(readonly, nonatomic) unsigned int framebuffer; // @synthesize framebuffer=_framebuffer;
@property(readonly, nonatomic) unsigned long long padding;
@property(readonly, nonatomic) char *byteBuffer;
- (void)createTextureWithSize:(struct CGSize)arg1;
- (_Bool)createRenderPixelBufferWithSize:(struct CGSize)arg1;
- (void)createFramebuffer;
- (void)bindPixelBuffer:(struct __CVBuffer *)arg1;
- (void)bindPixelBufferAsRenderTarget:(struct __CVBuffer *)arg1;
- (void)activateWithClear:(_Bool)arg1;
- (void)activate;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAEJJavaScriptView;

@interface WAEJCanvasContextWebGL
{
    unsigned int viewFrameBuffer;
    unsigned int viewRenderBuffer;
    unsigned int msaaFrameBuffer;
    unsigned int msaaRenderBuffer;
    unsigned int boundFrameBuffer;
    unsigned int boundRenderBuffer;
    unsigned int depthStencilBuffer;
    WAEJJavaScriptView *scriptView;
}

- (void)setHeight:(short)arg1;
- (void)setWidth:(short)arg1;
- (void)bindRenderbuffer:(int)arg1 toTarget:(unsigned int)arg2;
- (void)bindFramebuffer:(int)arg1 toTarget:(unsigned int)arg2;
- (void)clear;
- (void)setStopRender:(_Bool)arg1;
- (void)prepare;
- (void)dealloc;
- (void)create;
- (void)resizeAuxiliaryBuffers;
- (void)resizeToWidth:(short)arg1 height:(short)arg2;
- (id)initWithScriptView:(id)arg1 width:(short)arg2 height:(short)arg3 screenGroup:(_Bool)arg4;
@property(nonatomic) _Bool needsPresenting;

@end


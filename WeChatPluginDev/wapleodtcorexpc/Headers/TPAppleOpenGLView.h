//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class EAGLContext;

@interface TPAppleOpenGLView : UIView
{
    struct TPVideoRender *_glRenderer;
    struct TPVideoRenderFrame *_glFrame;
    EAGLContext *_eaglContext;
    int _backingWidth;
    int _backingHeight;
    unsigned int _frameBuffer;
    unsigned int _renderBuffer;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)clearAllResources;
- (void)uninitGL;
- (_Bool)initGL;
- (void)uninit;
- (void)finish;
- (int)writeOneFrame:(struct TPFrame *)arg1;
- (void)dealloc;
- (id)initWithParams:(struct TPRendererVideoFrameParams)arg1;

@end


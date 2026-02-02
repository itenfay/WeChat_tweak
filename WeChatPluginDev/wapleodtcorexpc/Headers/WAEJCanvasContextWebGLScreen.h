//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EAGLView, UIView;

@interface WAEJCanvasContextWebGLScreen
{
    EAGLView *glview;
    struct CGRect style;
    _Bool needResumeUpdate;
    int gCurrFrameBuffer;
    int gCurrRenderBuffer;
}

@property(readonly, nonatomic) UIView *view; // @synthesize view=glview;
@property(nonatomic) struct CGRect style; // @synthesize style;
- (id)getTexture;
- (void)remove;
- (void)resumeUpdate:(_Bool)arg1;
- (id)texture;
- (void)present;
- (id)captureImage;
- (void)resetFramebuffer;
- (void)finish;
- (void)onLayerReady:(id)arg1;
- (_Bool)notifyStyleChangedIfNeeded:(struct CGRect)arg1;
- (void)resizeToWidth:(short)arg1 height:(short)arg2;
- (struct CGRect)frame;
- (void)dealloc;

@end


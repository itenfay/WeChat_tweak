//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EAGLView, UIView;

@interface WAEJCanvasContextSkia2DScreen
{
    EAGLView *glview;
    struct CGRect style;
    unsigned int _viewRenderbuffer;
    unsigned int _viewFramebuffer;
    sk_sp_ce222020 _onscreenSurface;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned int viewFramebuffer; // @synthesize viewFramebuffer=_viewFramebuffer;
@property(nonatomic) unsigned int viewRenderbuffer; // @synthesize viewRenderbuffer=_viewRenderbuffer;
@property(nonatomic) sk_sp_ce222020 onscreenSurface; // @synthesize onscreenSurface=_onscreenSurface;
@property(readonly, nonatomic) UIView *view; // @synthesize view=glview;
@property(nonatomic) struct CGRect style; // @synthesize style;
- (void)present;
- (id)getTexture;
- (id)captureImage;
- (void *)canvas;
- (void)prepare;
- (void)resetFramebuffer;
- (void)finish;
- (void)remove;
- (void)markDrawCall;
- (void)create;
- (_Bool)notifyStyleChangedIfNeeded:(struct CGRect)arg1;
- (void)resizeToWidth:(short)arg1 height:(short)arg2;
- (struct CGRect)frame;
- (void)dealloc;

@end


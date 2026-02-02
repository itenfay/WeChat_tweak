//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EAGLView, UIView, WAEJTexture;

@interface WAEJCanvasContext2DScreen
{
    EAGLView *glview;
    struct CGRect style;
}

@property(readonly, nonatomic) UIView *view; // @synthesize view=glview;
@property(nonatomic) struct CGRect style; // @synthesize style;
- (id)getTexture;
@property(readonly, nonatomic) WAEJTexture *texture;
- (void)remove;
- (void)resetFramebuffer;
- (void)present;
- (void)finish;
- (void)onLayerReady:(id)arg1;
- (_Bool)notifyStyleChangedIfNeeded:(struct CGRect)arg1;
- (void)resizeToWidth:(short)arg1 height:(short)arg2;
- (struct CGRect)frame;
- (void)dealloc;

@end


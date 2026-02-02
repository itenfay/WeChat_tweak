//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebCanvasPopupParamas, MMWebCanvasView, NSString, UIView;

@interface MMWebCanvasPopupView
{
    MMWebCanvasView *_canvasView;
    MMWebCanvasPopupParamas *_params;
    UIView *_backgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMWebCanvasPopupParamas *params; // @synthesize params=_params;
@property(retain, nonatomic) MMWebCanvasView *canvasView; // @synthesize canvasView=_canvasView;
- (long long)getFPS:(id)arg1;
- (_Bool)isCanvasViewInBackground:(id)arg1;
- (_Bool)isCanvasViewAppear:(id)arg1;
- (double)getCanvasViewVisibleContainerHeight:(id)arg1;
- (double)getCanvasViewVisibleOffsetY:(id)arg1;
- (double)getCanvasViewHeight:(id)arg1;
- (double)getCanvasViewWidth:(id)arg1;
- (void)MMUIViewControllerWillAppear:(id)arg1;
- (void)onTapBackground;
- (void)close;
- (void)__repaintCanvas;
- (void)show;
- (id)canvasId;
- (void)updateCanvasView;
- (void)initCanvasView;
- (void)updateBgView;
- (void)initBgView;
- (void)setupRootViewController;
- (void)internalInit;
- (void)updateWithParams:(id)arg1;
- (id)initWithParams:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAEAGLLayer, NSString, TXCCameraFocusSquareView, TXCDispatchQueue;
@protocol TXIGlContext, TXIVideoRenderViewDelegate;

@interface TXCiOSVideoRenderView : UIView
{
    _Bool _isGlObjectsInvalid;
    unsigned int _frameBuffer;
    unsigned int _renderBuffer;
    id <TXIVideoRenderViewDelegate> renderDelegate;
    id <TXIGlContext> _context;
    TXCDispatchQueue *_renderQueue;
    CAEAGLLayer *_eaglLayer;
    TXCCameraFocusSquareView *_focusSquareView;
    struct CGSize _viewSize;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) TXCCameraFocusSquareView *focusSquareView; // @synthesize focusSquareView=_focusSquareView;
@property(nonatomic) _Bool isGlObjectsInvalid; // @synthesize isGlObjectsInvalid=_isGlObjectsInvalid;
@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(nonatomic) unsigned int renderBuffer; // @synthesize renderBuffer=_renderBuffer;
@property(nonatomic) unsigned int frameBuffer; // @synthesize frameBuffer=_frameBuffer;
@property(readonly, nonatomic) CAEAGLLayer *eaglLayer; // @synthesize eaglLayer=_eaglLayer;
@property(readonly, nonatomic) TXCDispatchQueue *renderQueue; // @synthesize renderQueue=_renderQueue;
@property(readonly, nonatomic) id <TXIGlContext> context; // @synthesize context=_context;
@property(nonatomic) __weak id <TXIVideoRenderViewDelegate> renderDelegate; // @synthesize renderDelegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePinchGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)addPinchGesture;
- (void)addTapGesture;
- (void)showFocusViewAtPoint:(struct CGPoint)arg1;
- (void)snapshotWithImageSize:(struct CGSize)arg1 fillMode:(unsigned long long)arg2 rotation:(unsigned long long)arg3 onComplete:(CDUnknownBlockType)arg4;
- (void)render;
- (_Bool)prepareToRender;
- (void)embedViewIn:(id)arg1;
- (void)layoutSubviews;
- (_Bool)createGlObjectsIfNeeded;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TXCDispatchQueue, TXCDroppableDispatcher, TXCFramebufferDrawer, TXCGSensor, TXCVideoFrame, TXCVideoFrameCoords, TXCVideoRenderConfig, UIView;
@protocol TXIGlContext, TXILocalVideoRendererDelegate, TXIVideoRenderViewInterface;

@interface TXCViewVideoRenderer
{
    id <TXILocalVideoRendererDelegate> rendererDelegate;
    TXCDispatchQueue *_queue;
    id <TXIGlContext> _context;
    id <TXIGlContext> _refContext;
    TXCVideoRenderConfig *_config;
    UIView *_superView;
    UIView<TXIVideoRenderViewInterface> *_renderView;
    TXCVideoFrameCoords *_frameCoords;
    TXCFramebufferDrawer *_drawer;
    TXCGSensor *_gSensor;
    CDUnknownBlockType _drawOperation;
    TXCDroppableDispatcher *_dispatcher;
    TXCVideoFrame *_lastFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TXCVideoFrame *lastFrame; // @synthesize lastFrame=_lastFrame;
@property(retain, nonatomic) TXCDroppableDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly, copy, nonatomic) CDUnknownBlockType drawOperation; // @synthesize drawOperation=_drawOperation;
@property(retain, nonatomic) TXCGSensor *gSensor; // @synthesize gSensor=_gSensor;
@property(retain, nonatomic) TXCFramebufferDrawer *drawer; // @synthesize drawer=_drawer;
@property(retain, nonatomic) TXCVideoFrameCoords *frameCoords; // @synthesize frameCoords=_frameCoords;
@property(retain) UIView<TXIVideoRenderViewInterface> *renderView; // @synthesize renderView=_renderView;
@property(nonatomic) __weak UIView *superView; // @synthesize superView=_superView;
@property(readonly, nonatomic) TXCVideoRenderConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) id <TXIGlContext> refContext; // @synthesize refContext=_refContext;
@property(readonly, nonatomic) id <TXIGlContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <TXILocalVideoRendererDelegate> rendererDelegate; // @synthesize rendererDelegate;
- (void)gSensor:(id)arg1 onChangeRenderRotation:(unsigned long long)arg2 isViewInLandscape:(_Bool)arg3;
- (void)renderView:(id)arg1 onPinchScale:(double)arg2;
- (void)renderView:(id)arg1 onTouchPoint:(struct CGPoint)arg2;
- (void)renderView:(id)arg1 onSizeChange:(struct CGSize)arg2;
- (void)drawPixelBuffer:(id)arg1;
- (void)drawTexture:(id)arg1;
- (void)drawVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (id)createRenderContextFrom:(id)arg1;
- (struct CGRect)renderRect;
- (void)showFocusViewAtPoint:(struct CGPoint)arg1;
- (id)convertPointToVideoFrame:(struct CGPoint)arg1 isFrontCamera:(_Bool)arg2;
- (void)snapshotOnComplete:(CDUnknownBlockType)arg1;
- (void)setGSensorMode:(unsigned long long)arg1 homeOrientation:(int)arg2;
- (void)setRotation:(unsigned long long)arg1;
- (void)setMirrorMode:(unsigned long long)arg1;
- (void)setFillMode:(unsigned long long)arg1;
- (void)clearScreen;
- (void)clearRenderTask;
- (void)stop:(_Bool)arg1;
- (void)start;
- (void)processVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)applyConfigs;
- (void)dealloc;
- (_Bool)createGlObjectsIfNeeded;
- (void)setupRenderViewWithSuperView:(id)arg1;
- (id)initWithQueue:(id)arg1 context:(id)arg2 config:(id)arg3 view:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


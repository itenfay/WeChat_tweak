//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject, NSString, TXCDispatchQueue, TXCGSensor, TXCMTKView, TXCMetalContext, TXCMetalDisplayConfig, TXCMetalRenderTargetView, TXCMetalRenderer, TXCRenderFrameCoords, TXCVideoRenderConfig, UIView;
@protocol MTLTexture, OS_dispatch_semaphore, TXILocalVideoRendererDelegate;

@interface TXCMetalVideoRenderer
{
    id <MTLTexture> _rgbTexture;
    atomic_d5d55d14 _mainThreadTaskCount;
    struct shared_ptr<liteav::video::NativePixelFrame> _pbFrame;
    NSObject<OS_dispatch_semaphore> *_inflate_semaphore;
    _Bool _requestClearView;
    id <TXILocalVideoRendererDelegate> rendererDelegate;
    TXCDispatchQueue *_queue;
    TXCMetalContext *_mtlContext;
    TXCVideoRenderConfig *_config;
    TXCMetalDisplayConfig *_displayConfig;
    TXCMetalRenderer *_render;
    TXCMetalRenderTargetView *_renderTarget;
    TXCRenderFrameCoords *_renderCoords;
    TXCGSensor *_gSensor;
    UIView *_superView;
    TXCMTKView *_renderView;
    unsigned long long _fillMode;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool requestClearView; // @synthesize requestClearView=_requestClearView;
@property(nonatomic) unsigned long long fillMode; // @synthesize fillMode=_fillMode;
@property(retain) TXCMTKView *renderView; // @synthesize renderView=_renderView;
@property(nonatomic) __weak UIView *superView; // @synthesize superView=_superView;
@property(retain, nonatomic) TXCGSensor *gSensor; // @synthesize gSensor=_gSensor;
@property(retain, nonatomic) TXCRenderFrameCoords *renderCoords; // @synthesize renderCoords=_renderCoords;
@property(retain, nonatomic) TXCMetalRenderTargetView *renderTarget; // @synthesize renderTarget=_renderTarget;
@property(retain, nonatomic) TXCMetalRenderer *render; // @synthesize render=_render;
@property(retain, nonatomic) TXCMetalDisplayConfig *displayConfig; // @synthesize displayConfig=_displayConfig;
@property(readonly, nonatomic) TXCVideoRenderConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) TXCMetalContext *mtlContext; // @synthesize mtlContext=_mtlContext;
@property(readonly, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <TXILocalVideoRendererDelegate> rendererDelegate; // @synthesize rendererDelegate;
- (void)drawInTXCMTKView:(id)arg1;
- (struct CGRect)renderRect;
- (void)showFocusViewAtPoint:(struct CGPoint)arg1;
- (id)convertPointToVideoFrame:(struct CGPoint)arg1 isFrontCamera:(_Bool)arg2;
- (void)snapshotOnComplete:(CDUnknownBlockType)arg1;
- (void)updateDisplayConfigFromMetaData:(shared_ptr_1255c1d2)arg1;
- (id)getDisplayConfigFromMetaData:(const void *)arg1;
- (_Bool)isBT2020Supported;
- (void)setGSensorMode:(unsigned long long)arg1 homeOrientation:(int)arg2;
- (void)setBackgroundColor:(unsigned int)arg1;
- (void)setRotation:(unsigned long long)arg1;
- (void)setMirrorMode:(unsigned long long)arg1;
- (void)clearScreen;
- (void)clearRenderTask;
- (void)stop:(_Bool)arg1;
- (void)start;
- (void)updateMetalDrawableSize;
- (_Bool)waitMainThreadTaskFinishIfNeed;
- (void)updateRenderView:(id)arg1;
- (void)processVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)applyConfigs;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 config:(id)arg2 view:(id)arg3;
- (id)initWithQueue:(id)arg1 context:(id)arg2 config:(id)arg3 view:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TXCDispatchQueue, TXCDroppableDispatcher, TXCGSensor, TXCVideoRenderConfig, UIView;
@protocol TXILocalVideoRenderer, TXILocalVideoRendererDelegate;

@interface TXCVideoRendererWrapper
{
    id <TXILocalVideoRendererDelegate> rendererDelegate;
    TXCGSensor *gSensor;
    TXCDispatchQueue *_queue;
    TXCVideoRenderConfig *_config;
    UIView *_superView;
    id <TXILocalVideoRenderer> _renderer;
    TXCDroppableDispatcher *_dispatcher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TXCDroppableDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain) id <TXILocalVideoRenderer> renderer; // @synthesize renderer=_renderer;
@property(nonatomic) __weak UIView *superView; // @synthesize superView=_superView;
@property(readonly, nonatomic) TXCVideoRenderConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) TXCGSensor *gSensor; // @synthesize gSensor;
@property(nonatomic) __weak id <TXILocalVideoRendererDelegate> rendererDelegate; // @synthesize rendererDelegate;
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
- (void)drawVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)processVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)recreateRendererIfNeeded:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 config:(id)arg2 view:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


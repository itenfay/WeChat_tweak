//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TXCDispatchQueue, TXCDisplayLayerView, TXCGSensor, TXCVideoRenderConfig, UIView;
@protocol TXILocalVideoRendererDelegate;

@interface TXCDisplayLayerVideoRenderer
{
    atomic_d5d55d14 _mainThreadTaskCount;
    id <TXILocalVideoRendererDelegate> rendererDelegate;
    TXCDispatchQueue *_queue;
    TXCVideoRenderConfig *_config;
    TXCGSensor *_gSensor;
    UIView *_superView;
    TXCDisplayLayerView *_renderView;
    unsigned long long _fillMode;
    unsigned long long _renderRotation;
}

+ (_Bool)IsHdrSupported:(int)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long renderRotation; // @synthesize renderRotation=_renderRotation;
@property(nonatomic) unsigned long long fillMode; // @synthesize fillMode=_fillMode;
@property(retain) TXCDisplayLayerView *renderView; // @synthesize renderView=_renderView;
@property(nonatomic) __weak UIView *superView; // @synthesize superView=_superView;
@property(retain, nonatomic) TXCGSensor *gSensor; // @synthesize gSensor=_gSensor;
@property(readonly, nonatomic) TXCVideoRenderConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <TXILocalVideoRendererDelegate> rendererDelegate; // @synthesize rendererDelegate;
- (struct CGRect)renderRect;
- (void)showFocusViewAtPoint:(struct CGPoint)arg1;
- (id)convertPointToVideoFrame:(struct CGPoint)arg1 isFrontCamera:(_Bool)arg2;
- (void)snapshotOnComplete:(CDUnknownBlockType)arg1;
- (void)setGSensorMode:(unsigned long long)arg1 homeOrientation:(int)arg2;
- (void)setBackgroundColor:(unsigned int)arg1;
- (void)setRotation:(unsigned long long)arg1;
- (void)setMirrorMode:(unsigned long long)arg1;
- (void)clearScreen;
- (void)clearRenderTask;
- (void)stop:(_Bool)arg1;
- (void)start;
- (_Bool)waitMainThreadTaskFinishIfNeed;
- (void)updateRenderView:(id)arg1;
- (void)processVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)applyConfigs;
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


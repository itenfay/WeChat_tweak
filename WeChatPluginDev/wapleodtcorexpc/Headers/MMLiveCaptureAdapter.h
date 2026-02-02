//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveManger, NSString;
@protocol MMLiveCaptureAdapterDelegate;

@interface MMLiveCaptureAdapter : NSObject
{
    id <MMLiveCaptureAdapterDelegate> _captureDelegate;
    MMLiveManger *_liveCapture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveManger *liveCapture; // @synthesize liveCapture=_liveCapture;
@property(nonatomic) __weak id <MMLiveCaptureAdapterDelegate> captureDelegate; // @synthesize captureDelegate=_captureDelegate;
- (void)liveManager:(id)arg1 didRenderRotateTransitingChanged:(_Bool)arg2;
- (void)liveManager:(id)arg1 didChangedVirtualCameraCaptureDevice:(_Bool)arg2;
- (void)liveManager:(id)arg1 didCapturingChanged:(_Bool)arg2;
- (void)liveManager:(id)arg1 didOutputRenderFrame:(id)arg2;
- (void)liveManager:(id)arg1 didOutputSampleBufferForTransmit:(struct opaqueCMSampleBuffer *)arg2 localRenderFlipX:(_Bool)arg3;
- (void)liveManager:(id)arg1 didOutputSampleBufferForRender:(struct opaqueCMSampleBuffer *)arg2 localRenderFlipX:(_Bool)arg3;
- (void)liveManager:(id)arg1 didFinishCollectingCaptureMetrics:(id)arg2;
- (void)liveManager:(id)arg1 didPushVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 shouldReportCaptureMetrics:(_Bool)arg3;
- (void)stopCustomRender;
- (void)startCustomRender;
- (id)getLiveCaptureVideoFrameWidgetManageLogic;
- (void)updateFocusAtPoint:(struct CGPoint)arg1;
- (void)updateZoomScaleWithGestureScale:(double)arg1;
- (void)refreshViewCaptureConfigurations;
- (void)resumeViewCapture;
- (void)pauseViewCapture;
- (void)stopViewCapture;
- (void)startViewCaptureWithView:(id)arg1;
- (void)setCustomCameraConfigs:(id)arg1;
- (void)setCameraPreviewOrientation:(long long)arg1;
- (void)setEnableZoom:(_Bool)arg1;
- (void)ignoreDarkFramesOnceAfterSettingConfiguration;
- (void)setRemoteMirror:(_Bool)arg1 isFront:(_Bool)arg2;
- (void)setMirror:(_Bool)arg1 isFront:(_Bool)arg2;
- (void)setRotation:(int)arg1;
- (struct CGSize)getCaptureVideoSize;
- (void)setVideoResolution1920x1440;
- (void)setVideoResolution:(long long)arg1;
- (void)setFaceDetect:(_Bool)arg1;
- (void)setFront:(_Bool)arg1;
- (void)setMaxRenderFrameRate:(int)arg1;
- (void)setFrameRate:(int)arg1;
- (void)switchCameraWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)switchCamera;
- (void)stopCameraCapture;
- (void)startCameraCaptureWithContainerView:(id)arg1 useFrontCamera:(_Bool)arg2;
- (void)startCameraCaptureWithContainerView:(id)arg1;
- (void)initLiveCaptureDelegatesAndEffectManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


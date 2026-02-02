//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, TXCDispatchQueue, TXCVTExternalConfig, TXCVideoBindableParallelGroup, TXCVideoCaptureConfig, TXCVideoCaptureReport, TXCVideoPreprocessController, TXCVideoRenderConfig, TXCVideoRenderReport, TXCVideoResultHandler, TXCVideoStreamSnapshot;
@protocol TXIGlContext, TXILocalVideoRenderer, TXIVideoCaptureInterface, TXIVideoProducerDelegate, TXIVideoRenderer;

@interface TXCVideoProducer : NSObject
{
    _Bool _isPausing;
    _Bool _isTranscodingMode;
    int _producerMode;
    id <TXIVideoProducerDelegate> _delegate;
    NSString *_tag;
    id <TXIVideoCaptureInterface> _capturer;
    TXCDispatchQueue *_queue;
    id <TXIGlContext> _glContext;
    TXCVideoCaptureReport *_captureReport;
    TXCVideoCaptureConfig *_captureConfig;
    TXCVideoPreprocessController *_preprocessor;
    id <TXILocalVideoRenderer> _localRenderer;
    id <TXIVideoRenderer> _customRenderer;
    TXCVideoRenderConfig *_renderConfig;
    TXCVideoRenderReport *_renderReporter;
    NSMutableDictionary *_encoders;
    TXCVideoBindableParallelGroup *_encoderGroup;
    TXCVideoStreamSnapshot *_streamSnapshot;
    TXCVideoResultHandler *_resultHandler;
    TXCVTExternalConfig *_vtExternalConfig;
}

+ (struct EncodeAbility)encodeAbility;
- (void).cxx_destruct;
@property(retain, nonatomic) TXCVTExternalConfig *vtExternalConfig; // @synthesize vtExternalConfig=_vtExternalConfig;
@property(nonatomic) int producerMode; // @synthesize producerMode=_producerMode;
@property(readonly, nonatomic) TXCVideoResultHandler *resultHandler; // @synthesize resultHandler=_resultHandler;
@property(retain, nonatomic) TXCVideoStreamSnapshot *streamSnapshot; // @synthesize streamSnapshot=_streamSnapshot;
@property(retain, nonatomic) TXCVideoBindableParallelGroup *encoderGroup; // @synthesize encoderGroup=_encoderGroup;
@property(readonly, nonatomic) NSMutableDictionary *encoders; // @synthesize encoders=_encoders;
@property(readonly, nonatomic) TXCVideoRenderReport *renderReporter; // @synthesize renderReporter=_renderReporter;
@property(readonly, nonatomic) TXCVideoRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
@property(retain, nonatomic) id <TXIVideoRenderer> customRenderer; // @synthesize customRenderer=_customRenderer;
@property(retain, nonatomic) id <TXILocalVideoRenderer> localRenderer; // @synthesize localRenderer=_localRenderer;
@property(readonly, nonatomic) TXCVideoPreprocessController *preprocessor; // @synthesize preprocessor=_preprocessor;
@property(nonatomic) _Bool isTranscodingMode; // @synthesize isTranscodingMode=_isTranscodingMode;
@property(nonatomic) _Bool isPausing; // @synthesize isPausing=_isPausing;
@property(readonly, nonatomic) TXCVideoCaptureConfig *captureConfig; // @synthesize captureConfig=_captureConfig;
@property(readonly, nonatomic) TXCVideoCaptureReport *captureReport; // @synthesize captureReport=_captureReport;
@property(retain, nonatomic) id <TXIGlContext> glContext; // @synthesize glContext=_glContext;
@property(retain, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
@property(retain) id <TXIVideoCaptureInterface> capturer; // @synthesize capturer=_capturer;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property __weak id <TXIVideoProducerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyPreprocessCost:(unsigned long long)arg1;
- (void)videoRenderer:(id)arg1 onPinchScale:(double)arg2;
- (void)videoRenderer:(id)arg1 onTouchPoint:(struct CGPoint)arg2;
- (void)onEncodeFrame:(id)arg1 forStreamType:(int)arg2 isFirst:(_Bool)arg3;
- (void)encodeController:(id)arg1 onEncoderTypeChanged:(int)arg2 onCodecTypeChanged:(int)arg3 streamType:(int)arg4 encoderFeatures:(unsigned long long)arg5;
- (void)encodeController:(id)arg1 needsInputFormat:(unsigned long long)arg2;
- (void)onRenderFrame:(id)arg1 isFirst:(_Bool)arg2;
- (void)setRoiConfig:(const void *)arg1;
- (void)enableRoiEncoding:(_Bool)arg1;
- (void)onScreenSizeChange:(struct CGSize)arg1;
- (void)onCapturerDidResume;
- (void)onCapturerDidPause;
- (void)onCapturerDidStop;
- (void)onCapturerDidStart;
- (void)onCameraInterruptionEnd;
- (void)onCameraInterrupted:(long long)arg1;
- (void)onCameraStateChanged:(id)arg1 isConnected:(_Bool)arg2;
- (void)onCaptureFrame:(id)arg1;
- (void)onCaptureFirstFrame;
- (void)resultHandler:(id)arg1 didProcessVideoFrame:(id)arg2;
- (void)resultHandler:(id)arg1 onError:(id)arg2;
- (void)onAppBecomeActive;
- (void)onAppResignActive;
- (void)observeAppState;
- (void)notifyEncodeParamsChanged:(int)arg1;
- (void)updateCameraCaptureResolution:(struct CGSize)arg1;
- (void)updateEncodeResolution:(inout void *)arg1 forStreamType:(int)arg2;
- (void)logApi:(id)arg1;
- (id)identifierForType:(unsigned long long)arg1;
- (void)setupStreamLine;
- (void)setAppGroupId:(id)arg1;
- (void)createStreamSnapshotIfNeeded;
- (void)snapshotFromSource:(unsigned long long)arg1 onComplete:(CDUnknownBlockType)arg2;
- (id)encoderForStream:(int)arg1;
- (void)setRPSRefBitmap:(long long)arg1 bitmap:(unsigned short)arg2 forStream:(int)arg3;
- (void)requestKeyFrameForStream:(int)arg1;
- (void)enableNearestRps:(long long)arg1 forStream:(int)arg2;
- (void)setRpsIdrFrameRate:(long long)arg1 forStream:(int)arg2;
- (void)setHomeOrientation:(int)arg1;
- (void)setGSensorMode:(unsigned long long)arg1;
- (void)setEncodeRotation:(unsigned long long)arg1;
- (void)enableEncodeMirror:(_Bool)arg1;
- (void)setEncodeStrategy:(int)arg1 forStream:(int)arg2;
- (void)enableTranscodingMode:(_Bool)arg1;
- (void)setEncodeParams:(const void *)arg1 forStream:(int)arg2;
- (void)stopEncodeForStream:(int)arg1;
- (void)startEncodeForStream:(int)arg1;
- (void)setRenderRotation:(unsigned long long)arg1;
- (void)setRenderMirrorMode:(unsigned long long)arg1;
- (void)setRenderFillMode:(unsigned long long)arg1;
- (void)setCustomRender:(id)arg1 pixelFormat:(unsigned long long)arg2 bufferType:(unsigned long long)arg3;
- (void)setLocalRenderView:(id)arg1;
- (void)setCustomPreprocess:(id)arg1 pixelFormat:(unsigned long long)arg2 bufferType:(unsigned long long)arg3;
- (void)getPreprocessor:(CDUnknownBlockType)arg1;
- (_Bool)isScreenCapture;
- (void)setCameraFocusPosition:(struct CGPoint)arg1;
- (void)getVirtualCapturer:(CDUnknownBlockType)arg1;
- (void)getCustomCapturer:(CDUnknownBlockType)arg1;
- (void)getCameraCapturer:(CDUnknownBlockType)arg1;
- (void)getCapturer:(CDUnknownBlockType)arg1;
- (id)currentCameraDevice;
- (void)setVTEncodeParams:(id)arg1;
- (void)selectCameraDevice:(id)arg1;
- (void)setCaptureFramerate:(long long)arg1;
- (void)resumeCapture;
- (void)pauseCapture;
- (void)stopCapture;
- (_Bool)startCapture:(unsigned long long)arg1;
- (void)setup;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


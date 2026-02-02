//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TXCDispatchQueue, TXCVideoCaptureConfig;

@interface TXCDummyCapturer : NSObject
{
    _Bool isRunning;
    unsigned long long captureType;
    TXCDispatchQueue *_queue;
    TXCVideoCaptureConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TXCVideoCaptureConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
@property(readonly) _Bool isRunning; // @synthesize isRunning;
@property(readonly, nonatomic) unsigned long long captureType; // @synthesize captureType;
- (void)sendVideoFrame:(id)arg1;
- (void)setStillImage:(id)arg1;
- (void)enableZoom:(_Bool)arg1;
- (void)setExposureTargetBias:(float)arg1;
- (_Bool)isFaceDetectEnabled;
- (void)setTorchOn:(_Bool)arg1;
- (_Bool)isTorchSupported;
- (void)setFocusPosition:(struct CGPoint)arg1;
- (void)enablesFaceDetect:(_Bool)arg1;
- (_Bool)isAutoFocusSupported;
- (void)setZoomScale:(double)arg1 multiplyByZoomfactor:(_Bool)arg2;
- (double)zoomMaxRatio;
- (_Bool)isZoomSupported;
- (void)setFront:(_Bool)arg1;
- (_Bool)isFrontCamera;
- (void)setCaptureResolution:(struct CGSize)arg1;
- (void)setFrameRate:(long long)arg1;
- (void)applyConfigs:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithQueue:(id)arg1 config:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


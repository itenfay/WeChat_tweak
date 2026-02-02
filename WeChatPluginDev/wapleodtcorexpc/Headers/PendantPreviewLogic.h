//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAssetWriterInput, AVCaptureConnection, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, EmoticonLensPackage, NSRecursiveLock, NSString, XEffectEffectManager;
@protocol OS_dispatch_queue, PendantPreviewLogicDelegate;

@interface PendantPreviewLogic : NSObject
{
    _Bool _isFrontCamera;
    _Bool _dropFirstFrame;
    _Bool _reloadEffectFinish;
    id <PendantPreviewLogicDelegate> _delegate;
    NSString *_url;
    AVCaptureDeviceInput *_deviceInput;
    AVAssetWriterInput *_assetWriterInput;
    AVCaptureVideoDataOutput *_dataOutput;
    AVCaptureSession *_session;
    AVCaptureDevice *_videoDevice;
    AVCaptureConnection *_videoConnection;
    NSObject<OS_dispatch_queue> *_bufferQueue;
    XEffectEffectManager *_effectManager;
    EmoticonLensPackage *_lensPackage;
    NSRecursiveLock *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) EmoticonLensPackage *lensPackage; // @synthesize lensPackage=_lensPackage;
@property(nonatomic) _Bool reloadEffectFinish; // @synthesize reloadEffectFinish=_reloadEffectFinish;
@property(retain, nonatomic) XEffectEffectManager *effectManager; // @synthesize effectManager=_effectManager;
@property(nonatomic) _Bool dropFirstFrame; // @synthesize dropFirstFrame=_dropFirstFrame;
@property(nonatomic) _Bool isFrontCamera; // @synthesize isFrontCamera=_isFrontCamera;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *bufferQueue; // @synthesize bufferQueue=_bufferQueue;
@property(retain, nonatomic) AVCaptureConnection *videoConnection; // @synthesize videoConnection=_videoConnection;
@property(retain, nonatomic) AVCaptureDevice *videoDevice; // @synthesize videoDevice=_videoDevice;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(retain, nonatomic) AVCaptureVideoDataOutput *dataOutput; // @synthesize dataOutput=_dataOutput;
@property(retain, nonatomic) AVAssetWriterInput *assetWriterInput; // @synthesize assetWriterInput=_assetWriterInput;
@property(retain, nonatomic) AVCaptureDeviceInput *deviceInput; // @synthesize deviceInput=_deviceInput;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) __weak id <PendantPreviewLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getCaptureImage;
- (void)applyPendantEffect:(id)arg1;
- (void)clearAll;
- (id)previewLayer;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)setFPS:(long long)arg1;
- (_Bool)switchCameraToPosition:(long long)arg1;
- (id)deviceWithPosition:(long long)arg1;
- (void)switchCamera;
- (void)stopCamera;
- (void)startCamera;
- (void)OnCdnDownload:(id)arg1;
- (id)downloadPathForURLString:(id)arg1;
- (id)cachePathForURLString:(id)arg1;
- (void)loadPendantResourceWithURL:(id)arg1;
- (void)changePreviewType:(long long)arg1;
- (void)resetEffectManager;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


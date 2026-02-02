//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVCaptureConnection, AVCaptureSession, AVCaptureVideoPreviewLayer, NSString, UIView;

@interface CvAbstractCamera : NSObject
{
    AVCaptureSession *captureSession;
    AVCaptureConnection *videoCaptureConnection;
    AVCaptureVideoPreviewLayer *captureVideoPreviewLayer;
    long long currentDeviceOrientation;
    _Bool cameraAvailable;
    _Bool captureSessionLoaded;
    _Bool running;
    _Bool useAVCaptureVideoPreviewLayer;
    long long defaultAVCaptureDevicePosition;
    long long defaultAVCaptureVideoOrientation;
    NSString *defaultAVCaptureSessionPreset;
    int defaultFPS;
    UIView *parentView;
    int imageWidth;
    int imageHeight;
}

@property(retain, nonatomic) UIView *parentView; // @synthesize parentView;
@property(nonatomic) _Bool useAVCaptureVideoPreviewLayer; // @synthesize useAVCaptureVideoPreviewLayer;
@property(readonly, nonatomic) _Bool captureSessionLoaded; // @synthesize captureSessionLoaded;
@property(readonly, nonatomic) _Bool running; // @synthesize running;
@property(retain, nonatomic) AVCaptureConnection *videoCaptureConnection; // @synthesize videoCaptureConnection;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer; // @synthesize captureVideoPreviewLayer;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession;
@property(retain, nonatomic) NSString *defaultAVCaptureSessionPreset; // @synthesize defaultAVCaptureSessionPreset;
@property(nonatomic) long long defaultAVCaptureVideoOrientation; // @synthesize defaultAVCaptureVideoOrientation;
@property(nonatomic) long long defaultAVCaptureDevicePosition; // @synthesize defaultAVCaptureDevicePosition;
@property(nonatomic) int defaultFPS; // @synthesize defaultFPS;
@property(nonatomic) int imageHeight; // @synthesize imageHeight;
@property(nonatomic) int imageWidth; // @synthesize imageWidth;
- (void)unlockBalance;
- (void)lockBalance;
- (void)unlockExposure;
- (void)lockExposure;
- (void)unlockFocus;
- (void)lockFocus;
- (void)updateSize;
- (void)updateOrientation;
- (void)createCustomVideoPreview;
- (void)createCaptureOutput;
- (void)startCaptureSession;
- (void)setDesiredCameraPosition:(long long)arg1;
- (void)createVideoPreviewLayer;
- (void)createCaptureDevice;
- (void)createCaptureSession;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)switchCameras;
- (void)stop;
- (void)pause;
- (void)start;
- (void)dealloc;
- (id)initWithParentView:(id)arg1;
- (id)init;

@end


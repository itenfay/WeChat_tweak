//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CameraRecordDevice, NSString, NSTimer, NSURLSessionDataTask, UIButton, UIImage, UIImageView, UILabel, UIView, YtFLCircleProgressView;

@interface YtOcrViewController
{
    UIView *cameraView;
    UILabel *promptLabel;
    UIButton *flashButton;
    UIButton *takePhotoButton;
    UIImageView *promptImageView;
    UIImage *failedImage;
    UIImage *succeedImage;
    UIImage *notdetectImage;
    CameraRecordDevice *device;
    int currentCameraFlashMode;
    NSTimer *countDownTimer;
    double currentCountDownProgress;
    NSURLSessionDataTask *dataTask;
    _Bool needTakePhoto;
    _Bool _isManualMode;
    YtFLCircleProgressView *timeoutProgressView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isManualMode; // @synthesize isManualMode=_isManualMode;
@property(nonatomic) _Bool needTakePhoto; // @synthesize needTakePhoto;
@property(retain, nonatomic) YtFLCircleProgressView *timeoutProgressView; // @synthesize timeoutProgressView;
- (void)onCountDownTick:(id)arg1;
- (void)handleNetworkRequest:(id)arg1 withRequest:(id)arg2 withHeaders:(id)arg3 withResponse:(CDUnknownBlockType)arg4;
- (void)receiveUIEvent:(id)arg1;
- (void)receiveStateEvent:(id)arg1;
- (void)handleTakePhotoEvent:(id)arg1;
- (void)handleFlashChangeEvent:(id)arg1;
- (void)handleCameraChangeEvent:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)cameraDeviceEvent:(int)arg1 withAguments:(id)arg2;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


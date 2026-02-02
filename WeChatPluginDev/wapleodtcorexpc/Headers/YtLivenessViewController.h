//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CameraRecordDevice, NSMutableParagraphStyle, NSString, NSTimer, NSURLSessionDataTask, UIButton, UIImageView, UILabel, UITextView, UIView, YtFLCircleProgressView;

@interface YtLivenessViewController
{
    UIView *contentView;
    UIView *shapeView;
    UIImageView *backVieYTg;
    UIImageView *backView;
    UIImageView *faceRangeView;
    UITextView *tipsLabel;
    UITextView *lipReadLabel;
    UIButton *startLeapReadBtn;
    NSMutableParagraphStyle *paragraphStyle;
    CameraRecordDevice *device;
    double recordBrightness;
    NSTimer *countDownTimer;
    double currentCountDownProgress;
    int maxRetryCount;
    int retryCount;
    _Bool isManualTrigger;
    _Bool showLipReadUI;
    NSTimer *showLipReadUITimer;
    NSURLSessionDataTask *dataTask;
    _Bool isNeedReuqestLog;
    _Bool _isCheckedNoFace;
    float _lux;
    UILabel *_lux_label;
    NSString *_mRgbConfig;
    long long _workMode;
    YtFLCircleProgressView *_circleProgressView;
    YtFLCircleProgressView *_timeoutProgressView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YtFLCircleProgressView *timeoutProgressView; // @synthesize timeoutProgressView=_timeoutProgressView;
@property(retain, nonatomic) YtFLCircleProgressView *circleProgressView; // @synthesize circleProgressView=_circleProgressView;
@property(nonatomic) long long workMode; // @synthesize workMode=_workMode;
@property(nonatomic) float lux; // @synthesize lux=_lux;
@property(retain, nonatomic) NSString *mRgbConfig; // @synthesize mRgbConfig=_mRgbConfig;
@property(nonatomic) _Bool isCheckedNoFace; // @synthesize isCheckedNoFace=_isCheckedNoFace;
@property(nonatomic) __weak UILabel *lux_label; // @synthesize lux_label=_lux_label;
- (id)encodeBase64:(id)arg1;
- (id)getVoiceData;
- (void)onReflectStart:(long long)arg1;
- (void)onReflectEventWithArgb:(unsigned int)arg1 withLight:(double)arg2;
- (id)getCaptureSession;
- (id)getCaptureDevice;
- (void)handleNetworkRequest:(id)arg1 withHeaders:(id)arg2 withRequest:(id)arg3 withResponse:(CDUnknownBlockType)arg4;
- (id)colorWithHex:(unsigned int)arg1;
- (void)cameraDeviceEvent:(int)arg1 withAguments:(id)arg2;
- (void)onCountDownTick:(id)arg1;
- (void)setTips:(id)arg1;
- (void)startLipRead;
- (void)onLipReadUIChanged:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)receiveUIEvent:(id)arg1;
- (void)receiveStateEvent:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithWorkMode:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVCaptureDevice, AVCaptureSession, AVCaptureVideoPreviewLayer, MMTimer, MMUILabel, NSMutableArray, NSObject, NSRecursiveLock, NSString, ScanCardBackgroundViewV2, UIButton, UIImage, WCPayCardNumberScanForeView;
@protocol WCPayCardNumberScanDelegate;

@interface WCPayCardNumberScanViewController
{
    ScanCardBackgroundViewV2 *m_backgroundView;
    WCPayCardNumberScanForeView *m_foreView;
    _Bool shouldStopCapture;
    _Bool _didHandledRotate;
    _Bool _didSetupUI;
    UIImage *colorImage;
    NSString *resultCardId;
    unsigned long long m_timeStart;
    _Bool m_success;
    NSObject *m_timeoutAlert;
    char *best_img_data;
    struct FastFocusEngie ffengine;
    _Bool _useHttp;
    _Bool _m_engineStart;
    _Bool _bShouldCheckLowLight;
    _Bool _bIsLowLight;
    _Bool _bIsLightBoostOn;
    _Bool _didSetupEngine;
    unsigned int _seqNum;
    unsigned int _source;
    float _compareBrightness;
    unsigned int _beepSound;
    NSString *_username;
    NSString *_certPem;
    NSString *_baseRequest;
    id <WCPayCardNumberScanDelegate> _delegate;
    AVCaptureSession *_captureSession;
    AVCaptureVideoPreviewLayer *_prevLayer;
    NSRecursiveLock *_m_engineLock;
    AVCaptureDevice *_captureDevice;
    NSMutableArray *_scanTaskArray;
    unsigned long long _lastScanTaskTime;
    NSString *_sessionKey;
    unsigned long long _currentFrameCount;
    NSString *_scanResult;
    UIButton *_closeButton;
    MMTimer *_lowLightCheckTimer;
    UIButton *_torchButton;
    MMUILabel *_torchLabel;
}

+ (id)convertBitmapRGBA8ToUIImage:(char *)arg1 withWidth:(int)arg2 withHeight:(int)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool didSetupEngine; // @synthesize didSetupEngine=_didSetupEngine;
@property(nonatomic) unsigned int beepSound; // @synthesize beepSound=_beepSound;
@property(retain, nonatomic) MMUILabel *torchLabel; // @synthesize torchLabel=_torchLabel;
@property(retain, nonatomic) UIButton *torchButton; // @synthesize torchButton=_torchButton;
@property(retain, nonatomic) MMTimer *lowLightCheckTimer; // @synthesize lowLightCheckTimer=_lowLightCheckTimer;
@property(nonatomic) _Bool bIsLightBoostOn; // @synthesize bIsLightBoostOn=_bIsLightBoostOn;
@property(nonatomic) _Bool bIsLowLight; // @synthesize bIsLowLight=_bIsLowLight;
@property(nonatomic) _Bool bShouldCheckLowLight; // @synthesize bShouldCheckLowLight=_bShouldCheckLowLight;
@property(nonatomic) float compareBrightness; // @synthesize compareBrightness=_compareBrightness;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) NSString *scanResult; // @synthesize scanResult=_scanResult;
@property unsigned long long currentFrameCount; // @synthesize currentFrameCount=_currentFrameCount;
@property unsigned int source; // @synthesize source=_source;
@property unsigned int seqNum; // @synthesize seqNum=_seqNum;
@property(retain) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property unsigned long long lastScanTaskTime; // @synthesize lastScanTaskTime=_lastScanTaskTime;
@property(retain) NSMutableArray *scanTaskArray; // @synthesize scanTaskArray=_scanTaskArray;
@property(nonatomic) _Bool m_engineStart; // @synthesize m_engineStart=_m_engineStart;
@property(retain, nonatomic) AVCaptureDevice *captureDevice; // @synthesize captureDevice=_captureDevice;
@property(retain, nonatomic) NSRecursiveLock *m_engineLock; // @synthesize m_engineLock=_m_engineLock;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *prevLayer; // @synthesize prevLayer=_prevLayer;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) __weak id <WCPayCardNumberScanDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *baseRequest; // @synthesize baseRequest=_baseRequest;
@property(retain, nonatomic) NSString *certPem; // @synthesize certPem=_certPem;
@property(nonatomic) _Bool useHttp; // @synthesize useHttp=_useHttp;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void)doHideTorchButton;
- (void)tryHideTorchButton;
- (void)setLightBoostOn:(_Bool)arg1;
- (void)onTorchButtonClicked:(id)arg1;
- (void)updateTorchButtonFrame;
- (void)showTorchButton;
- (void)lowLightStatusChanged:(_Bool)arg1;
- (void)onTimerCheckLowLight;
- (void)stopTimerCheckLowLight;
- (void)startTimerCheckLowLight;
- (void)kvReport:(unsigned long long)arg1;
- (void)onWCPayScanCardNumberHttp:(id)arg1 errorMsg:(id)arg2;
- (void)onWCPayScanCardNumberHttp:(id)arg1 cardNumber:(id)arg2 scanResult:(id)arg3;
- (void)onWCPayCardNumberScanTaskV2:(id)arg1 errorMsg:(id)arg2;
- (void)onWCPayCardNumberScanTaskV2:(id)arg1 cardNumber:(id)arg2 seqNum:(unsigned int)arg3 leftTop:(struct CGPoint)arg4 rightTop:(struct CGPoint)arg5 rightBottom:(struct CGPoint)arg6 leftBottom:(struct CGPoint)arg7 scanResult:(id)arg8;
- (void)setBarViewToInvisible:(id)arg1;
- (void)handleVisible:(_Bool)arg1 forView:(id)arg2;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (struct __CVBuffer *)pixelBufferFromCGImage:(struct CGImage *)arg1;
- (id)screenshotOfVideoStream:(struct __CVBuffer *)arg1;
- (struct CGRect)serverRecogFrameFromWidth:(double)arg1 Height:(double)arg2;
- (_Bool)useHighResolution;
- (void)finalizeCapture;
- (void)continuousAutoFocus:(struct CGPoint)arg1;
- (_Bool)addOutput:(id)arg1;
- (void)stopCapture;
- (void)startCapture;
- (void)printVersion;
- (struct CGRect)viewBounds;
- (void)backAction:(id)arg1;
- (void)personTipsAction:(id)arg1;
- (void)enterForeground;
- (void)enterBackground;
- (void)setupCloseButton;
- (void)setupUI;
- (void)setGreenBarView;
- (void)realSetupEngine;
- (void)setupEngine;
- (void)stopEngine;
- (float)getRotateRadius:(long long)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)goonScan;
- (void)manualInput;
- (void)showTimeOutAlert;
- (void)startTimeout;
- (void)dealloc;
- (id)startEngineLock;
- (_Bool)useTransparentNavibar;
- (void)setupData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


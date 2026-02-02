//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVCaptureSession, AVCaptureVideoPreviewLayer, MMUILabel, NSMutableArray, NSString, ScanLicenceBackgroundView, SequenceAnimationObject, UIImageView, UILabel, UIView;
@protocol MMDetectIDCardViewControllerDelegate;

@interface MMDetectIDCardViewController
{
    struct MyImage *origImg;
    struct MyImage *grayImg;
    int _edgeTh;
    _Bool _didHandledRotate;
    _Bool _didSetupUI;
    int _cutImgVScreenHeight;
    int _cutImgVScreenWidth;
    unsigned int _frameCount;
    id <MMDetectIDCardViewControllerDelegate> _delegate;
    AVCaptureSession *_captureSession;
    AVCaptureVideoPreviewLayer *_previewLayer;
    ScanLicenceBackgroundView *_backgroundView;
    MMUILabel *_tipsLabel;
    UIView *_containerView;
    UIView *_scanStatusView;
    UIImageView *_scanStatusIcon;
    UILabel *_scanStatusLabel;
    NSString *_scanStatus;
    long long _edgeFailedCount;
    long long _stableFailedCount;
    NSMutableArray *_frameStatusArray;
    SequenceAnimationObject *_animateObject;
    UIView *_topBarView;
    UIView *_bottomBarView;
    UIView *_leftBarView;
    UIView *_rightBarView;
    unsigned long long _startTime;
    unsigned long long _authScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long authScene; // @synthesize authScene=_authScene;
@property(nonatomic) unsigned int frameCount; // @synthesize frameCount=_frameCount;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int cutImgVScreenWidth; // @synthesize cutImgVScreenWidth=_cutImgVScreenWidth;
@property(nonatomic) int cutImgVScreenHeight; // @synthesize cutImgVScreenHeight=_cutImgVScreenHeight;
@property(retain, nonatomic) UIView *rightBarView; // @synthesize rightBarView=_rightBarView;
@property(retain, nonatomic) UIView *leftBarView; // @synthesize leftBarView=_leftBarView;
@property(retain, nonatomic) UIView *bottomBarView; // @synthesize bottomBarView=_bottomBarView;
@property(retain, nonatomic) UIView *topBarView; // @synthesize topBarView=_topBarView;
@property(retain, nonatomic) SequenceAnimationObject *animateObject; // @synthesize animateObject=_animateObject;
@property(retain, nonatomic) NSMutableArray *frameStatusArray; // @synthesize frameStatusArray=_frameStatusArray;
@property(nonatomic) long long stableFailedCount; // @synthesize stableFailedCount=_stableFailedCount;
@property(nonatomic) long long edgeFailedCount; // @synthesize edgeFailedCount=_edgeFailedCount;
@property(retain, nonatomic) NSString *scanStatus; // @synthesize scanStatus=_scanStatus;
@property(retain, nonatomic) UILabel *scanStatusLabel; // @synthesize scanStatusLabel=_scanStatusLabel;
@property(retain, nonatomic) UIImageView *scanStatusIcon; // @synthesize scanStatusIcon=_scanStatusIcon;
@property(retain, nonatomic) UIView *scanStatusView; // @synthesize scanStatusView=_scanStatusView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) ScanLicenceBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) __weak id <MMDetectIDCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportMode:(unsigned long long)arg1 action:(unsigned long long)arg2;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (_Bool)addOutput:(id)arg1;
- (void)stopCapture;
- (void)startCapture;
- (_Bool)useHighResolution;
- (void)continuousAutoFocus:(struct CGPoint)arg1;
- (void)stopEngine;
- (void)setBarViewToInvisible:(id)arg1;
- (void)handleVisible:(_Bool)arg1 forView:(id)arg2;
- (float)getRotateRadius:(long long)arg1;
- (struct CGRect)viewBounds;
- (void)onReturn;
- (void)setupVideoDataOutput;
- (void)setupImageBuffer;
- (_Bool)setupIDCardEngine;
- (void)setupScanSize;
- (void)setupInput;
- (void)setupEngine;
- (void)setupTipLabel;
- (void)setGreenBarView;
- (void)setupUI;
- (_Bool)useTransparentNavibar;
- (void)viewDidTransitionToNewSize;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)animateScanStatus;
- (void)hideScanStatus;
- (void)updateScanStatusLabel;
- (void)updateScanStatusIcon;
- (void)updateScanStatusView;
- (void)updateContainerView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)updateFrameArray;
- (id)initWithAuthScene:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


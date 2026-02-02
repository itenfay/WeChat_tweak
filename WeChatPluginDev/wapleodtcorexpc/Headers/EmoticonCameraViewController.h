//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVCaptureDevice, AVCaptureSession, AVCaptureVideoDataOutput, EditImageAnimatedEmoticonTool, EditImageAnimatedTextTool, EditImageColor, EmoticonCameraPreviewView, EmoticonCameraReportObject, EmoticonCameraResultView, EmoticonCameraToolBar, EmoticonEmptyEditView, EmoticonLensDesignerView, EmoticonLensDynamicTipView, EmoticonLensDynamicToolView, EmoticonLensInfo, EmoticonLensPackage, MMCircularProgressView, MMSightRecordHelperView, MMSightRecordView, MMUIButton, NSObject, NSString, StreamVoiceInputLogic, UIImageView, UIView, XEffectEffectManager;
@protocol EmoticonCameraDelegate, OS_dispatch_queue;

@interface EmoticonCameraViewController
{
    EmoticonCameraToolBar *m_toolBar;
    MMUIButton *m_hideBarBtn;
    MMUIButton *m_cameraSwitchBtn;
    MMUIButton *m_photoBtn;
    UIImageView *m_audioRecordView;
    MMSightRecordHelperView *m_recordHelperView;
    MMCircularProgressView *m_circleProgress;
    MMSightRecordView *m_recordButtonView;
    EmoticonCameraResultView *m_resultView;
    _Bool m_needFocusCenter;
    double m_lastScaleFactor;
    StreamVoiceInputLogic *m_inputLogic;
    unsigned long long m_currentInputId;
    NSString *m_lastVoiceInputResult;
    UIView *m_maskView;
    UIView *m_frontView;
    EmoticonEmptyEditView *m_editImageView;
    EditImageAnimatedEmoticonTool *m_editImageEmoticonView;
    EditImageAnimatedTextTool *m_editImageTextView;
    EmoticonLensDynamicToolView *m_emoticonLensDynamicToolBar;
    EmoticonLensInfo *m_currentSelectedEmoticonLens;
    EditImageColor *m_defaultCaptionColor;
    _Bool _hasSetEffect;
    _Bool _isGPUFrozen;
    _Bool _enableNewYearPendant;
    id <EmoticonCameraDelegate> _delegate;
    NSString *_followMd5;
    NSString *_followCaption;
    NSString *_followCaptionColor;
    NSString *_followLensId;
    unsigned long long _scene;
    NSString *_username;
    EmoticonCameraReportObject *_reportObject;
    XEffectEffectManager *_effectManager;
    EmoticonCameraPreviewView *_previewView;
    EmoticonLensDesignerView *_designerView;
    EmoticonLensDynamicTipView *_lensActionTipView;
    NSObject<OS_dispatch_queue> *_captureQueue;
    AVCaptureDevice *_cameraDevice;
    AVCaptureSession *_captureSession;
    AVCaptureVideoDataOutput *_videoDataOutput;
    NSString *_caption;
    EditImageColor *_captionColor;
    EmoticonLensPackage *_currLensPackage;
    EmoticonLensInfo *_followLensInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonLensInfo *followLensInfo; // @synthesize followLensInfo=_followLensInfo;
@property(retain, nonatomic) EmoticonLensPackage *currLensPackage; // @synthesize currLensPackage=_currLensPackage;
@property(nonatomic) _Bool enableNewYearPendant; // @synthesize enableNewYearPendant=_enableNewYearPendant;
@property _Bool isGPUFrozen; // @synthesize isGPUFrozen=_isGPUFrozen;
@property(retain, nonatomic) EditImageColor *captionColor; // @synthesize captionColor=_captionColor;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput; // @synthesize videoDataOutput=_videoDataOutput;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(retain, nonatomic) AVCaptureDevice *cameraDevice; // @synthesize cameraDevice=_cameraDevice;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *captureQueue; // @synthesize captureQueue=_captureQueue;
@property(retain, nonatomic) EmoticonLensDynamicTipView *lensActionTipView; // @synthesize lensActionTipView=_lensActionTipView;
@property(retain, nonatomic) EmoticonLensDesignerView *designerView; // @synthesize designerView=_designerView;
@property(retain, nonatomic) EmoticonCameraPreviewView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) XEffectEffectManager *effectManager; // @synthesize effectManager=_effectManager;
@property(nonatomic) _Bool hasSetEffect; // @synthesize hasSetEffect=_hasSetEffect;
@property(retain, nonatomic) EmoticonCameraReportObject *reportObject; // @synthesize reportObject=_reportObject;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *followLensId; // @synthesize followLensId=_followLensId;
@property(retain, nonatomic) NSString *followCaptionColor; // @synthesize followCaptionColor=_followCaptionColor;
@property(retain, nonatomic) NSString *followCaption; // @synthesize followCaption=_followCaption;
@property(retain, nonatomic) NSString *followMd5; // @synthesize followMd5=_followMd5;
@property(nonatomic) __weak id <EmoticonCameraDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportLensExposureWithLensList:(id)arg1 isFromRecommend:(_Bool)arg2;
- (id)getRecommendPassData;
- (id)recordVideoPath;
- (void)onDesignerButtonSelected:(id)arg1;
- (void)onEmoticonLensInvalid:(id)arg1 errType:(long long)arg2;
- (void)onEmoticonLensRequestSuccess:(id)arg1 forLensId:(id)arg2;
- (void)onEmoticonLensPkgDownloadSuccess:(id)arg1;
- (void)onEmoticonLensListRequestSuccess:(id)arg1 isFirstPage:(_Bool)arg2;
- (void)moreLensViewDidExposure:(id)arg1;
- (void)moreLensViewDidShow:(id)arg1;
- (void)moreLensViewWillClose:(id)arg1;
- (void)moreLens:(id)arg1 didSelectLens:(id)arg2 isRecentUsed:(_Bool)arg3;
- (void)onLensDidExposure:(id)arg1;
- (void)doSelectedEmoticonLens:(id)arg1;
- (void)onEmoticonLensShowAll;
- (void)onEmoticonLensSelected:(id)arg1;
- (void)EndInterruption;
- (void)BeginInterruption;
- (void)onMonoServiceDidEnd;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)didPinchEmoticonEmptyEditView:(id)arg1;
- (void)didTapEmoticonEmptyEditView:(id)arg1;
- (struct CGRect)getAssetPreviewFrame;
- (void)editImageViewdidEndDraw;
- (void)editImageViewDidStartDraw;
- (void)adjustEditImageAnimatedWidgetTool:(id)arg1;
- (void)OnVoiceTransEnd:(unsigned int)arg1;
- (void)OnError:(int)arg1 andInputId:(unsigned int)arg2;
- (void)onGetResultText:(id)arg1 andInputId:(unsigned int)arg2;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnEndRecord;
- (void)OnStartRecord;
- (void)onResultViewClickDoneWithUploadInfo:(id)arg1;
- (void)onResultViewClickBack;
- (void)stopLoading;
- (void)onRecordHelperViewStartRecord:(id)arg1;
- (void)onRecordHelperViewTouchEnded:(id)arg1 shouldRecord:(_Bool)arg2;
- (void)onRecordHelperViewTouchMoved:(id)arg1 point:(struct CGPoint)arg2;
- (void)onRecordHelperViewTouchBegan:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)refreshEditImageTextView;
- (id)privateCaptionColor;
- (id)privateCaption;
- (void)setupCameraDevice:(long long)arg1;
- (void)didBecomeActive;
- (void)didEnterBackground;
- (void)handlePinchGesture:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handleFocusTap:(id)arg1;
- (void)onEndInterruption;
- (void)interruptRecord;
- (void)focusCenter;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (void)setZoomFactor:(double)arg1;
- (void)openKitChen:(id)arg1;
- (void)btnRelease;
- (void)cameraButtonPressed;
- (void)close;
- (void)showTips:(id)arg1;
- (float)sightCaptureMaxDuration;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateCameraAccessibility;
- (void)configMaskView;
- (void)configPreviewView;
- (void)configLensFollow;
- (void)updateLensSelection;
- (void)configEmoticonLensDynamicTool;
- (void)configToolBar;
- (void)resetEffectManager;
- (void)configGesture;
- (_Bool)useTransparentNavibar;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


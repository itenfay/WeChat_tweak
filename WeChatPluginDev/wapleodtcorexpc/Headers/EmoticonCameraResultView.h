//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class EditImageAnimatedTextTool, EditImageColor, EditImageDeleteBarView, EmoticonBoardView, EmoticonCameraPreviewView, EmoticonCameraReportObject, EmoticonCameraResultSetting, EmoticonEditTextInputView, EmoticonEmptyEditView, EmoticonLensInfo, EmoticonLensPackage, EmoticonTabBarButton, EmoticonVideoConverter, EmoticonVideoInput, MMTimer, MMUIImageView, NSObject, NSString, UIButton, UIImageView, XEffectEffectManager;
@protocol EmoticonCameraResultViewDelegate, OS_dispatch_queue;

@interface EmoticonCameraResultView : UIView
{
    UIView *m_previewBGView;
    UIImageView *m_imageView;
    UIView *m_editToolsView;
    UIButton *m_removeBgButton;
    UIButton *m_fastPlayButton;
    UIButton *m_emoticonButton;
    EmoticonBoardView *m_emoticonBoardView;
    EmoticonEmptyEditView *m_editImageView;
    EditImageDeleteBarView *m_editDeleteBar;
    EditImageAnimatedTextTool *m_editImageTextView;
    EmoticonEditTextInputView *m_tempTextInputView;
    _Bool _waitForCaption;
    _Bool _isGPUFrozen;
    _Bool _isInterruptByGPUFrozen;
    _Bool _segmentEnable;
    _Bool _isFrontCamera;
    _Bool _enableNewYearPendant;
    _Bool _isCompositing;
    id <EmoticonCameraResultViewDelegate> _delegate;
    NSString *_caption;
    EditImageColor *_captionColor;
    NSString *_followMd5;
    NSString *_followLensId;
    EmoticonCameraReportObject *_reportObject;
    EmoticonLensInfo *_selectedEmoticonLens;
    EmoticonLensPackage *_lensPackage;
    UIView *_bottomView;
    UIView *_fillView;
    EmoticonTabBarButton *_cancelButton;
    EmoticonTabBarButton *_confirmButton;
    EmoticonCameraResultSetting *_resultSetting;
    XEffectEffectManager *_effectManager;
    EmoticonVideoInput *_videoInput;
    NSObject<OS_dispatch_queue> *_processQueue;
    EmoticonCameraPreviewView *_previewView;
    MMUIImageView *_waitingImageView;
    MMTimer *_timer;
    EmoticonVideoConverter *_videoConverter;
    CDStruct_1b6d18a9 _currentFrameTime;
}

+ (double)EmoticonCameraPreviewSideLength;
- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonVideoConverter *videoConverter; // @synthesize videoConverter=_videoConverter;
@property(nonatomic) CDStruct_1b6d18a9 currentFrameTime; // @synthesize currentFrameTime=_currentFrameTime;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) MMUIImageView *waitingImageView; // @synthesize waitingImageView=_waitingImageView;
@property(retain, nonatomic) EmoticonCameraPreviewView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue; // @synthesize processQueue=_processQueue;
@property(retain, nonatomic) EmoticonVideoInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain, nonatomic) XEffectEffectManager *effectManager; // @synthesize effectManager=_effectManager;
@property(nonatomic) _Bool isCompositing; // @synthesize isCompositing=_isCompositing;
@property(retain, nonatomic) EmoticonCameraResultSetting *resultSetting; // @synthesize resultSetting=_resultSetting;
@property(retain, nonatomic) EmoticonTabBarButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) EmoticonTabBarButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *fillView; // @synthesize fillView=_fillView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) _Bool enableNewYearPendant; // @synthesize enableNewYearPendant=_enableNewYearPendant;
@property(nonatomic) _Bool isFrontCamera; // @synthesize isFrontCamera=_isFrontCamera;
@property(nonatomic) _Bool segmentEnable; // @synthesize segmentEnable=_segmentEnable;
@property(retain, nonatomic) EmoticonLensPackage *lensPackage; // @synthesize lensPackage=_lensPackage;
@property(retain, nonatomic) EmoticonLensInfo *selectedEmoticonLens; // @synthesize selectedEmoticonLens=_selectedEmoticonLens;
@property(nonatomic) _Bool isInterruptByGPUFrozen; // @synthesize isInterruptByGPUFrozen=_isInterruptByGPUFrozen;
@property _Bool isGPUFrozen; // @synthesize isGPUFrozen=_isGPUFrozen;
@property(retain, nonatomic) EmoticonCameraReportObject *reportObject; // @synthesize reportObject=_reportObject;
@property(retain, nonatomic) NSString *followLensId; // @synthesize followLensId=_followLensId;
@property(retain, nonatomic) NSString *followMd5; // @synthesize followMd5=_followMd5;
@property(nonatomic) _Bool waitForCaption; // @synthesize waitForCaption=_waitForCaption;
@property(retain, nonatomic) EditImageColor *captionColor; // @synthesize captionColor=_captionColor;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(nonatomic) __weak id <EmoticonCameraResultViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)videoInput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)onEmoticonTextAntiSpamCgiFailed:(id)arg1;
- (void)onEmoticonTextAntiSpamCgiFinished:(id)arg1;
- (void)onEmoticonEditTextInputDidChange:(id)arg1 isFirstTyping:(_Bool)arg2;
- (void)onEmoticonEditTextInputCancel:(id)arg1;
- (void)onEmoticonEditTextInputFinished:(id)arg1;
- (_Bool)startEditingTextWithAnimatedWidgetTool:(id)arg1;
- (struct CGRect)deleteArea;
- (void)adjustEditImageAnimatedWidgetTool:(id)arg1;
- (struct CGRect)getAssetPreviewFrame;
- (void)editImageViewDidDeleteWidgetTool:(id)arg1;
- (void)editImageViewdidEndDraw;
- (void)editImageViewDidStartDraw;
- (void)onSendButtonClicked;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (id)addEmoticonToolWithMd5:(id)arg1;
- (void)showWaitingImageViewWithImage:(id)arg1;
- (id)privateBottomButtonImageFromImage:(id)arg1 backgroundColor:(id)arg2;
- (id)bottomButtonImageFromImage:(id)arg1 backgroundColor:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didClickEmoticonButton:(id)arg1;
- (void)didClickFastPlayButton:(id)arg1;
- (void)changeRemoveBgState;
- (void)didClickRemoveBgButton:(id)arg1;
- (void)didClickCancel;
- (void)didRealClickDone;
- (void)didClickDone;
- (void)updateVideoFrames;
- (void)checkText:(id)arg1;
- (id)trimText:(id)arg1;
- (void)stopLoading;
- (void)startLoadingWithText:(id)arg1;
- (void)setupEditImageTextView;
- (void)setupEditImageView;
- (void)setEmoticonBoardHidden:(_Bool)arg1;
- (void)playButtonAnimation;
- (void)setupBottomView;
- (id)editToolsButtonWithTitle:(id)arg1 titileHL:(id)arg2 image:(id)arg3 imageSelected:(id)arg4 imageHL:(id)arg5 imageDisabled:(id)arg6;
- (void)setupEditTools;
- (void)setupFillView;
- (void)setupPreviewBGView;
- (void)setupBgView;
- (void)configEffectManager;
- (void)continueConfigPlayerView;
- (void)checkWaitForCaptionTimeOut;
- (void)resumeCompose;
- (void)showResultWithVideoPath:(id)arg1 inputQueue:(id)arg2;
- (id)privateCaptionColor;
- (void)setFollowMd5:(id)arg1 transform:(struct CGAffineTransform)arg2 anchorPoint:(struct CGPoint)arg3 andCenter:(struct CGPoint)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) NSString *videoPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


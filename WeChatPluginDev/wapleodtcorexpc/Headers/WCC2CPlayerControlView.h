//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAsset, CMessageWrap, ImageBrowseButton, MMUIButton, MMUILabel, NSString, NSURL, SightIconView, UIButton, UIImageView, UILabel, UIPanGestureRecognizer, UITapGestureRecognizer, UIView, WCC2CPlayerProgressBar, WCC2CShadowLabel, WCC2CVideoPlayerReporter;
@protocol WCC2CPlayerControlViewDelegate;

@interface WCC2CPlayerControlView
{
    _Bool _bVideoBlocked;
    _Bool _bPreventHiddenTool;
    _Bool _isSyncSaveingData;
    _Bool _hideCloseButton;
    _Bool _didClickSaveButton;
    unsigned int _rawDownloadPercent;
    id <WCC2CPlayerControlViewDelegate> _delegate;
    UIView *_toolPanView;
    UIImageView *_topBkgView;
    MMUIButton *_closeButton;
    UIImageView *_bottomBkgView;
    MMUILabel *_errorTipsLabel;
    MMUIButton *_leftTopCloseButton;
    WCC2CShadowLabel *_rawExpireLabel;
    MMUIButton *_saveBtn;
    SightIconView *_iconView;
    WCC2CPlayerProgressBar *_progressBar;
    UIButton *_playAttachVideoButton;
    CMessageWrap *_msgWrap;
    WCC2CVideoPlayerReporter *_reporter;
    double _buttonRightPadding;
    UIView *_tapgGestureView;
    UIView *_iconViewMask;
    UITapGestureRecognizer *_tapGestureRecognizer;
    MMUIButton *_rawPlayStatusBtn;
    MMUIButton *_sessionSourceBtn;
    ImageBrowseButton *_previewRawVideoBtn;
    UILabel *_rawPlayingTagLabel;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_controlTapGesture;
    NSString *_rawVideoAssetID;
    AVAsset *_rawVideoAsset;
    NSURL *_rawVideoAssetUrl;
    CDUnknownBlockType _customBottomLeftAction;
    CDUnknownBlockType _customBottomLeftString;
    struct CGSize _iconSize;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType customBottomLeftString; // @synthesize customBottomLeftString=_customBottomLeftString;
@property(copy, nonatomic) CDUnknownBlockType customBottomLeftAction; // @synthesize customBottomLeftAction=_customBottomLeftAction;
@property(retain, nonatomic) NSURL *rawVideoAssetUrl; // @synthesize rawVideoAssetUrl=_rawVideoAssetUrl;
@property(retain, nonatomic) AVAsset *rawVideoAsset; // @synthesize rawVideoAsset=_rawVideoAsset;
@property(retain, nonatomic) NSString *rawVideoAssetID; // @synthesize rawVideoAssetID=_rawVideoAssetID;
@property(retain, nonatomic) UITapGestureRecognizer *controlTapGesture; // @synthesize controlTapGesture=_controlTapGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) unsigned int rawDownloadPercent; // @synthesize rawDownloadPercent=_rawDownloadPercent;
@property(retain, nonatomic) UILabel *rawPlayingTagLabel; // @synthesize rawPlayingTagLabel=_rawPlayingTagLabel;
@property(retain, nonatomic) ImageBrowseButton *previewRawVideoBtn; // @synthesize previewRawVideoBtn=_previewRawVideoBtn;
@property(retain, nonatomic) MMUIButton *sessionSourceBtn; // @synthesize sessionSourceBtn=_sessionSourceBtn;
@property(retain, nonatomic) MMUIButton *rawPlayStatusBtn; // @synthesize rawPlayStatusBtn=_rawPlayStatusBtn;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIView *iconViewMask; // @synthesize iconViewMask=_iconViewMask;
@property(retain, nonatomic) UIView *tapgGestureView; // @synthesize tapgGestureView=_tapgGestureView;
@property(nonatomic) double buttonRightPadding; // @synthesize buttonRightPadding=_buttonRightPadding;
@property(retain, nonatomic) WCC2CVideoPlayerReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(retain, nonatomic) UIButton *playAttachVideoButton; // @synthesize playAttachVideoButton=_playAttachVideoButton;
@property(retain, nonatomic) WCC2CPlayerProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) SightIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool didClickSaveButton; // @synthesize didClickSaveButton=_didClickSaveButton;
@property(retain, nonatomic) MMUIButton *saveBtn; // @synthesize saveBtn=_saveBtn;
@property(retain, nonatomic) WCC2CShadowLabel *rawExpireLabel; // @synthesize rawExpireLabel=_rawExpireLabel;
@property(retain, nonatomic) MMUIButton *leftTopCloseButton; // @synthesize leftTopCloseButton=_leftTopCloseButton;
@property(retain, nonatomic) MMUILabel *errorTipsLabel; // @synthesize errorTipsLabel=_errorTipsLabel;
@property(retain, nonatomic) UIImageView *bottomBkgView; // @synthesize bottomBkgView=_bottomBkgView;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *topBkgView; // @synthesize topBkgView=_topBkgView;
@property(retain, nonatomic) UIView *toolPanView; // @synthesize toolPanView=_toolPanView;
@property(nonatomic) _Bool hideCloseButton; // @synthesize hideCloseButton=_hideCloseButton;
@property(nonatomic) _Bool isSyncSaveingData; // @synthesize isSyncSaveingData=_isSyncSaveingData;
@property(nonatomic) _Bool bPreventHiddenTool; // @synthesize bPreventHiddenTool=_bPreventHiddenTool;
@property(nonatomic) _Bool bVideoBlocked; // @synthesize bVideoBlocked=_bVideoBlocked;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) __weak id <WCC2CPlayerControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onRawVideoDownloadSuccess:(id)arg1;
- (void)onRawVideoDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (struct CGRect)adjustShowAreaForDisplayFrame:(struct CGRect)arg1;
- (void)animateLayoutControls;
- (void)animateShowSaveButton;
- (void)animateShowRawTagLabel;
- (void)animateHideRawProgressButton:(float)arg1;
- (void)updateRawProgressWithPercent:(unsigned int)arg1;
- (void)onReceiveAllVideoData;
- (void)onDownloadProgressChange:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)updateDownloadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)hiddenIconView;
- (void)showIconView;
- (void)hiddenPercentView;
- (void)showPercentView;
- (void)hiddenBufferingView;
- (void)showBufferingView;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoPlayFinish;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (CDStruct_1b6d18a9)getCurrentPlaybackTime;
- (void)onSliderSeekToTime:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderPlayVideo;
- (void)onSliderPauseVideo;
- (void)onProgressBarChangePlayRate:(float)arg1 currentPlayRate:(float)arg2;
- (void)onProgressBarHidden;
- (_Bool)isPreventProgressBarHidden;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)isVideoPlaying;
- (double)getRawPlayStatusBtnLeft;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onSingleTapOnIconView:(id)arg1;
- (void)layoutSubviews;
- (void)layoutControls;
- (void)updateButtonRightPadding:(double)arg1;
- (void)hideToolPanel;
- (void)showToolPanel;
- (void)showRawVideoPlaySuccess;
- (void)showSwitchingToRawStatus;
- (void)hiddenErrorTips;
- (void)makeToolViewUserInteractionEnabled:(_Bool)arg1;
- (void)hiddenWaitUploading;
- (void)showWaitUploading;
- (void)showRawPlayStatusBtn;
- (void)showUploadStopWithText:(id)arg1;
- (void)showErrorTipsWithText:(id)arg1;
- (void)setErrorTipsText:(id)arg1;
- (double)videoTotalTime;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)setBottomToolsLeftSpace:(double)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)showVideoController;
- (void)onClickPreviewRawVideoButton;
- (void)onClickPlayAttachVideoBtn;
- (void)onClickDetailButton;
- (void)onCloseBtnClick;
- (void)_onClickRawStatusButton;
- (_Bool)showExpireSheetView;
- (void)onClickRawStatusButton;
- (void)onClickSaveVideoButton;
- (void)addShadowToView:(id)arg1;
- (void)onSessionSourceBtnClick;
- (void)initSessionResourceButton;
- (id)getHDButtonTextBySize:(unsigned long long)arg1;
- (void)updateRawStatusBtn;
- (void)initRawPlayStatusBtn;
- (_Bool)canShowRawExpireLabel;
- (_Bool)canShowPreviewRawVideoButton;
- (_Bool)canShowSaveButton;
- (struct CGPoint)getLeftTopCloseButtonOrigin;
- (void)initPlayAttachVideoBtn;
- (void)initSubview;
- (id)initWithFrame:(struct CGRect)arg1 MessageWrap:(id)arg2 customBottomLeftAction:(CDUnknownBlockType)arg3 customBottomLeftString:(CDUnknownBlockType)arg4;
- (id)initWithFrame:(struct CGRect)arg1 MessageWrap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


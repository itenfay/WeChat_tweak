//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesRecordDataField, MMUIButton, MMUILabel, NSString, SightIconView, UIImageView, UILabel, UITapGestureRecognizer, UIView, WCDownloadArgsWrap, WCPlayerProgressBar;
@protocol FavoritePlayerControlViewDelegate;

@interface FavoritePlayerControlView
{
    _Bool _isRawVideo;
    _Bool _isSyncSaveingData;
    _Bool _bPreventHiddenTool;
    unsigned int _rawDownloadPercent;
    UIView *_toolPanView;
    UIImageView *_topBkgView;
    MMUIButton *_closeButton;
    UIImageView *_bottomBkgView;
    MMUIButton *_rawPlayStatusBtn;
    MMUILabel *_errorTipsLabel;
    MMUIButton *_leftTopCloseButton;
    WCDownloadArgsWrap *_rawDownloadArgsWrap;
    SightIconView *_iconView;
    WCPlayerProgressBar *_progressBar;
    id <FavoritePlayerControlViewDelegate> _delegate;
    UIView *_iconViewMask;
    UIView *_tapgGestureView;
    UILabel *_rawPlayingTagLabel;
    FavoritesRecordDataField *_dataField;
    UITapGestureRecognizer *_tapGestureRecognizer;
    struct CGSize _iconSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) FavoritesRecordDataField *dataField; // @synthesize dataField=_dataField;
@property(retain, nonatomic) UILabel *rawPlayingTagLabel; // @synthesize rawPlayingTagLabel=_rawPlayingTagLabel;
@property(nonatomic) unsigned int rawDownloadPercent; // @synthesize rawDownloadPercent=_rawDownloadPercent;
@property(retain, nonatomic) UIView *tapgGestureView; // @synthesize tapgGestureView=_tapgGestureView;
@property(retain, nonatomic) UIView *iconViewMask; // @synthesize iconViewMask=_iconViewMask;
@property(nonatomic) __weak id <FavoritePlayerControlViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCPlayerProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) SightIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) WCDownloadArgsWrap *rawDownloadArgsWrap; // @synthesize rawDownloadArgsWrap=_rawDownloadArgsWrap;
@property(nonatomic) _Bool bPreventHiddenTool; // @synthesize bPreventHiddenTool=_bPreventHiddenTool;
@property(nonatomic) _Bool isSyncSaveingData; // @synthesize isSyncSaveingData=_isSyncSaveingData;
@property(retain, nonatomic) MMUIButton *leftTopCloseButton; // @synthesize leftTopCloseButton=_leftTopCloseButton;
@property(retain, nonatomic) MMUILabel *errorTipsLabel; // @synthesize errorTipsLabel=_errorTipsLabel;
@property(retain, nonatomic) MMUIButton *rawPlayStatusBtn; // @synthesize rawPlayStatusBtn=_rawPlayStatusBtn;
@property(retain, nonatomic) UIImageView *bottomBkgView; // @synthesize bottomBkgView=_bottomBkgView;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *topBkgView; // @synthesize topBkgView=_topBkgView;
@property(retain, nonatomic) UIView *toolPanView; // @synthesize toolPanView=_toolPanView;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) _Bool isRawVideo; // @synthesize isRawVideo=_isRawVideo;
- (void)animateLayoutControls;
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
- (void)onVideoSizeChange:(struct CGSize)arg1;
- (void)onVideoPause;
- (void)onVideoPlay;
- (CDStruct_1b6d18a9)getCurrentPlaybackTime;
- (void)onSliderSeekToTime:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderPlayVideo;
- (void)onSliderPauseVideo;
- (void)onProgressBarHidden;
- (_Bool)isPreventProgressBarHidden;
- (double)getRawPlayStatusBtnLeft;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onSingleTapOnIconView:(id)arg1;
- (void)layoutSubviews;
- (void)layoutControls;
- (void)showToolPanel;
- (void)showRawVideoPlaySuccess;
- (void)showSwitchingToRawStatus;
- (void)hiddenErrorTips;
- (void)makeToolViewUserInteractionEnabled:(_Bool)arg1;
- (void)showRawPlayStatusBtn;
- (void)showUploadStopWithText:(id)arg1;
- (void)showErrorTipsWithText:(id)arg1;
- (void)setErrorTipsText:(id)arg1;
- (double)videoTotalTime;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)setBottomToolsLeftSpace:(double)arg1;
- (void)onClickPlayAttachVideoBtn;
- (void)onClickDetailButton;
- (void)onCloseBtnClick;
- (void)onClickRawStatusButton;
- (void)addShadowToView:(id)arg1;
- (id)getHDButtonTextBySize:(unsigned long long)arg1;
- (void)updateRawStatusBtn;
- (void)initRawPlayStatusBtn;
- (struct CGPoint)getLeftTopCloseButtonOrigin;
- (void)initSubview;
- (_Bool)isRawVideo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 dataField:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


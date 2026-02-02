//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImageScrollViewHelper, MMLoadingView, MMProgressViewEx, MMScrollViewZoomReporter, MMUIButton, NSArray, NSString, OCRTransHalfScreenViewController, QRCodeInMultiDisplayView, ScanQRCodeLogicController, SessionForwardRecordLogic, SharePreConfirmView, UIImage, UIImageView, UIView, UIViewPropertyAnimator, WCImageFullScreenTagView, WCImageTranslateLogic, WCMediaItem, WCMediaItemWrap, WCMomentsPageContext, WCMomentsScrollActionSheet, WXFullScreenGestureRecognizer;
@protocol WCImageFullScreenViewContainerDelegate;

@interface WCImageFullScreenViewContainer
{
    WCMediaItem *m_mediaData;
    WCMediaItemWrap *m_mediaDataWrap;
    struct CGRect m_originImageRectInScreen;
    struct CGSize m_initalContentSize;
    UIImage *m_image;
    _Bool m_isAnimating;
    _Bool m_isShowing;
    _Bool m_bIsLongPressHandled;
    _Bool m_isImageReady;
    _Bool m_isComeFromDownload;
    _Bool m_isDownloadFail;
    UIImageView *m_container;
    MMLoadingView *m_loadingView;
    MMProgressViewEx *m_processView;
    MMImageScrollViewHelper *m_scrollViewHelper;
    WCMomentsScrollActionSheet *m_actionSheet;
    id <WCImageFullScreenViewContainerDelegate> m_delegate;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    int m_qrcodeActionSheetIndex;
    WXFullScreenGestureRecognizer *m_gesture;
    UIView *m_gestureView;
    MMUIButton *m_gameButton;
    SharePreConfirmView *_sharePreConfirmView;
    WCImageTranslateLogic *_imgTranslateLogic;
    _Bool _bNeedEditWhenLoad;
    _Bool _longPressEnabled;
    _Bool _canShowProgress;
    _Bool _bSilencePlayLivePhotos;
    _Bool _isShareEmbedExcerptEnabled;
    _Bool _haveMaterialButton;
    _Bool _needsRotateWhenAnimationEnd;
    _Bool _isDraggingToClose;
    _Bool _isClosing;
    _Bool _isUpdateContainerImageStopped;
    _Bool _isDisplayTranslateImage;
    UIView *m_customContainer;
    unsigned long long _contentItemScene;
    NSString *_msgUserName;
    NSString *_msgID;
    WCMomentsPageContext *_pageContext;
    WCImageFullScreenTagView *_imageTagView;
    double _startLoadingTime;
    OCRTransHalfScreenViewController *_ocrHalfScreenViewCtrl;
    QRCodeInMultiDisplayView *_qrCodeMultiView;
    SessionForwardRecordLogic *_forwardRecordLogic;
    NSString *_materialFileExt;
    MMScrollViewZoomReporter *_zoomReporter;
    UIViewPropertyAnimator *_showAnimationAnimator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewPropertyAnimator *showAnimationAnimator; // @synthesize showAnimationAnimator=_showAnimationAnimator;
@property(nonatomic) _Bool isDisplayTranslateImage; // @synthesize isDisplayTranslateImage=_isDisplayTranslateImage;
@property(retain, nonatomic) MMScrollViewZoomReporter *zoomReporter; // @synthesize zoomReporter=_zoomReporter;
@property(nonatomic) _Bool isUpdateContainerImageStopped; // @synthesize isUpdateContainerImageStopped=_isUpdateContainerImageStopped;
@property(nonatomic) _Bool isClosing; // @synthesize isClosing=_isClosing;
@property(nonatomic) _Bool isDraggingToClose; // @synthesize isDraggingToClose=_isDraggingToClose;
@property(nonatomic) _Bool needsRotateWhenAnimationEnd; // @synthesize needsRotateWhenAnimationEnd=_needsRotateWhenAnimationEnd;
@property(retain, nonatomic) NSString *materialFileExt; // @synthesize materialFileExt=_materialFileExt;
@property(nonatomic) _Bool haveMaterialButton; // @synthesize haveMaterialButton=_haveMaterialButton;
@property(retain, nonatomic) SessionForwardRecordLogic *forwardRecordLogic; // @synthesize forwardRecordLogic=_forwardRecordLogic;
@property(retain, nonatomic) QRCodeInMultiDisplayView *qrCodeMultiView; // @synthesize qrCodeMultiView=_qrCodeMultiView;
@property(retain, nonatomic) OCRTransHalfScreenViewController *ocrHalfScreenViewCtrl; // @synthesize ocrHalfScreenViewCtrl=_ocrHalfScreenViewCtrl;
@property(nonatomic) double startLoadingTime; // @synthesize startLoadingTime=_startLoadingTime;
@property(readonly, nonatomic) WCImageFullScreenTagView *imageTagView; // @synthesize imageTagView=_imageTagView;
@property(nonatomic) _Bool isShareEmbedExcerptEnabled; // @synthesize isShareEmbedExcerptEnabled=_isShareEmbedExcerptEnabled;
@property(retain, nonatomic) WCMomentsPageContext *pageContext; // @synthesize pageContext=_pageContext;
@property(nonatomic) _Bool bSilencePlayLivePhotos; // @synthesize bSilencePlayLivePhotos=_bSilencePlayLivePhotos;
@property(nonatomic) _Bool canShowProgress; // @synthesize canShowProgress=_canShowProgress;
@property(nonatomic) _Bool longPressEnabled; // @synthesize longPressEnabled=_longPressEnabled;
@property(retain, nonatomic) NSString *msgID; // @synthesize msgID=_msgID;
@property(retain, nonatomic) NSString *msgUserName; // @synthesize msgUserName=_msgUserName;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
@property(nonatomic) _Bool bNeedEditWhenLoad; // @synthesize bNeedEditWhenLoad=_bNeedEditWhenLoad;
@property(readonly, nonatomic) MMLoadingView *m_loadingView; // @synthesize m_loadingView;
@property(retain, nonatomic) UIView *m_customContainer; // @synthesize m_customContainer;
@property(readonly, nonatomic) UIImageView *m_container; // @synthesize m_container;
@property(nonatomic) __weak id <WCImageFullScreenViewContainerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) struct CGSize m_initalContentSize; // @synthesize m_initalContentSize;
@property(nonatomic) struct CGRect m_originImageRectInScreen; // @synthesize m_originImageRectInScreen;
@property(retain, nonatomic) WCMediaItemWrap *m_mediaDataWrap; // @synthesize m_mediaDataWrap;
@property(retain, nonatomic) WCMediaItem *m_mediaData; // @synthesize m_mediaData;
@property(retain, nonatomic) UIImage *m_image; // @synthesize m_image;
- (void)reportTranslateMenuClick:(id)arg1;
- (void)handleClickActionSheetItemTranslateFeedback;
- (void)handleClickActionSheetItemChangeTranslateLang;
- (void)handleClickActionSheetItemCancelTranslate;
- (void)originalArticleRowViewDidClick:(id)arg1;
- (void)handleClickWeAppOpenMaterial:(id)arg1;
- (void)handleClickWeAppListOpenMaterial;
- (_Bool)addWAOpenWxMaterialButton:(id)arg1;
- (void)tryAddWAOpenWxMaterialButtonWhenPopMenu:(_Bool)arg1;
- (void)refreshWAWxMaterialAppInfo:(id)arg1;
- (void)onActionSheetQRCodeRowViewBanned;
- (void)onTappedRowInfo:(id)arg1;
- (id)getQRCodeMultiView;
- (void)onSelectMarkDotInfo:(id)arg1;
- (void)dismissQRCodeMultiView;
- (void)onCancelBtnClicked:(id)arg1;
- (void)onDotViewClicked:(id)arg1;
- (void)showQRCodeMultiDisplayView;
- (void)onHalfScreenPageDidClose:(id)arg1 action:(long long)arg2;
- (void)onShowTranslateImage:(id)arg1;
- (void)onCancelTranslateImage:(id)arg1;
- (void)onFinishAnimateTranslateImage:(id)arg1;
- (void)onStartAnimateTranslateImage:(id)arg1;
- (void)onPreDetectWordSuccess:(id)arg1;
- (void)getTranslateImgInfo:(id)arg1 fileId:(id *)arg2 aesKey:(id *)arg3;
- (id)getTranslateImgIdentifier:(id)arg1;
- (void)onImageWebSearch;
- (void)onCircleToSearch;
- (void)showOCRHalfScreenViewCtrl;
- (void)onImageDetectOCRFinish:(unsigned int)arg1 jsonStr:(id)arg2 reqKey:(id)arg3 ocrResultType:(long long)arg4;
- (void)onImageDetectUploadFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)setupOCRHalfScreenViewCtrl:(id)arg1;
- (void)handleClickActionSheetItemOCR;
- (void)showTranslateImg:(id)arg1;
- (void)onTranslateWordInImage;
- (void)preDetectWord;
- (void)cancelImageTranslate;
- (void)resetLogicAndViews;
- (id)imgTranslateLogic;
- (id)targetLogInfo;
- (void)onStopLoading;
- (void)onScanEnds;
- (void)checkNeedToRotateWhenAnimationEnd;
- (void)checkNeedToEditImageWhenLoaded;
- (void)startEditImage:(_Bool)arg1;
- (void)onStartEditImage:(_Bool)arg1;
- (void)startForcedRotationToPortrait;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)doReportSaveLiveToAlbum:(_Bool)arg1 mediaItem:(id)arg2 reportDic:(id)arg3 error:(id)arg4;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenLongPressBegin;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragBegin;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (_Bool)shouldPreventDragDownCloseGesture;
- (void)onSingleTap:(id)arg1;
- (void)updateGestureView;
- (void)initGestureView;
- (void)resetZoomScale;
- (void)animationRotateDidStop;
- (void)contentNeedRotateWithOrientation:(long long)arg1;
- (void)didEndDisplaying;
- (void)didDisplay;
- (void)onDeviceRotate:(_Bool)arg1;
- (void)updateContainerImage;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (_Bool)_isDownloadArgsMatched:(id)arg1;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(long long)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)livePhotoButtonClickedInImageTagView:(id)arg1;
- (void)hideWithoutAnimation;
- (void)animationHideDidStop;
- (void)animationHideWithRotate;
- (void)tryDownloadImage;
- (void)animationShowWithMediaItem:(id)arg1;
- (void)animationShowStep2;
- (void)startUpdateImageFrameAnimation:(_Bool)arg1;
- (void)animationShowStep2_Animate;
- (void)animationShowStep2_ImageNotReady;
- (void)animationShowDidStop;
- (void)onGameButtonClick:(id)arg1;
- (void)addGameButton;
- (void)animationShowView;
- (void)setContentOffsetAndSize;
- (void)clearStatus;
- (void)showProcessView;
- (void)reloadView:(id)arg1;
- (void)initScrollViewHelper;
- (void)onDoubleTap:(id)arg1;
- (id)viewForZooming;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)pausePlayingLivePhoto;
- (void)startPlayingLivePhoto:(_Bool)arg1;
- (void)autoPlayLivePhotoIfReady;
- (_Bool)isAppearOnScreen;
- (void)displayTranslateImage;
- (void)displayOriginImage;
- (_Bool)canShowOriginalArticleItem;
- (id)createRecentForwardView;
- (void)setupActionSheetItem;
- (void)setupActionSheet;
- (void)updateActionSheetOnDownloadFinishedIfNeeded;
- (void)stopLoading;
- (void)startLoadingNonBlock;
- (void)startLoadingBlocked;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setZoomScale:(double)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct CGRect frame;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGRect={CGPoint=dd}{CGSize=dd}},?,N

- (void)dealloc;
- (void)stopAllAnimation;
- (void)layoutSubviews;
- (void)layoutImageTagView;
- (void)updateVisibleForImageTagView:(_Bool)arg1;
- (void)reloadImageTagView;
- (void)didLayoutContainer;
@property(readonly, nonatomic) UIView *displayingContainer;
- (void)loadContainer;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *gestureRecognizers;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,C,N

@property(readonly) unsigned long long hash;
@property(nonatomic) double maximumZoomScale;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(nonatomic) double minimumZoomScale;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(readonly) Class superclass;
@property(nonatomic) double zoomScale;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N


@end


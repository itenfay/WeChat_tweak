//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFullScreenItemView, MMImageScrollViewHelper, MMLoadingView, MMProgressViewEx, NSArray, NSString, SimpleImgInfo, UIImage, WXFullScreenGestureRecognizer;
@protocol FavImageFullScreenViewContainerDelegate, SimpleImgInfoDelegate;

@interface FavImageFullScreenViewContainer
{
    struct CGRect m_originImageRectInScreen;
    struct CGSize m_initalContentSize;
    UIImage *m_image;
    _Bool m_isAnimating;
    _Bool m_isShowing;
    _Bool m_bIsLongPressHandled;
    _Bool m_isCompleteShowAnimationStep1;
    SimpleImgInfo *imgInfo;
    id <SimpleImgInfoDelegate> imgInfoDelegate;
    MMFullScreenItemView *m_container;
    MMLoadingView *m_loadingView;
    MMProgressViewEx *m_processView;
    MMImageScrollViewHelper *m_scrollViewHelper;
    id <FavImageFullScreenViewContainerDelegate> m_delegate;
    WXFullScreenGestureRecognizer *m_gesture;
    id <FavImageFullScreenViewContainerDelegate> _strongDelegate;
    double _animationDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) id <FavImageFullScreenViewContainerDelegate> strongDelegate; // @synthesize strongDelegate=_strongDelegate;
@property(readonly, nonatomic) WXFullScreenGestureRecognizer *fullScreenGesture; // @synthesize fullScreenGesture=m_gesture;
@property(retain, nonatomic) SimpleImgInfo *imgInfo; // @synthesize imgInfo;
@property(retain, nonatomic) MMFullScreenItemView *m_container; // @synthesize m_container;
@property(readonly, nonatomic) MMLoadingView *m_loadingView; // @synthesize m_loadingView;
@property(nonatomic) __weak id <FavImageFullScreenViewContainerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) struct CGSize m_initalContentSize; // @synthesize m_initalContentSize;
@property(nonatomic) struct CGRect m_originImageRectInScreen; // @synthesize m_originImageRectInScreen;
- (void)onFullScreenItemViewShowWithImgInfo:(id)arg1;
- (void)onGetVideoViewBottomLineCenterY:(double *)arg1 leftPartOffset:(double *)arg2 rightPartWidth:(double *)arg3 rightPartMargin:(double *)arg4;
- (_Bool)isItemNeedLazyDownload:(id)arg1;
- (void)tryToDownLoadVideo;
- (void)dismissCurrentView;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenLongPressBegin;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (_Bool)shouldPreventDragDownCloseGesture;
- (void)updateImagePath:(id)arg1;
- (void)onBeginLongPress;
- (void)LongPressEvents;
- (void)animationRotateDidStop;
- (void)onDeviceRotate:(_Bool)arg1;
- (void)onDeviceRotate;
- (void)animationHideDidStop;
- (void)realDoHideAnimation;
- (void)animationHideWithRotate;
- (void)reloadImage;
- (void)releaseImg;
- (void)tryPlaySight;
- (void)tryDownloadImage;
- (void)animationShow;
- (void)animationShowStep2;
- (void)animationShowStep2_Animate;
- (void)animationShowStep2_ImageNotReady;
- (void)animationShowDidStop;
- (void)animationShowView;
- (void)setContentOffsetAndSize;
- (void)clearStatus;
- (struct CGRect)getCenterRectWithMaxSize:(struct CGSize)arg1;
- (void)hideProcessView;
- (void)showProcessView;
- (void)initScrollViewHelper;
- (_Bool)isContainerShow;
- (void)onHide;
- (void)onShow;
- (_Bool)bBanDoubleTap;
- (void)onDoubleTap:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (id)viewForZooming;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)getPlayerView;
- (void)layoutSubviews;
- (void)startLoadingBlocked;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setZoomScale:(double)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct CGRect frame;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGRect={CGPoint=dd}{CGSize=dd}},?,N

- (void)dealloc;
- (void)stopAllAnimation;
- (id)init;

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


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImageScrollViewHelper, MMLoadingView, MMProgressViewEx, MMTimer, MMWebImageView, NSArray, NSString, ScanQRCodeLogicController, UIButton, UIImage, UIImageView, UILabel, UIView, WCActionSheet, WCMediaItem, WCMediaItemWrap, ZCWScrollNumView;
@protocol WCImageFullScreenViewContainerDelegateForHBV4;

@interface WCImageFullScreenViewContainerForHBV4
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
    UIImageView *m_container;
    MMLoadingView *m_loadingView;
    MMProgressViewEx *m_processView;
    MMImageScrollViewHelper *m_scrollViewHelper;
    WCActionSheet *m_actionSheet;
    id <WCImageFullScreenViewContainerDelegateForHBV4> m_delegate;
    UIButton *m_countDownBtn;
    UILabel *m_moneyLabel;
    UILabel *m_rmbLabel;
    UILabel *m_balanceTipLabel;
    UIView *m_backgroundView;
    UIImageView *m_blurCutoutImageView;
    MMWebImageView *m_adImageView;
    UIButton *m_greetingTipBtn;
    UILabel *m_noMoneytipLabel;
    UILabel *m_noMoneyDetailtipLabel;
    unsigned int m_count;
    MMTimer *_timer;
    UIView *m_blurView;
    UIImageView *m_adView;
    UIImageView *m_bannerImageView;
    UIImageView *m_bannerInnerBorderView;
    UIImageView *m_logoImageView;
    UILabel *m_sponsorSloganLabel;
    UIImageView *m_hasMyPhotoView;
    ZCWScrollNumView *m_numView;
    unsigned int m_rewardMoney;
    UILabel *m_yuanLable;
    UIView *m_bkgView;
    ScanQRCodeLogicController *_scanQRCodeLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *m_container; // @synthesize m_container;
@property(retain, nonatomic) UIView *m_backgroundView; // @synthesize m_backgroundView;
@property(readonly, nonatomic) MMLoadingView *m_loadingView; // @synthesize m_loadingView;
@property(nonatomic) __weak id <WCImageFullScreenViewContainerDelegateForHBV4> m_delegate; // @synthesize m_delegate;
@property(nonatomic) struct CGSize m_initalContentSize; // @synthesize m_initalContentSize;
@property(nonatomic) struct CGRect m_originImageRectInScreen; // @synthesize m_originImageRectInScreen;
@property(retain, nonatomic) WCMediaItemWrap *m_mediaDataWrap; // @synthesize m_mediaDataWrap;
@property(retain, nonatomic) WCMediaItem *m_mediaData; // @synthesize m_mediaData;
@property(retain, nonatomic) UIImage *m_image; // @synthesize m_image;
- (void)greetingTipBtnClicked;
- (void)resetPositionByContainerFrame;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)LongPressEvents;
- (void)PreScanQRCode;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)isTouchInView:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)animationRotateDidStop;
- (void)contentNeedRotateWithOrientation:(long long)arg1;
- (void)onDeviceRotate:(_Bool)arg1;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(long long)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)animationHideDidStop;
- (void)animationHideWithRotate;
- (void)tryDownloadImage;
- (void)animationShowWithMediaItem:(id)arg1;
- (void)animationShowWithMediaItemWrap:(id)arg1;
- (void)animationShowStep2;
- (void)resetCountDownBtn;
- (void)countDown;
- (_Bool)isMyPhoto;
- (void)animationShowStep2_Animate;
- (void)animationShowStep2_ImageNotReady;
- (void)showHongBaoView;
- (void)animationShowDidStop;
- (unsigned int)genRandomRewardMoney;
- (void)showNumAnimation;
- (void)initHongBaoUI;
- (void)initHongBaoAchievementUI;
- (void)animationShowView;
- (void)setContentOffsetAndSize;
- (void)clearStatus;
- (void)showProcessView;
- (void)reloadView:(id)arg1;
- (void)initScrollViewHelper;
- (void)onDoubleTap:(id)arg1;
- (void)hideHbItems;
- (void)resetRedEnvelopesInfoWhenExit;
- (void)onSingleTap:(id)arg1;
- (id)viewForZooming;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)startLoadingNonBlock;
- (void)stopLoading;
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


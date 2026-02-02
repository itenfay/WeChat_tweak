//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImageScrollViewHelper, MMLoadingView, MMProgressViewEx, NSArray, NSString, UIImage, UIImageView, WCActionSheet, WCBizImageBrowseItem;
@protocol WCBizMultiImageBrowseViewContainerDelegate;

@interface WCBizMultiImageBrowseViewContainer
{
    WCBizImageBrowseItem *m_oImageBrowseItem;
    struct CGRect m_originImageRectInScreen;
    struct CGSize m_initalContentSize;
    UIImage *m_image;
    UIImageView *m_oBackGroundImageView;
    _Bool m_isAnimating;
    _Bool m_isShowing;
    _Bool m_bIsLongPressHandled;
    _Bool m_isImageReady;
    UIImageView *m_container;
    MMLoadingView *m_loadingView;
    MMProgressViewEx *m_processView;
    UIImage *m_processBackGroundImage;
    MMImageScrollViewHelper *m_scrollViewHelper;
    WCActionSheet *m_actionSheet;
    id <WCBizMultiImageBrowseViewContainerDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLoadingView *m_loadingView; // @synthesize m_loadingView;
@property(nonatomic) __weak id <WCBizMultiImageBrowseViewContainerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) struct CGSize m_initalContentSize; // @synthesize m_initalContentSize;
@property(nonatomic) struct CGRect m_originImageRectInScreen; // @synthesize m_originImageRectInScreen;
@property(retain, nonatomic) WCBizImageBrowseItem *m_oImageBrowseItem; // @synthesize m_oImageBrowseItem;
@property(retain, nonatomic) UIImage *m_image; // @synthesize m_image;
- (void)LongPressEvents;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)animationRotateDidStop;
- (void)onDeviceRotate;
- (void)animationHideDidStop;
- (void)animationHideWithRotate;
- (void)tryDownloadImage:(_Bool)arg1;
- (void)setImageWithoutAnimation:(id)arg1;
- (void)animationShowStep2;
- (void)animationShowStep2_Animate;
- (void)animationShowStep2_ImageNotReady;
- (void)animationShowDidStop;
- (void)animationShowView;
- (void)setContentOffsetAndSize;
- (void)clearStatus;
- (void)showProcessView;
- (void)initScrollViewHelper;
- (void)onDoubleTap:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (id)viewForZooming;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
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


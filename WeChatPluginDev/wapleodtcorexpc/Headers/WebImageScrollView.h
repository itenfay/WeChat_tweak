//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImageScrollViewHelper, MMUIActivityIndicatorView, MMWebImageView, NSArray, NSString, WXFullScreenGestureRecognizer;
@protocol WebImageScrollViewDelegate;

@interface WebImageScrollView
{
    MMWebImageView *webImageView;
    MMUIActivityIndicatorView *mActivityIndicator;
    MMImageScrollViewHelper *m_scrollViewHelper;
    WXFullScreenGestureRecognizer *m_gesture;
    _Bool m_bImageLoadDone;
    _Bool m_bFullScreenAnimationDone;
    _Bool _useWindowFrame;
    id <WebImageScrollViewDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useWindowFrame; // @synthesize useWindowFrame=_useWindowFrame;
@property __weak id <WebImageScrollViewDelegate> m_delegate; // @synthesize m_delegate;
- (id)getQuitAnimationView;
- (void)finishFullScreenAnimation:(struct CGRect)arg1;
- (void)beginFullScreenAnimation:(id)arg1;
- (void)resetLoadingIndicator;
- (void)displayWithFrame:(struct CGRect)arg1;
- (void)resizeToFrame:(struct CGRect)arg1;
- (void)becomeVisible;
- (void)becomeInvisible;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenLongPressBegin;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (_Bool)shouldPreventDragDownCloseGesture;
- (double)screenHeight;
- (double)screenWidth;
- (id)getImageView;
- (void)updateScrollable;
- (void)onLoadImageOK:(id)arg1;
- (void)tryReloadView;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)getScrollView;
- (id)viewForZooming;
@property(nonatomic) _Bool enableDragToClose;
- (void)setImageUrl:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onSingleTap:(id)arg1;
- (void)onDoubleTap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGRect frame;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGRect={CGPoint=dd}{CGSize=dd}},?,N

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


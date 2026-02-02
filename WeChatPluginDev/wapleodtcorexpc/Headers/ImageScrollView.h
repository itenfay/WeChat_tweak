//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImageScrollViewHelper, MMScrollViewZoomReporter, MMUIActivityIndicatorView, NSArray, NSString, UIImageView, UILongPressGestureRecognizer, WCLivePhotoView, WXFullScreenGestureRecognizer;
@protocol ImageScrollViewDelegate;

@interface ImageScrollView
{
    UIImageView *imageView;
    MMUIActivityIndicatorView *mActivityIndicator;
    MMImageScrollViewHelper *m_scrollViewHelper;
    _Bool m_bIsLongPressHandled;
    _Bool disableDragToResize;
    WXFullScreenGestureRecognizer *m_gesture;
    struct CGSize m_originSize;
    _Bool m_isEnablePlayLivePhoto;
    WCLivePhotoView *livePhotoView;
    UILongPressGestureRecognizer *m_livePhotoLongPressRecognizer;
    _Bool _useWindowFrame;
    id <ImageScrollViewDelegate> m_delegate;
    MMScrollViewZoomReporter *_zoomReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMScrollViewZoomReporter *zoomReporter; // @synthesize zoomReporter=_zoomReporter;
@property(nonatomic) _Bool useWindowFrame; // @synthesize useWindowFrame=_useWindowFrame;
@property __weak id <ImageScrollViewDelegate> m_delegate; // @synthesize m_delegate;
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
- (struct CGSize)calculateLivePhotoFitSizeForPreview:(struct CGSize)arg1 maxSize:(struct CGSize)arg2 fillWidth:(_Bool)arg3;
- (void)isEnablePlayLivePhoto:(_Bool)arg1;
- (void)clearLivePlayer;
- (void)pausePlayLivePhoto;
- (void)startPlayLivePhoto;
- (void)displayLivePhoto:(id)arg1 withAsset:(id)arg2 withFrame:(struct CGRect)arg3;
- (void)handleLivePhotoLongPress:(id)arg1;
- (void)enableLongPressRecognizer:(_Bool)arg1;
- (id)m_livePhotoLongPressRecognizer;
- (double)screenHeight;
- (double)screenWidth;
- (id)getImageView;
- (id)getImage;
- (void)updateImage:(id)arg1;
- (void)displayImageCache:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)displayImage:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)dealloc;
- (void)updateScrollable;
- (void)displayLoading:(struct CGRect)arg1;
- (void)displayImage:(id)arg1 withFrame:(struct CGRect)arg2 CornerRadius:(double)arg3;
- (void)reloadView:(id)arg1 FullScreen:(_Bool)arg2;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)getScrollView;
- (id)viewForZooming;
@property(nonatomic) double contentRatioY;
- (struct CGPoint)gestureBeginPoint;
- (void)disableScrollViewDragToResize;
@property(nonatomic) _Bool enableDragToClose;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onSingleTap:(id)arg1;
- (void)onDoubleTap:(id)arg1;
- (void)setOriginSize:(struct CGSize)arg1;

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


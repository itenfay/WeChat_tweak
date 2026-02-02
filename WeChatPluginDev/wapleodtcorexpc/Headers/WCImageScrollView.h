//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImageScrollViewHelper, MMScrollViewZoomReporter, MMUIActivityIndicatorView, NSArray, NSString, UIView, WXFullScreenGestureRecognizer;
@protocol WCImageScrollViewDelegate;

@interface WCImageScrollView
{
    UIView *imageView;
    unsigned long long index;
    MMUIActivityIndicatorView *mActivityIndicator;
    MMImageScrollViewHelper *m_scrollViewHelper;
    _Bool supportOrientation;
    WXFullScreenGestureRecognizer *m_gesture;
    id <WCImageScrollViewDelegate> m_delegate;
    _Bool _isDraggingToClose;
    _Bool _playGestureEnabled;
    long long _browseScene;
    MMScrollViewZoomReporter *_zoomReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMScrollViewZoomReporter *zoomReporter; // @synthesize zoomReporter=_zoomReporter;
@property(nonatomic) _Bool playGestureEnabled; // @synthesize playGestureEnabled=_playGestureEnabled;
@property(nonatomic) long long browseScene; // @synthesize browseScene=_browseScene;
@property(readonly, nonatomic) _Bool isDraggingToClose; // @synthesize isDraggingToClose=_isDraggingToClose;
@property(nonatomic) __weak id <WCImageScrollViewDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, nonatomic) MMUIActivityIndicatorView *mActivityIndicator; // @synthesize mActivityIndicator;
@property(nonatomic) _Bool supportOrientation; // @synthesize supportOrientation;
@property(nonatomic) unsigned long long index; // @synthesize index;
- (id)getImageView;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragBegin;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenLongPressBegin;
- (void)onFullScreenSingleTap;
- (void)willMoveToSuperview:(id)arg1;
- (void)stopLoading;
- (void)displayView:(id)arg1;
- (void)playableImageView:(id)arg1 didChangePlayerState:(unsigned long long)arg2;
- (void)clearPlayer;
- (void)pausePlaying;
- (void)startPlaying;
- (void)displayImage:(id)arg1 withPlayerArgs:(id)arg2 frame:(struct CGRect)arg3;
- (void)displayImage:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)internalDisplayImageMaterial:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)internalDisplayImage:(id)arg1 withFrame:(struct CGRect)arg2;
- (double)angelFromOldOrientation:(long long)arg1 newOrientation:(long long)arg2;
- (long long)orientationToInt:(long long)arg1;
- (void)onDoubleTap:(id)arg1;
- (void)onLongPressBegin:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (id)getScrollView;
- (id)viewForZooming;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)dealloc;
@property(nonatomic) _Bool enableDragToClose;
- (id)initWithFrame:(struct CGRect)arg1;

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


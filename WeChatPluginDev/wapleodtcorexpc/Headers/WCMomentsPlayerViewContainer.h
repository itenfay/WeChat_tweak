//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImageScrollViewHelper, MMScrollViewZoomReporter, NSArray, NSString, UIView;
@protocol WCMomentsPlayerViewContainerDelegate;

@interface WCMomentsPlayerViewContainer
{
    long long _browseScene;
    id <WCMomentsPlayerViewContainerDelegate> _containerDelegate;
    MMImageScrollViewHelper *_scrollViewHelper;
    UIView *_playerView;
    MMScrollViewZoomReporter *_zoomReporter;
    struct CGSize _originVideoSize;
    struct CGRect _suitableVideoFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMScrollViewZoomReporter *zoomReporter; // @synthesize zoomReporter=_zoomReporter;
@property(nonatomic) struct CGRect suitableVideoFrame; // @synthesize suitableVideoFrame=_suitableVideoFrame;
@property(nonatomic) struct CGSize originVideoSize; // @synthesize originVideoSize=_originVideoSize;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) MMImageScrollViewHelper *scrollViewHelper; // @synthesize scrollViewHelper=_scrollViewHelper;
@property(nonatomic) __weak id <WCMomentsPlayerViewContainerDelegate> containerDelegate; // @synthesize containerDelegate=_containerDelegate;
@property(nonatomic) long long browseScene; // @synthesize browseScene=_browseScene;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)getScrollView;
- (void)onDoubleTap:(id)arg1;
- (id)viewForZooming;
- (void)onDisappearFromScreen;
- (void)resetZoomScale;
- (void)initScrollViewHelper;
- (void)setupWithPlayerView:(id)arg1 originVideoSize:(struct CGSize)arg2 suitableVideoFrame:(struct CGRect)arg3;
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


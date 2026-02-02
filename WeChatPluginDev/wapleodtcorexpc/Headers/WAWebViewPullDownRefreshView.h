//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class DotLoadingView, UIScrollView;
@protocol WAWebViewPullDownRefreshViewDelegate;

@interface WAWebViewPullDownRefreshView : UIView
{
    _Bool _isRefreshing;
    _Bool _isAnimating;
    _Bool _isAppear;
    _Bool _isDragging;
    _Bool _waitGoPull;
    _Bool _waitGoStop;
    _Bool _haveDotAnim;
    id <WAWebViewPullDownRefreshViewDelegate> _delegate;
    DotLoadingView *_dotLoadingView;
    double _animateDestY;
    double _beginDragingY;
    double _pullBeginTime;
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool haveDotAnim; // @synthesize haveDotAnim=_haveDotAnim;
@property(nonatomic) double pullBeginTime; // @synthesize pullBeginTime=_pullBeginTime;
@property(nonatomic) _Bool waitGoStop; // @synthesize waitGoStop=_waitGoStop;
@property(nonatomic) _Bool waitGoPull; // @synthesize waitGoPull=_waitGoPull;
@property(nonatomic) double beginDragingY; // @synthesize beginDragingY=_beginDragingY;
@property(nonatomic) _Bool isDragging; // @synthesize isDragging=_isDragging;
@property(nonatomic) _Bool isAppear; // @synthesize isAppear=_isAppear;
@property(nonatomic) double animateDestY; // @synthesize animateDestY=_animateDestY;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) DotLoadingView *dotLoadingView; // @synthesize dotLoadingView=_dotLoadingView;
@property(nonatomic) _Bool isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property(nonatomic) __weak id <WAWebViewPullDownRefreshViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onScrollViewDidEndScrollingAnimation;
- (void)onScrollViewWillBeginDecelerating;
- (void)onScrollViewDidEndDraggingWillDecelerate:(_Bool)arg1;
- (void)onScrollViewDidScroll;
- (void)onScrollViewWillBeginDragging;
- (void)onViewDidDisappear;
- (void)onViewWillDisappear;
- (void)onViewDidAppear;
- (void)onViewWillAppear;
- (void)setScrollViewY:(double)arg1 animated:(_Bool)arg2;
- (double)getScrollViewY;
- (void)layoutSubviews;
- (void)goStop;
- (void)goPull;
- (_Bool)exeWait;
- (void)clearWait;
- (void)stopRefreshing;
- (void)startRefreshing;
- (void)setMode:(long long)arg1;
- (id)initWithScrollView:(id)arg1 withMode:(long long)arg2;

@end


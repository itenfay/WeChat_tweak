//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class MMUIView, NSString, WCAdCardBtnInfo, WCAdConventionalHalfScreenCloseBarView, WCAdConventionalHalfScreenWebViewController, WCFinderEmptyTipsView;
@protocol WCAdConventionalHalfScreenScrollViewDelegate;

@interface WCAdConventionalHalfScreenScrollView : UIScrollView
{
    _Bool _isContentViewFullyVisible;
    WCAdCardBtnInfo *_actionInfo;
    id <WCAdConventionalHalfScreenScrollViewDelegate> _halfScreenDelegate;
    WCAdConventionalHalfScreenCloseBarView *_closeBarView;
    WCFinderEmptyTipsView *_emptyTipsView;
    double _emptyAreaHeight;
    MMUIView *_scrollContentContainer;
    WCAdConventionalHalfScreenWebViewController *_webViewController;
    struct CGPoint _beginDraggingOffset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isContentViewFullyVisible; // @synthesize isContentViewFullyVisible=_isContentViewFullyVisible;
@property(nonatomic) struct CGPoint beginDraggingOffset; // @synthesize beginDraggingOffset=_beginDraggingOffset;
@property(retain, nonatomic) WCAdConventionalHalfScreenWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) MMUIView *scrollContentContainer; // @synthesize scrollContentContainer=_scrollContentContainer;
@property(nonatomic) double emptyAreaHeight; // @synthesize emptyAreaHeight=_emptyAreaHeight;
@property(retain, nonatomic) WCFinderEmptyTipsView *emptyTipsView; // @synthesize emptyTipsView=_emptyTipsView;
@property(retain, nonatomic) WCAdConventionalHalfScreenCloseBarView *closeBarView; // @synthesize closeBarView=_closeBarView;
@property(nonatomic) __weak id <WCAdConventionalHalfScreenScrollViewDelegate> halfScreenDelegate; // @synthesize halfScreenDelegate=_halfScreenDelegate;
@property(retain, nonatomic) WCAdCardBtnInfo *actionInfo; // @synthesize actionInfo=_actionInfo;
- (id)webViewFailToLoad:(id)arg1 Error:(id)arg2;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (void)onWebViewDidReceiveResponse:(id)arg1 Response:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)onScrollViewDidChangeVisibleHeight:(id)arg1;
- (void)onScrollViewCeilingTopWithPercent:(double)arg1 animated:(_Bool)arg2;
- (void)didScrollViewEndDecelerating;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (long long)operateScrollAreaForArea:(long long)arg1 increase:(_Bool)arg2;
- (long long)fetchScrollAreaForOffset:(double)arg1 topLine:(double)arg2 bottomLine:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onConventionalHalfScreenWebViewUpdateTitle:(id)arg1;
- (_Bool)isContentContainerStickToBottom;
- (void)setContentContainerPinToTop;
- (void)setContentContainerScrollToMid:(_Bool)arg1;
- (void)setContentContainerScrollToTop;
- (_Bool)isContentContainerScrolledToTop;
- (void)setWebViewContentScrollEnabled:(_Bool)arg1;
- (id)appendParamsToUrl:(id)arg1 withAdvertiseInfo:(id)arg2;
- (id)appendParamsToUrl:(id)arg1 andUpdateExtraInfo:(inout id)arg2 withDataItem:(id)arg3;
- (void)initialWebView;
- (void)finderEmptyTipsView:(id)arg1 didClickOnState:(unsigned long long)arg2;
- (void)updateEmptyTipsViewPosition;
- (void)showErrorTips;
- (void)hideLoadingTips;
- (void)showLoadingTips;
- (void)loadWebViewContent;
- (void)onScrollViewDidFullyAppear;
- (void)layoutContentScrollViewSubviews:(_Bool)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)configSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


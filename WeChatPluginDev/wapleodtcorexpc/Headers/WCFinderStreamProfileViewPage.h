//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIScrollView, UIView, WCFinderAnimationLoadingView, WCFinderProfileTopRefreshView, WCFinderStreamProfileViewController, WCFinderStreamProfileViewScrollProxy;

@interface WCFinderStreamProfileViewPage : NSObject
{
    _Bool _isLoadingView;
    UIScrollView *_scrollView;
    WCFinderStreamProfileViewController *_profileViewController;
    id _viewModel;
    double _minContentInsetBottom;
    WCFinderProfileTopRefreshView *_topRefreshView;
    UIView *_contentView;
    WCFinderStreamProfileViewScrollProxy *_scrollDelegateProxy;
    WCFinderAnimationLoadingView *_loadingView;
    struct UIEdgeInsets _contentInset;
}

+ (Class)pageScrollViewClass;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderStreamProfileViewScrollProxy *scrollDelegateProxy; // @synthesize scrollDelegateProxy=_scrollDelegateProxy;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool isLoadingView; // @synthesize isLoadingView=_isLoadingView;
@property(retain, nonatomic) WCFinderProfileTopRefreshView *topRefreshView; // @synthesize topRefreshView=_topRefreshView;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) double minContentInsetBottom; // @synthesize minContentInsetBottom=_minContentInsetBottom;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak WCFinderStreamProfileViewController *profileViewController; // @synthesize profileViewController=_profileViewController;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGRect)liveMorphDismissRectWithCustomKey:(id)arg1;
- (long long)onJustWatchBannerClickFromVC:(id)arg1;
- (struct CGSize)contentScrollViewMinSize;
- (void)adjustContentViewMinSize;
- (_Bool)isStateLoading;
- (void)configLoading:(_Bool)arg1;
- (void)onStateNormal;
- (void)onStateLoading;
- (_Bool)isVCClosing;
- (void)pushVCAnimated:(id)arg1;
@property(readonly, nonatomic) int commentScene;
- (double)tabHeaderHeight;
- (double)topSafePadding;
- (double)originY30percent;
- (void)viewWillPopOrDismiss:(_Bool)arg1;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)viewWillApear;
- (void)viewDidLoad;
- (void)pageSizeDidChanged;
- (void)onPageSizeDidChanged;
- (id)loadView;
@property(readonly, nonatomic) _Bool isViewAppeared;
@property(readonly, nonatomic) _Bool isViewLoaded;
- (void)adjustScrollViewContentSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void *)frameKVOPath;
- (void)ensureView:(struct CGRect)arg1 contentInset:(struct UIEdgeInsets)arg2;
- (id)getContentView;
@property(readonly, nonatomic) id view;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


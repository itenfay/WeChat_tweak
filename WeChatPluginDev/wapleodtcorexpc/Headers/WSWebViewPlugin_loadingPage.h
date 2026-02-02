//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UIScrollView, WSDotLoadingView;

@interface WSWebViewPlugin_loadingPage
{
    UIScrollView *_loadingContainerView;
    UIImageView *_headView;
    WSDotLoadingView *_WSDotLoadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WSDotLoadingView *WSDotLoadingView; // @synthesize WSDotLoadingView=_WSDotLoadingView;
@property(retain, nonatomic) UIImageView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIScrollView *loadingContainerView; // @synthesize loadingContainerView=_loadingContainerView;
- (void)removeAllView;
- (void)stopLoadingAnimation;
- (void)handleLoadingTimeout;
- (void)startLoadingAnimation;
- (void)initAnimatingView;
@property(readonly, nonatomic) _Bool isLoading;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;

@end


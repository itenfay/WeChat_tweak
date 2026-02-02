//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebViewController;

@interface WCCanvasUltraWebViewComponent
{
    MMWebViewController *_webViewController;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) MMWebViewController *webViewController; // @synthesize webViewController=_webViewController;
- (_Bool)isChildViewController;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentDidFullyAppearInMainScreen:(_Bool)arg1;
- (_Bool)isComponentContentViewScrolledToTop;
- (void)setComponentContentViewScrollEnabled:(_Bool)arg1;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)fetchRequestUrlWithUrl:(id)arg1 andUpdateExtraInfo:(inout id)arg2;
- (void)initWebView;
- (void)initViews;
- (void)layoutSubviews;

@end


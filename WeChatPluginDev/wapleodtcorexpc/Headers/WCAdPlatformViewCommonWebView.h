//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContainerView, FlutterMethodChannel, MMWebViewController, NSString;
@protocol UIScrollViewDelegate;

@interface WCAdPlatformViewCommonWebView
{
    _Bool _showProgress;
    _Bool _bgTransparent;
    _Bool _scrolledFlag;
    ContainerView *_containerView;
    MMWebViewController *_webViewController;
    FlutterMethodChannel *_channel;
    NSString *_url;
    NSString *_canvasKey;
    NSString *_componentId;
    id <UIScrollViewDelegate> _webViewScrollViewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <UIScrollViewDelegate> webViewScrollViewDelegate; // @synthesize webViewScrollViewDelegate=_webViewScrollViewDelegate;
@property(nonatomic) _Bool scrolledFlag; // @synthesize scrolledFlag=_scrolledFlag;
@property(nonatomic) _Bool bgTransparent; // @synthesize bgTransparent=_bgTransparent;
@property(nonatomic) _Bool showProgress; // @synthesize showProgress=_showProgress;
@property(retain, nonatomic) NSString *componentId; // @synthesize componentId=_componentId;
@property(retain, nonatomic) NSString *canvasKey; // @synthesize canvasKey=_canvasKey;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) FlutterMethodChannel *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) MMWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) ContainerView *containerView; // @synthesize containerView=_containerView;
- (void)handleJsEvent:(id)arg1 params:(id)arg2 needCallback:(_Bool)arg3 result:(CDUnknownBlockType)arg4;
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)webViewFailToLoad:(id)arg1 Error:(id)arg2;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (void)onWebViewDidStartLoad:(id)arg1;
- (void)dealloc;
- (id)view;
- (id)initWithFrame:(struct CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3 binaryMessenger:(id)arg4 methodChannel:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


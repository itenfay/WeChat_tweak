//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NSURLRequest, UIScrollView;
@protocol YYWebViewDelegate;

@interface WKBaseTemplateWebView
{
}

- (void)LoadRequest:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool allowsBackForwardNavigationGestures;
@property(readonly, nonatomic, getter=canGoBack) _Bool canGoBack;
@property(readonly, nonatomic, getter=canGoForward) _Bool canGoForward;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool disablePreviewElement;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <YYWebViewDelegate> wvDelegate;

@end


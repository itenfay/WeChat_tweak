//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, NSURLRequest, UIScrollView;
@protocol YYWebViewDelegate;

@protocol YYWebViewInterface <NSObject>
@property(nonatomic) _Bool disablePreviewElement;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, nonatomic, getter=canGoForward) _Bool canGoForward;
@property(readonly, nonatomic, getter=canGoBack) _Bool canGoBack;
@property(nonatomic) _Bool allowsBackForwardNavigationGestures;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(nonatomic) __weak id <YYWebViewDelegate> wvDelegate;
- (void)addScriptMessageHandlerName:(NSString *)arg1;
- (void)enableJavaScriptPopup:(_Bool)arg1;
- (void)evaluateJavaScriptFromString:(NSString *)arg1 completionBlock:(void (^)(NSString *, NSError *))arg2;
- (void)goForward;
- (void)goBack;
- (void)stopLoading;
- (void)reload;
- (void)LoadHTMLString:(NSString *)arg1 baseURL:(NSURL *)arg2;
- (void)LoadRequest:(NSURLRequest *)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id <YYWebViewDelegate>)arg2;
@end


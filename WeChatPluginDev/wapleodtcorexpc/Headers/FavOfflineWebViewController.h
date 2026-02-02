//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavWebCacheScriptMessageHandler, MMScrollActionSheet, NSData, NSDictionary, NSString, NSURL, UILongPressGestureRecognizer, WCActionSheet, WKWebView;

@interface FavOfflineWebViewController
{
    MMScrollActionSheet *m_scrollActionSheet;
    NSDictionary *m_mimeTypeDic;
    WKWebView *m_webView;
    NSURL *m_targetUrl;
    UILongPressGestureRecognizer *m_longPressGestureRecognizer;
    _Bool m_bIsDraggingScroll;
    WCActionSheet *m_actionSheet;
    NSData *m_savingData;
    FavWebCacheScriptMessageHandler *m_scriptMessageHandler;
}

- (void).cxx_destruct;
- (void)sendMsgWithImageData:(id)arg1;
- (void)addImgFavWithImageData:(id)arg1;
- (void)saveImgWithImageData:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onFavTagEditBegin:(int)arg1;
- (id)getFavForawrdViewController;
- (id)getWCUploadTask;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (struct CGRect)getImageFrame:(id)arg1;
- (id)getImageInfo:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)addOfflineInfo;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3;
- (void)onAction:(id)arg1;
- (void)loadContent;
- (void)dealloc;
- (void)initWebView;
- (void)initNavigationBar;
- (void)onLongPressOnWebview:(id)arg1;
- (void)enableLongPress;
- (id)navigationBarBackgroundColor;
- (_Bool)useCustomNavibar;
- (void)viewDidLoad;
- (id)initWithFavItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


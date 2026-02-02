//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UITapGestureRecognizer, WKWebView;
@protocol IWAFileViewService;

@interface WAFileViewController
{
    UITapGestureRecognizer *_singleTapRec;
    _Bool _bIsNaviBarHide;
    _Bool m_bIsEnableJs;
    _Bool m_bIsShowNavBtn;
    WKWebView *_webView;
    NSString *_filePath;
    id <IWAFileViewService> _fileViewServiceProxy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IWAFileViewService> fileViewServiceProxy; // @synthesize fileViewServiceProxy=_fileViewServiceProxy;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) _Bool m_bIsShowNavBtn; // @synthesize m_bIsShowNavBtn;
@property(nonatomic) _Bool m_bIsEnableJs; // @synthesize m_bIsEnableJs;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (id)initWithDocument:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)onSingleTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)addToFavorites;
- (void)forwardMessage;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setNaviBarHide:(_Bool)arg1 animation:(_Bool)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)onOperate:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


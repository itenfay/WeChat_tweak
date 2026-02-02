//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString, WAJSContextPlugin_vConsole, WAVConsoleWebLogicController, YYBaseWebView;

@interface WAVConsoleWebViewController
{
    WAVConsoleWebLogicController *_logicController;
    NSDictionary *_dictExtInfo;
    YYBaseWebView *_logicWebView;
    struct CGRect _viewRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect viewRect; // @synthesize viewRect=_viewRect;
@property(nonatomic) __weak YYBaseWebView *logicWebView; // @synthesize logicWebView=_logicWebView;
@property(retain, nonatomic) NSDictionary *dictExtInfo; // @synthesize dictExtInfo=_dictExtInfo;
@property(retain, nonatomic) WAVConsoleWebLogicController *logicController; // @synthesize logicController=_logicController;
- (id)webViewControllerBackgroundColor;
- (void)clearScrollBackgroundColor;
- (void)scrollViewDidScroll:(id)arg1;
- (id)webView;
- (void)updateHTMLFrame;
- (void)configViewFrame:(struct CGRect)arg1;
- (void)handleWebViewVCDismiss;
- (void)webViewControllerDidFinishLoad:(id)arg1 dic:(id)arg2;
- (void)webViewControllerDidRecieveResponse:(id)arg1 webview:(id)arg2 isMainFrame:(_Bool)arg3;
- (void)webViewControllerDidStartLoad:(id)arg1;
- (_Bool)useCustomNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
@property(nonatomic) __weak WAJSContextPlugin_vConsole *plugin;
@property(nonatomic) unsigned int htmlId;
- (id)fetchPublicResLogic;
- (id)initWithURL:(id)arg1 extInfo:(id)arg2 plugin:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


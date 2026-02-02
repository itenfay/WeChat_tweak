//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSMutableSet, NSString, WAWorkerRuntime;

@interface WeAppWorkerManager
{
    NSMutableDictionary *_noRetainingDelegate;
    NSMutableSet *_waitingDelegate;
    unsigned int _workerId;
    _Bool _isCompatible;
    _Bool _loaded;
    WAWorkerRuntime *_workerRuntime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) WAWorkerRuntime *workerRuntime; // @synthesize workerRuntime=_workerRuntime;
@property(nonatomic) _Bool isCompatible; // @synthesize isCompatible=_isCompatible;
- (void)onServiceMemoryWarning;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)destroyWeApp:(id)arg1;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)destroyWorker:(unsigned int)arg1;
- (void)notifyComplete:(id)arg1;
- (void)clearCachedWorker;
- (void)activeWorker:(id)arg1;
- (id)createWorkerRuntime:(id)arg1 view:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


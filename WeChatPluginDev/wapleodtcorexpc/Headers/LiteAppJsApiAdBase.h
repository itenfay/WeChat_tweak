//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLoadingView, NSString, WCAdDynamicCanvasPageInfo, WCCanvasDynamicDataLoader;

@interface LiteAppJsApiAdBase
{
    WCCanvasDynamicDataLoader *_dataLoader;
    MMLoadingView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void)fail:(id)arg1;
- (void)success:(id)arg1;
- (void)doAdInvokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (void)showLoading:(_Bool)arg1;
@property(readonly, nonatomic) WCAdDynamicCanvasPageInfo *pageInfo;
- (id)getDynamicCanvasLogic;
- (id)getDynamicCanvasViewController;
- (id)getNavigationController;
- (id)getViewController;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


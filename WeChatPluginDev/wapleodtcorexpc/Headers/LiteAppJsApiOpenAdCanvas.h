//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLoadingView, NSString, WCAdOpenAdCanvasJsLogic;

@interface LiteAppJsApiOpenAdCanvas
{
    WCAdOpenAdCanvasJsLogic *_openAdCanvasJsLogic;
    MMLoadingView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCAdOpenAdCanvasJsLogic *openAdCanvasJsLogic; // @synthesize openAdCanvasJsLogic=_openAdCanvasJsLogic;
- (void)showLoading:(_Bool)arg1;
- (void)onOpenAdCanvasFinish:(_Bool)arg1 msg:(id)arg2;
- (id)getViewController;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WebviewJSEventHandler_openUrlWithExtraWebview
{
    CDUnknownBlockType _callbackBlock;
}

+ (void)setGlobalHasShow:(_Bool)arg1;
+ (_Bool)getGlobalHasShow;
- (void).cxx_destruct;
- (void)webPageSheetDidDismiss:(id)arg1;
- (void)ShowWebViewControllerWithType:(unsigned long long)arg1 andWebViewVC:(id)arg2;
- (void)webViewReturn:(id)arg1;
- (void)delayDoAction;
- (id)pageSheetAdapterPlugin;
- (id)currentPageSheet;
- (id)pageSheetConfigFromParams:(id)arg1;
- (id)genNewWebConfigFromParams:(id)arg1;
- (id)genNewWebExtraInfoFromParams:(id)arg1 toUrl:(id)arg2 csPreInjectJSExtObj:(id)arg3;
- (id)csPreInjectJSExtObjFromParams:(id)arg1;
- (id)backgroundTaskForKey:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


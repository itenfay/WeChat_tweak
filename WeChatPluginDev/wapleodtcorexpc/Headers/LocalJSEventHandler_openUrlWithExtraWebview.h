//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface LocalJSEventHandler_openUrlWithExtraWebview
{
    CDUnknownBlockType _callbackBlock;
}

+ (void)setGlobalHasShow:(_Bool)arg1;
+ (_Bool)getGlobalHasShow;
- (void).cxx_destruct;
- (void)ShowWebViewControllerWithType:(unsigned long long)arg1 andWebViewVC:(id)arg2;
- (void)delayDoAction;
- (id)pageSheetConfigFromParams:(id)arg1;
- (id)genNewWebExtraInfoFromParams:(id)arg1 toUrl:(id)arg2 csPreInjectJSExtObj:(id)arg3;
- (id)backgroundTaskForKey:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;

@end


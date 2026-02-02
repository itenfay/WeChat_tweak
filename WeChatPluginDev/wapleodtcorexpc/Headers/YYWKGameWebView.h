//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class YYWKGameSchemeHandler, YYWKGameWebViewConfig;

@interface YYWKGameWebView
{
    _Bool _didSuccessUseSchemeMethod;
    _Bool _isFirstLoad;
    YYWKGameWebViewConfig *_gameWebViewConfig;
    YYWKGameSchemeHandler *_schemeHandler;
}

+ (_Bool)enableHttpCustomScheme;
+ (id)targetUrlSchemeArray;
+ (void)forceInitializeWebPlatformStrategies;
- (void).cxx_destruct;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(retain, nonatomic) YYWKGameSchemeHandler *schemeHandler; // @synthesize schemeHandler=_schemeHandler;
@property(nonatomic) _Bool didSuccessUseSchemeMethod; // @synthesize didSuccessUseSchemeMethod=_didSuccessUseSchemeMethod;
@property(retain, nonatomic) YYWKGameWebViewConfig *gameWebViewConfig; // @synthesize gameWebViewConfig=_gameWebViewConfig;
- (void)notifyWebViewNetworkChange;
- (void)onNetworkWeakChanged:(_Bool)arg1 currentRTT:(unsigned int)arg2;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)LoadRequest:(id)arg1;
- (void)injectLoadRequestTimeIfNeed;
- (_Bool)canRegisterUrlScheme:(id)arg1;
- (void)addAjaxPostBlobScript:(id)arg1;
- (void)configurationWillCreate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 config:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end


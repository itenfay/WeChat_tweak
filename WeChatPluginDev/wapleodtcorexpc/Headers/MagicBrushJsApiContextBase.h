//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MagicBrushJsApiContextBase : NSObject
{
    NSMutableDictionary *_webviewPluginPool;
    NSMutableDictionary *_weappPluginPool;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *weappPluginPool; // @synthesize weappPluginPool=_weappPluginPool;
@property(retain, nonatomic) NSMutableDictionary *webviewPluginPool; // @synthesize webviewPluginPool=_webviewPluginPool;
- (id)provideCurrentViewController;
- (unsigned long long)webviewPlugin_getEnvironmentType;
- (unsigned int)getAppType;
- (unsigned long long)servicePlugin_getEnvironmentType;
- (void)sendJSEventToService:(id)arg1 param:(id)arg2 webViewId:(unsigned int)arg3;
- (id)pluginScheduler;
- (void)invokeOnServiceThread:(CDUnknownBlockType)arg1;
- (_Bool)performOnService:(id)arg1 selector:(SEL)arg2 withObject:(id)arg3;
- (id)instanceId;
- (void)initWASM:(id)arg1 mb:(id)arg2;
- (void)initGameEngine:(id)arg1 mb:(id)arg2;
- (id)getWeMediaApi;
- (unsigned int)getDebugModeType;
- (id)getCurPubResLogic;
- (id)getAudioNative;
- (unsigned int)getAppVersion;
- (id)currentWebView;
- (id)context;
- (void)alterWillStop;
- (id)getWAContact;
- (id)getParentViewController;
- (id)getFileData:(id)arg1;
- (id)getCurrentPageRelativePath;
- (id)getCurrentPageQuery;
- (id)getCurrentPagePath;
- (_Bool)isNormalWeAppWithGameRuntime;
- (_Bool)isNormalWeApp;
- (_Bool)isSimulatedNativeWeApp;
- (_Bool)isGameApp;
- (id)getAppId;
- (id)weappPluginWhiteList;
- (id)pluginWhiteList;
- (void)setupWeAppPlugin;
- (id)GetWeAppPluginByName:(id)arg1;
- (void)setupWebViewPlugin;
- (id)GetWebViewPluginByName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


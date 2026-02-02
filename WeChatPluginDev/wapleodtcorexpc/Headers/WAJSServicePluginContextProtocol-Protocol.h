//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class JSContext, MagicBrushCore, NSObject, NSString, WAApptaskPublicResLogic, WAContact, WAJSContextPluginScheduler, WAOpenGLView, WAWebViewController, WXAudioNative, WeMediaApi;

@protocol WAJSServicePluginContextProtocol <NSObject>
- (unsigned int)getAppType;
- (WAApptaskPublicResLogic *)getCurPubResLogic;
- (NSString *)instanceId;
- (WAContact *)getWAContact;
- (void)sendJSEventToService:(NSString *)arg1 param:(NSObject *)arg2 webViewId:(unsigned int)arg3;
- (WXAudioNative *)getAudioNative;
- (WeMediaApi *)getWeMediaApi;
- (void)alterWillStop;
- (unsigned int)getDebugModeType;
- (unsigned int)getAppVersion;
- (void)initGameEngine:(WAOpenGLView *)arg1 mb:(MagicBrushCore *)arg2;
- (void)initWASM:(WAOpenGLView *)arg1 mb:(MagicBrushCore *)arg2;
- (JSContext *)context;
- (void)invokeOnServiceThread:(void (^)(void))arg1;
- (_Bool)performOnService:(id)arg1 selector:(SEL)arg2 withObject:(id)arg3;
- (WAWebViewController *)currentWebView;
- (WAJSContextPluginScheduler *)pluginScheduler;
- (NSString *)getAppId;
- (unsigned long long)servicePlugin_getEnvironmentType;
@end


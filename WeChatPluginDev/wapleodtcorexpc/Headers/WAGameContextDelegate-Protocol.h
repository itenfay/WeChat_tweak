//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class JSContext, MagicBrushCore, NSString, WAJSVarInjectionTool, WAOpenGLView;

@protocol WAGameContextDelegate <NSObject>
- (void)initWASM:(WAOpenGLView *)arg1 mb:(MagicBrushCore *)arg2;
- (NSString *)getPreloadAppLaunchConfig;
- (void)onAfterGameBridgeScriptEvaluated;
- (WAJSVarInjectionTool *)getAppLaunchConfigJSVarInjectToolForWebView:(_Bool)arg1;
- (struct OpaqueJSValue *)getNativeGlobal;
- (JSContext *)getJSContext;
- (struct OpaqueJSContext *)getContext;

@optional
- (void)onEvaluateJavaScript:(NSString *)arg1 completionHandler:(void (^)(id, NSError *))arg2;
@end


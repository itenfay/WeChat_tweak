//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterEngine, FlutterViewController, NSMutableDictionary, NSNumber, NSString, WxaLiteAppWidgetFlutterPluginApi, WxaRouterPlugin;
@protocol FlutterBinaryMessenger, FlutterPluginRegistrar, FlutterTextureRegistry;

@interface WxaLiteAppWidgetPlugin : NSObject
{
    WxaLiteAppWidgetFlutterPluginApi *_api;
    NSObject<FlutterTextureRegistry> *_registry;
    NSObject<FlutterPluginRegistrar> *_registrar;
    NSObject<FlutterBinaryMessenger> *_messenger;
    FlutterEngine *_engine;
    FlutterViewController *_flutterViewController;
    NSNumber *_engineId;
    WxaRouterPlugin *_routerPlugin;
    NSMutableDictionary *_liteAppWidgetAdapterMap;
}

+ (void)registerWithRegistrar:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *liteAppWidgetAdapterMap; // @synthesize liteAppWidgetAdapterMap=_liteAppWidgetAdapterMap;
@property(retain, nonatomic) WxaRouterPlugin *routerPlugin; // @synthesize routerPlugin=_routerPlugin;
@property(retain, nonatomic) NSNumber *engineId; // @synthesize engineId=_engineId;
@property(nonatomic) __weak FlutterViewController *flutterViewController; // @synthesize flutterViewController=_flutterViewController;
@property(nonatomic) __weak FlutterEngine *engine; // @synthesize engine=_engine;
@property(readonly, nonatomic) NSObject<FlutterBinaryMessenger> *messenger; // @synthesize messenger=_messenger;
@property(readonly, nonatomic) NSObject<FlutterPluginRegistrar> *registrar; // @synthesize registrar=_registrar;
@property(readonly, nonatomic) NSObject<FlutterTextureRegistry> *registry; // @synthesize registry=_registry;
@property(retain, nonatomic) WxaLiteAppWidgetFlutterPluginApi *api; // @synthesize api=_api;
- (void)destroyLiteAppViewMsg:(id)arg1 error:(id *)arg2;
- (void)showLiteAppViewMsg:(id)arg1 error:(id *)arg2;
- (id)genLiteAppUuidMsg:(id)arg1 error:(id *)arg2;
- (id)checkAndGetLiteAppPathMsg:(id)arg1 error:(id *)arg2;
- (id)getLiteAppEngineIdWithError:(id *)arg1;
- (void)cleanWxaLiteAppWidget;
- (void)detachFromEngineForRegistrar:(id)arg1;
- (void)dealloc;
- (id)initWithRegistry:(id)arg1 registrar:(id)arg2 messenger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


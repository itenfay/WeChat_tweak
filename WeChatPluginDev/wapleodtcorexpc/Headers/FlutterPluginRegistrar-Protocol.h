//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FlutterMethodChannel, NSObject, NSString;
@protocol FlutterBinaryMessenger, FlutterPlatformViewFactory, FlutterPlugin, FlutterTextureRegistry;

@protocol FlutterPluginRegistrar <NSObject>
- (NSString *)lookupKeyForAsset:(NSString *)arg1 fromPackage:(NSString *)arg2;
- (NSString *)lookupKeyForAsset:(NSString *)arg1;
- (void)addApplicationDelegate:(NSObject<FlutterPlugin> *)arg1;
- (void)addMethodCallDelegate:(NSObject<FlutterPlugin> *)arg1 channel:(FlutterMethodChannel *)arg2;
- (void)publish:(NSObject *)arg1;
- (void)registerViewFactory:(NSObject<FlutterPlatformViewFactory> *)arg1 withId:(NSString *)arg2 gestureRecognizersBlockingPolicy:(int)arg3;
- (void)registerViewFactory:(NSObject<FlutterPlatformViewFactory> *)arg1 withId:(NSString *)arg2;
- (NSObject<FlutterTextureRegistry> *)textures;
- (NSObject<FlutterBinaryMessenger> *)messenger;
@end


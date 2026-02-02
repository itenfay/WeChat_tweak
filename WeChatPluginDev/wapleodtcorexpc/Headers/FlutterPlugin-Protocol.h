//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "FlutterApplicationLifeCycleDelegate-Protocol.h"
#import "NSObject-Protocol.h"

@class FlutterMethodCall, NSObject;
@protocol FlutterPluginRegistrar;

@protocol FlutterPlugin <NSObject, FlutterApplicationLifeCycleDelegate>
+ (void)registerWithRegistrar:(NSObject<FlutterPluginRegistrar> *)arg1;

@optional
+ (void)setPluginRegistrantCallback:(CDUnknownFunctionPointerType)arg1;
- (void)detachFromEngineForRegistrar:(NSObject<FlutterPluginRegistrar> *)arg1;
- (void)handleMethodCall:(FlutterMethodCall *)arg1 result:(void (^)(id))arg2;
@end


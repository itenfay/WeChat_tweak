//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterMethodChannel, NSString, WANativeViewPlugin;
@protocol FlutterPluginRegistrar;

@interface WATexturePlugin : NSObject
{
    NSObject<FlutterPluginRegistrar> *_registrar;
    WANativeViewPlugin *_nativeViewPlugin;
    FlutterMethodChannel *_channel;
}

+ (void)registerWithRegistrar:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FlutterMethodChannel *channel; // @synthesize channel=_channel;
@property(nonatomic) __weak WANativeViewPlugin *nativeViewPlugin; // @synthesize nativeViewPlugin=_nativeViewPlugin;
@property(nonatomic) __weak NSObject<FlutterPluginRegistrar> *registrar; // @synthesize registrar=_registrar;
- (void)handleMethodCall:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)updateTextureScale:(long long)arg1 scaleX:(double)arg2 scaleY:(double)arg3;
- (void)dealloc;
- (id)initWithFlutterEngine:(id)arg1 nativeViewPlugin:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol FlutterBinaryMessenger, FlutterPluginRegistrar, FlutterTextureRegistry;

@interface VideoPlayerPlugin : NSObject
{
    NSObject<FlutterTextureRegistry> *_registry;
    NSObject<FlutterBinaryMessenger> *_messenger;
    NSMutableDictionary *_players;
    NSObject<FlutterPluginRegistrar> *_registrar;
}

+ (void)registerWithRegistrar:(id)arg1;
+ (void)setPluginImplClass:(Class)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<FlutterPluginRegistrar> *registrar; // @synthesize registrar=_registrar;
@property(readonly, nonatomic) NSMutableDictionary *players; // @synthesize players=_players;
@property(readonly, nonatomic) __weak NSObject<FlutterBinaryMessenger> *messenger; // @synthesize messenger=_messenger;
@property(readonly, nonatomic) __weak NSObject<FlutterTextureRegistry> *registry; // @synthesize registry=_registry;
- (void)handleMethodCall:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)onPlayerSetup:(id)arg1 frameUpdater:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)detachFromEngineForRegistrar:(id)arg1;
- (id)initWithRegistrar:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


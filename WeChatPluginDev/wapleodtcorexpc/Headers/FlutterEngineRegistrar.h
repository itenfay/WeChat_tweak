//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterEngine, NSString;

@interface FlutterEngineRegistrar : NSObject
{
    NSString *_pluginKey;
    FlutterEngine *_flutterEngine;
}

@property(nonatomic) FlutterEngine *flutterEngine; // @synthesize flutterEngine=_flutterEngine;
- (void)registerViewFactory:(id)arg1 withId:(id)arg2 gestureRecognizersBlockingPolicy:(int)arg3;
- (void)registerViewFactory:(id)arg1 withId:(id)arg2;
- (id)lookupKeyForAsset:(id)arg1 fromPackage:(id)arg2;
- (id)lookupKeyForAsset:(id)arg1;
- (void)addApplicationDelegate:(id)arg1;
- (void)addMethodCallDelegate:(id)arg1 channel:(id)arg2;
- (void)publish:(id)arg1;
- (id)textures;
- (id)messenger;
- (void)dealloc;
- (id)initWithPlugin:(id)arg1 flutterEngine:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


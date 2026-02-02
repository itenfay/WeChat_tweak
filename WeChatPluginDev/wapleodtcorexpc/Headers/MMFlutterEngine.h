//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterEngine, NSMutableDictionary, NSString, UIViewController;
@protocol OS_dispatch_queue;

@interface MMFlutterEngine : NSObject
{
    NSString *_key;
    FlutterEngine *_engine;
    UIViewController *_viewController;
    NSMutableDictionary *_plugins;
    _Bool _isInvokePreloadEnd;
    long long _createStart;
    long long _createEnd;
    CDUnknownBlockType _destroyCallback;
    NSObject<OS_dispatch_queue> *_destroyQueue;
}

+ (id)flutterRevision;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *destroyQueue; // @synthesize destroyQueue=_destroyQueue;
@property(copy, nonatomic) CDUnknownBlockType destroyCallback; // @synthesize destroyCallback=_destroyCallback;
@property(nonatomic) long long createEnd; // @synthesize createEnd=_createEnd;
@property(nonatomic) long long createStart; // @synthesize createStart=_createStart;
- (void)pluginsDetachedFromEngine;
- (void)requestPreRender:(CDUnknownBlockType)arg1 timeOutInMs:(long long)arg2;
- (void)setViewController:(id)arg1;
- (id)findPlugin:(Class)arg1;
- (void)addPlugins:(id)arg1;
- (void)destroyEngine:(_Bool)arg1 isRootEngine:(_Bool)arg2;
- (void)destroyEngine:(_Bool)arg1;
@property(readonly, nonatomic) FlutterEngine *engine;
@property(readonly, nonatomic) NSString *key;
- (id)initWithKey:(id)arg1 engine:(id)arg2;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFlutterAppForegroundState, MMFlutterEngine, MMFlutterEngineGroup, MMFlutterHybridNavPageState, NSMutableArray, NSString;

@interface MMFlutterInstance : NSObject
{
    _Bool _deallocDestroyEngine;
    _Bool _viewControllerKeepEngine;
    NSString *_engineId;
    NSString *_engineGroupId;
    MMFlutterEngine *_engine;
    MMFlutterHybridNavPageState *_pageState;
    NSString *_plugin;
    MMFlutterEngineGroup *_group;
    MMFlutterAppForegroundState *_foregroundState;
    NSString *_route;
    long long _createCost;
    NSMutableArray *_plugins;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *plugins; // @synthesize plugins=_plugins;
@property(nonatomic) long long createCost; // @synthesize createCost=_createCost;
@property(retain, nonatomic) NSString *route; // @synthesize route=_route;
@property(retain, nonatomic) MMFlutterAppForegroundState *foregroundState; // @synthesize foregroundState=_foregroundState;
@property(retain, nonatomic) MMFlutterEngineGroup *group; // @synthesize group=_group;
@property(nonatomic) _Bool viewControllerKeepEngine; // @synthesize viewControllerKeepEngine=_viewControllerKeepEngine;
@property(nonatomic) _Bool deallocDestroyEngine; // @synthesize deallocDestroyEngine=_deallocDestroyEngine;
@property(copy, nonatomic) NSString *plugin; // @synthesize plugin=_plugin;
@property(retain, nonatomic) MMFlutterHybridNavPageState *pageState; // @synthesize pageState=_pageState;
@property(retain, nonatomic) MMFlutterEngine *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSString *engineGroupId; // @synthesize engineGroupId=_engineGroupId;
@property(copy, nonatomic) NSString *engineId; // @synthesize engineId=_engineId;
- (void)requestPreRender:(CDUnknownBlockType)arg1 timeOutInMs:(long long)arg2;
- (void)requestPreRender:(CDUnknownBlockType)arg1;
- (void)setAttachedPluginToNavigator;
- (void)createEngine:(id)arg1 arguments:(id)arg2;
- (id)createViewController:(Class)arg1;
- (void)show:(id)arg1 pageStyle:(id)arg2 completion:(CDUnknownBlockType)arg3 createCompletion:(CDUnknownBlockType)arg4;
- (void)show:(id)arg1 pageStyle:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)show:(id)arg1 pageStyle:(id)arg2;
- (void)doShowViewController:(id)arg1 pageStyle:(id)arg2 completion:(CDUnknownBlockType)arg3 createCompletion:(CDUnknownBlockType)arg4 flutterVC:(id)arg5;
- (void)showViewController:(id)arg1 pageStyle:(id)arg2 completion:(CDUnknownBlockType)arg3 createCompletion:(CDUnknownBlockType)arg4;
- (void)showViewControllerImpl:(id)arg1 viewController:(id)arg2 pageStyle:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)push:(id)arg1 arguments:(id)arg2;
- (void)addPlugins:(id)arg1;
- (void)setNavigatorDelegate:(id)arg1;
- (void)reportEngineInfo;
- (void)dealloc;
- (id)initWithEngineGroup:(id)arg1 plugin:(id)arg2;

@end


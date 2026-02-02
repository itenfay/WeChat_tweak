//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterEngineGroup, FlutterHostEvent, FlutterMemoryPlugin, MMFlutterEngine, NSMapTable, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MMFlutterEngineGroup : NSObject
{
    NSString *_engineGroupId;
    _Bool _isInUse;
    _Bool _needReportRootEngineInfo;
    int _allEngineCount;
    MMFlutterEngine *_rootEngine;
    long long _createTime;
    CDUnknownBlockType _engineCountChangeCallback;
    NSString *_plugin;
    FlutterEngineGroup *_flutterEngineGroup;
    FlutterHostEvent *_hostEvent;
    NSObject<OS_dispatch_queue> *_engineDestroyQueue;
    NSMapTable *_cachedEngines;
    NSMutableArray *_externalEngines;
    unsigned long long _groupUserCount;
    NSString *_subEngineKey;
    FlutterMemoryPlugin *_memoryPlugin;
}

+ (id)defaultGroup;
- (void).cxx_destruct;
@property(retain, nonatomic) FlutterMemoryPlugin *memoryPlugin; // @synthesize memoryPlugin=_memoryPlugin;
@property(retain, nonatomic) NSString *subEngineKey; // @synthesize subEngineKey=_subEngineKey;
@property(nonatomic) unsigned long long groupUserCount; // @synthesize groupUserCount=_groupUserCount;
@property(retain, nonatomic) NSMutableArray *externalEngines; // @synthesize externalEngines=_externalEngines;
@property(retain, nonatomic) NSMapTable *cachedEngines; // @synthesize cachedEngines=_cachedEngines;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *engineDestroyQueue; // @synthesize engineDestroyQueue=_engineDestroyQueue;
@property(retain, nonatomic) FlutterHostEvent *hostEvent; // @synthesize hostEvent=_hostEvent;
@property(nonatomic) _Bool needReportRootEngineInfo; // @synthesize needReportRootEngineInfo=_needReportRootEngineInfo;
@property(retain, nonatomic) FlutterEngineGroup *flutterEngineGroup; // @synthesize flutterEngineGroup=_flutterEngineGroup;
@property(retain, nonatomic) NSString *plugin; // @synthesize plugin=_plugin;
@property(nonatomic) _Bool isInUse; // @synthesize isInUse=_isInUse;
@property(copy, nonatomic) CDUnknownBlockType engineCountChangeCallback; // @synthesize engineCountChangeCallback=_engineCountChangeCallback;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) int allEngineCount; // @synthesize allEngineCount=_allEngineCount;
@property(retain, nonatomic) MMFlutterEngine *rootEngine; // @synthesize rootEngine=_rootEngine;
- (void)freeResourcesAggressive;
- (void)sendCountCallback;
- (void)onExternalEngineDestroy:(id)arg1;
- (void)onEngineDestroy:(id)arg1;
- (void)registerLiteAppPlugins:(id)arg1;
- (void)registerBasicPlugins:(id)arg1;
- (void)setupRootEngine:(id)arg1;
- (void)setupFlutterEngine:(id)arg1 route:(id)arg2;
- (void)applyDarkMode:(id)arg1;
- (void)onLanguageChange;
- (id)makeEngineWithOptions:(id)arg1;
- (id)makeEngineWithEntrypoint:(id)arg1 libraryURI:(id)arg2 initialRoute:(id)arg3 entrypointArgs:(id)arg4 sharedIsolateMode:(_Bool)arg5;
- (id)makeEngineWithEntrypoint:(id)arg1 libraryURI:(id)arg2 initialRoute:(id)arg3 entrypointArgs:(id)arg4;
- (id)createEngine:(id)arg1;
- (void)reportRootEngineInfo;
@property(readonly, nonatomic) int liveEngineCount;
- (void)onAccountLogout;
- (void)updateFlutterUIContext;
- (void)decreaseGroupUserCount;
- (void)increaseGroupUserCount;
- (void)releaseEngineGroup;
- (void)dealloc;
- (void)releaseEngineGroupImpl;
@property(readonly, nonatomic) NSString *engineGroupId;
- (id)initWithPlugin:(id)arg1 rootEngineRoute:(id)arg2 rootEngineParams:(id)arg3 sharedIsolateMode:(_Bool)arg4 rootEnginePlugins:(id)arg5;
- (id)initWithPlugin:(id)arg1 sharedIsolateMode:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


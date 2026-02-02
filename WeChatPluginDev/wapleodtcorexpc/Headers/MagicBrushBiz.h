//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MBBuildConfig, MBReporter, MBRuntime, MagicBrushService, NSArray, NSHashTable, NSMutableDictionary, NSString, UIView;

@interface MagicBrushBiz : NSObject
{
    NSString *_bizName;
    unsigned long long _status;
    NSMutableDictionary *_runtimeDict;
    NSHashTable *_lifecycleListenerHashTable;
    NSArray *_tempListenersArray;
    MBRuntime *_mainRuntime;
    UIView *_mainRuntimeView;
    MBBuildConfig *_buildConfig;
    MagicBrushService *_service;
    NSString *_inherentBizName;
    NSMutableDictionary *_pluginsDict;
    NSMutableDictionary *_publicServicesDict;
    double _createdTime;
    MBReporter *_reporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MBReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) double createdTime; // @synthesize createdTime=_createdTime;
@property(retain, nonatomic) NSMutableDictionary *publicServicesDict; // @synthesize publicServicesDict=_publicServicesDict;
@property(retain, nonatomic) NSMutableDictionary *pluginsDict; // @synthesize pluginsDict=_pluginsDict;
@property(retain, nonatomic) NSString *inherentBizName; // @synthesize inherentBizName=_inherentBizName;
@property(nonatomic) __weak MagicBrushService *service; // @synthesize service=_service;
@property(copy, nonatomic) MBBuildConfig *buildConfig; // @synthesize buildConfig=_buildConfig;
@property(retain, nonatomic) UIView *mainRuntimeView; // @synthesize mainRuntimeView=_mainRuntimeView;
@property(retain, nonatomic) MBRuntime *mainRuntime; // @synthesize mainRuntime=_mainRuntime;
@property(retain, nonatomic) NSArray *tempListenersArray; // @synthesize tempListenersArray=_tempListenersArray;
@property(retain, nonatomic) NSHashTable *lifecycleListenerHashTable; // @synthesize lifecycleListenerHashTable=_lifecycleListenerHashTable;
@property(retain, nonatomic) NSMutableDictionary *runtimeDict; // @synthesize runtimeDict=_runtimeDict;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy) NSString *bizName; // @synthesize bizName=_bizName;
- (_Bool)checkStatusDestroyed:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)onLanguageChanged:(id)arg1;
- (void)onThemeChanged:(id)arg1;
- (void)removeNativeArrayBuffer:(int)arg1;
- (id)insertNativeArrayBufferWithBuffer:(void *)arg1 length:(unsigned long long)arg2 permission:(unsigned long long)arg3 dataRef:(id)arg4;
- (id)getArrayBuffer:(unsigned int)arg1;
- (void)onSwitchVConsole:(_Bool)arg1;
- (void)onVConsoleLog:(id)arg1;
- (id)getAudioFilePath:(id)arg1;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void)onCanvasFrameChanged:(unsigned int)arg1 view:(id)arg2 frame:(struct CGRect)arg3;
- (void)onCanvasDestroyed:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onTerminated:(id)arg1;
- (id)getFileData:(id)arg1;
- (void)onError:(id)arg1 extra:(id)arg2;
- (void)onLoad;
- (void)checkMagicBrushJson;
- (id)getPluginInfo:(id)arg1;
- (id)getPublicServiceInfo:(id)arg1;
- (void)endWithResult:(unsigned long long)arg1 result:(id)arg2;
- (void)notifyOnJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (void)notifyOnDestroy:(int)arg1;
- (void)notifyOnPause;
- (void)notifyOnResume;
- (void)notifyOnMainScriptInjected:(id)arg1;
- (void)notifyOnCreated;
- (id)extractNameFromSubContextId:(unsigned int)arg1;
- (void)setMute:(_Bool)arg1;
- (void)unregisterLifecycleListener:(id)arg1;
- (void)registerLifecycleListener:(id)arg1;
- (void)dispatch:(id)arg1 data:(id)arg2;
- (void)evaluate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)resume;
- (void)pause;
- (int)getMaxRefreshRate;
- (id)buildExperimental;
- (void)start;
- (void)destroy;
- (void)setup:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface LiteAppDynamicModuleManager : NSObject
{
    NSMutableDictionary *_commonModule;
    NSMutableDictionary *_nativeModule;
    NSMutableDictionary *_nativeModuleInstances;
    NSMutableDictionary *_appModule;
    NSMutableDictionary *_excutingApi;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *excutingApi; // @synthesize excutingApi=_excutingApi;
@property(retain, nonatomic) NSMutableDictionary *appModule; // @synthesize appModule=_appModule;
@property(retain, nonatomic) NSMutableDictionary *nativeModuleInstances; // @synthesize nativeModuleInstances=_nativeModuleInstances;
@property(retain, nonatomic) NSMutableDictionary *nativeModule; // @synthesize nativeModule=_nativeModule;
@property(retain, nonatomic) NSMutableDictionary *commonModule; // @synthesize commonModule=_commonModule;
- (_Bool)findDynamicModule:(id)arg1 name:(id)arg2;
- (id)getNativeModuleInstance:(unsigned long long)arg1;
- (void)releaseNativeModuleInstance:(unsigned long long)arg1;
- (id)createNativeModuleInstance:(id)arg1 moduleId:(unsigned long long)arg2;
- (id)getNativeModuleConfig:(id)arg1;
- (void)registerNativeModule:(id)arg1 forClass:(Class)arg2;
- (void)removeExcutingApi:(unsigned int)arg1 callbackId:(long long)arg2;
- (void)addExcutingApi:(unsigned int)arg1 callbackId:(long long)arg2 invoker:(id)arg3;
- (unsigned int)genLocalId;
- (id)getAllDynamicModuleConfig:(id)arg1;
- (void)registerModule:(id)arg1 name:(id)arg2 forClass:(Class)arg3;
- (id)getDynamicModuleConfig:(id)arg1 name:(id)arg2;
- (void)registerModule:(id)arg1 forClass:(Class)arg2;
- (id)init;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface MemoryStatPluginConfig : NSObject
{
    _Bool _memoryStatManualEnabled;
    _Bool _memoryStatDisable;
    _Bool _uploadAlways;
    _Bool _uploadForFOOM;
    _Bool _uploadForBOOM;
    _Bool _fasterZoneEnabled;
    _Bool _loggerZoneEnabled;
    _Bool _vmRegionsEnabled;
    _Bool _allocationsEnabled;
    _Bool _allocationsMemgraphEnabled;
    _Bool _leaksEnabled;
    _Bool _mallocGuardEnabled;
    int _minGeneration;
    int _vmRegionsDumpInternal;
    int _leaksSampleFactor;
    int _mallocGuardMaxTrunks;
    int _mallocGuardCheckFeqs;
    NSString *_platform;
    double _disableTime;
    unsigned long long _userType;
    unsigned long long _maxUserType;
    NSMutableDictionary *_customInfo;
    NSDictionary *_observedCategories;
    NSDictionary *_memgraphCategories;
}

+ (void)initialize;
+ (void)PBArrayAdd_uploadForBOOM;
+ (void)PBArrayAdd_uploadForFOOM;
+ (void)PBArrayAdd_loggerZoneEnabled;
+ (void)PBArrayAdd_fasterZoneEnabled;
+ (void)PBArrayAdd_memgraphCategories;
+ (void)PBArrayAdd_maxUserType;
+ (void)PBArrayAdd_userType;
+ (void)PBArrayAdd_mallocGuardCheckFeqs;
+ (void)PBArrayAdd_mallocGuardMaxTrunks;
+ (void)PBArrayAdd_mallocGuardEnabled;
+ (void)PBArrayAdd_observedCategories;
+ (void)PBArrayAdd_customInfo;
+ (void)PBArrayAdd_allocationsMemgraphEnabled;
+ (void)PBArrayAdd_leaksSampleFactor;
+ (void)PBArrayAdd_leaksEnabled;
+ (void)PBArrayAdd_allocationsEnabled;
+ (void)PBArrayAdd_vmRegionsDumpInternal;
+ (void)PBArrayAdd_vmRegionsEnabled;
+ (void)PBArrayAdd_minGeneration;
+ (void)PBArrayAdd_platform;
+ (void)PBArrayAdd_memoryStatDisable;
+ (void)PBArrayAdd_uploadAlways;
+ (void)PBArrayAdd_disableTime;
+ (void)PBArrayAdd_memoryStatManualEnabled;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *memgraphCategories; // @synthesize memgraphCategories=_memgraphCategories;
@property(retain, nonatomic) NSDictionary *observedCategories; // @synthesize observedCategories=_observedCategories;
@property(retain, nonatomic) NSMutableDictionary *customInfo; // @synthesize customInfo=_customInfo;
@property(nonatomic) unsigned long long maxUserType; // @synthesize maxUserType=_maxUserType;
@property(nonatomic) unsigned long long userType; // @synthesize userType=_userType;
@property(nonatomic) int mallocGuardCheckFeqs; // @synthesize mallocGuardCheckFeqs=_mallocGuardCheckFeqs;
@property(nonatomic) int mallocGuardMaxTrunks; // @synthesize mallocGuardMaxTrunks=_mallocGuardMaxTrunks;
@property(nonatomic) _Bool mallocGuardEnabled; // @synthesize mallocGuardEnabled=_mallocGuardEnabled;
@property(nonatomic) int leaksSampleFactor; // @synthesize leaksSampleFactor=_leaksSampleFactor;
@property(nonatomic) _Bool leaksEnabled; // @synthesize leaksEnabled=_leaksEnabled;
@property(nonatomic) _Bool allocationsMemgraphEnabled; // @synthesize allocationsMemgraphEnabled=_allocationsMemgraphEnabled;
@property(nonatomic) _Bool allocationsEnabled; // @synthesize allocationsEnabled=_allocationsEnabled;
@property(nonatomic) int vmRegionsDumpInternal; // @synthesize vmRegionsDumpInternal=_vmRegionsDumpInternal;
@property(nonatomic) _Bool vmRegionsEnabled; // @synthesize vmRegionsEnabled=_vmRegionsEnabled;
@property(nonatomic) _Bool loggerZoneEnabled; // @synthesize loggerZoneEnabled=_loggerZoneEnabled;
@property(nonatomic) _Bool fasterZoneEnabled; // @synthesize fasterZoneEnabled=_fasterZoneEnabled;
@property(nonatomic) _Bool uploadForBOOM; // @synthesize uploadForBOOM=_uploadForBOOM;
@property(nonatomic) _Bool uploadForFOOM; // @synthesize uploadForFOOM=_uploadForFOOM;
@property(nonatomic) _Bool uploadAlways; // @synthesize uploadAlways=_uploadAlways;
@property(nonatomic) double disableTime; // @synthesize disableTime=_disableTime;
@property(nonatomic) int minGeneration; // @synthesize minGeneration=_minGeneration;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(nonatomic) _Bool memoryStatDisable; // @synthesize memoryStatDisable=_memoryStatDisable;
@property(nonatomic) _Bool memoryStatManualEnabled; // @synthesize memoryStatManualEnabled=_memoryStatManualEnabled;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


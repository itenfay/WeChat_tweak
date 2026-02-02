//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPrefetchConfig : NSObject
{
    _Bool _enablePrefetch;
    _Bool _infinitePrefetch;
    float _maxMultipleFactor;
    float _timeFactor;
    unsigned long long _configId;
    unsigned long long _validityPeriodOfFeature;
    unsigned long long _thresholdInSecond;
    unsigned long long _exprType;
}

+ (void)initialize;
+ (void)PBArrayAdd_exprType;
+ (void)PBArrayAdd_timeFactor;
+ (void)PBArrayAdd_maxMultipleFactor;
+ (void)PBArrayAdd_thresholdInSecond;
+ (void)PBArrayAdd_validityPeriodOfFeature;
+ (void)PBArrayAdd_infinitePrefetch;
+ (void)PBArrayAdd_enablePrefetch;
+ (void)PBArrayAdd_configId;
@property(nonatomic) unsigned long long exprType; // @synthesize exprType=_exprType;
@property(nonatomic) float timeFactor; // @synthesize timeFactor=_timeFactor;
@property(nonatomic) float maxMultipleFactor; // @synthesize maxMultipleFactor=_maxMultipleFactor;
@property(nonatomic) unsigned long long thresholdInSecond; // @synthesize thresholdInSecond=_thresholdInSecond;
@property(nonatomic) unsigned long long validityPeriodOfFeature; // @synthesize validityPeriodOfFeature=_validityPeriodOfFeature;
@property(nonatomic) _Bool infinitePrefetch; // @synthesize infinitePrefetch=_infinitePrefetch;
@property(nonatomic) _Bool enablePrefetch; // @synthesize enablePrefetch=_enablePrefetch;
@property(nonatomic) unsigned long long configId; // @synthesize configId=_configId;
- (unsigned long long)validityPeriodOfTab:(int)arg1;
- (id)validityPeriod;
- (unsigned long long)switchState;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


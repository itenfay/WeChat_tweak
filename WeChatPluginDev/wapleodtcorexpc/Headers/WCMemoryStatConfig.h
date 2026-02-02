//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary;

@interface WCMemoryStatConfig
{
    _Bool _loggerZoneEnable;
    _Bool _allocationsMemgraphEnable;
    int _leaksSampleFactor;
    int _vmRegionsDumpInterval;
    unsigned long long _reportStrategy;
    NSDictionary *_observedCategories;
    NSDictionary *_memgraphCategories;
}

+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *memgraphCategories; // @synthesize memgraphCategories=_memgraphCategories;
@property(retain, nonatomic) NSDictionary *observedCategories; // @synthesize observedCategories=_observedCategories;
@property(nonatomic) unsigned long long reportStrategy; // @synthesize reportStrategy=_reportStrategy;
@property(nonatomic) int vmRegionsDumpInterval; // @synthesize vmRegionsDumpInterval=_vmRegionsDumpInterval;
@property(nonatomic) int leaksSampleFactor; // @synthesize leaksSampleFactor=_leaksSampleFactor;
@property(nonatomic) _Bool allocationsMemgraphEnable; // @synthesize allocationsMemgraphEnable=_allocationsMemgraphEnable;
@property(nonatomic) _Bool loggerZoneEnable; // @synthesize loggerZoneEnable=_loggerZoneEnable;

@end


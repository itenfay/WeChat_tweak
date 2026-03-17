//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMNetworkMonitorConfig : NSObject
{
    _Bool _enabled;
    unsigned int _checkTime;
    unsigned int _checkCount;
    unsigned int _reportLimit;
    unsigned long long _criticalUsage;
    unsigned long long _voipUsage;
    unsigned long long _liveUsage;
}

+ (void)initialize;
+ (void)PBArrayAdd_liveUsage;
+ (void)PBArrayAdd_voipUsage;
+ (void)PBArrayAdd_criticalUsage;
+ (void)PBArrayAdd_reportLimit;
+ (void)PBArrayAdd_checkTime;
+ (void)PBArrayAdd_enabled;
@property(nonatomic) unsigned long long liveUsage; // @synthesize liveUsage=_liveUsage;
@property(nonatomic) unsigned long long voipUsage; // @synthesize voipUsage=_voipUsage;
@property(nonatomic) unsigned long long criticalUsage; // @synthesize criticalUsage=_criticalUsage;
@property(nonatomic) unsigned int reportLimit; // @synthesize reportLimit=_reportLimit;
@property(nonatomic) unsigned int checkCount; // @synthesize checkCount=_checkCount;
@property(nonatomic) unsigned int checkTime; // @synthesize checkTime=_checkTime;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)generateEventConfig;
- (void)updateWithXLabConfig:(id)arg1;
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


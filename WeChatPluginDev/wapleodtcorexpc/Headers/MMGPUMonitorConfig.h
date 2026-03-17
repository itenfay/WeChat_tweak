//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMGPUMonitorConfig : NSObject
{
    _Bool _enabled;
    unsigned int _traceVertexHangMs;
    unsigned int _traceFragmentHangMs;
    unsigned int _traceEncodeHangMs;
    unsigned int _traceGPUHangMs;
    unsigned int _checkTime;
    unsigned int _checkCount;
    unsigned int _reportLimit;
    double _criticalUsage;
}

+ (void)initialize;
+ (void)PBArrayAdd_criticalUsage;
+ (void)PBArrayAdd_reportLimit;
+ (void)PBArrayAdd_checkTime;
+ (void)PBArrayAdd_traceGPUHangMs;
+ (void)PBArrayAdd_traceEncodeHangMs;
+ (void)PBArrayAdd_traceFragmentHangMs;
+ (void)PBArrayAdd_traceVertexHangMs;
+ (void)PBArrayAdd_enabled;
@property(nonatomic) double criticalUsage; // @synthesize criticalUsage=_criticalUsage;
@property(nonatomic) unsigned int reportLimit; // @synthesize reportLimit=_reportLimit;
@property(nonatomic) unsigned int checkCount; // @synthesize checkCount=_checkCount;
@property(nonatomic) unsigned int checkTime; // @synthesize checkTime=_checkTime;
@property(nonatomic) unsigned int traceGPUHangMs; // @synthesize traceGPUHangMs=_traceGPUHangMs;
@property(nonatomic) unsigned int traceEncodeHangMs; // @synthesize traceEncodeHangMs=_traceEncodeHangMs;
@property(nonatomic) unsigned int traceFragmentHangMs; // @synthesize traceFragmentHangMs=_traceFragmentHangMs;
@property(nonatomic) unsigned int traceVertexHangMs; // @synthesize traceVertexHangMs=_traceVertexHangMs;
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


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface MMPowerMgr
{
    _Bool m_bLowPowerMode;
    NSMutableArray *m_minuteCPUUsageArray;
    double m_foregroundTime;
    double m_backgroundTime;
}

+ (long long)getResidentMemory;
+ (float)getCurrentCpuUsage;
- (void).cxx_destruct;
- (_Bool)isLowPowerMode;
- (void)processPowerModeChange;
- (void)p_setPowerMode;
- (void)costCPUALot;
- (void)markTestCPU:(_Bool)arg1;
- (double)getBackgroundTime;
- (double)getForegroundTime;
- (void)processEnterBackground;
- (void)processEnterForeground;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCSessionPerformanceService
{
    NSMutableArray *performanceModels;
    unsigned int pId;
    NSString *pName;
    unsigned int reportSeq;
}

+ (id)sharedPerformanceService;
- (void).cxx_destruct;
- (id)getConfigMMKV;
- (id)getDataMMKV;
- (id)getPerformanceJsonString:(id)arg1;
- (id)getPerformanceStatItemAttr:(id)arg1 withSubSeq:(unsigned long long)arg2 withSubSeqSum:(unsigned long long)arg3;
- (void)reportSessionPerformanceStat:(id)arg1 withLogId:(unsigned int)arg2;
- (id)getSessionPerformanceStatStr:(id)arg1;
- (void)reportAndSavePerformanceData:(_Bool)arg1;
- (void)reportPerformanceDataByIDKey:(id)arg1;
- (void)recordPerformanceData:(id)arg1;
- (void)onEnterBackground;
- (void)onClearData;
- (void)onInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


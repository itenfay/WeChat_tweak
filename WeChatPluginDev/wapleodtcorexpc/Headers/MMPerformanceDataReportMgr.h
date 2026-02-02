//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSMutableDictionary, NSString, Package;

@interface MMPerformanceDataReportMgr
{
    NSMutableDictionary *m_dicCostTimeItems;
    NSMutableDictionary *m_dicCostMemoryItems;
    NSDictionary *m_dicCostTimeReportIdKey;
    NSDictionary *m_dicCostMemoryReportIdKey;
    Package *m_packageDownload;
    unsigned long long m_uAllTotalCostTimeKey;
    unsigned long long m_uAllTotalCountKey;
    NSString *m_nsAllDes;
    unsigned long long m_uDeviceTotalCostTimeKey;
    unsigned long long m_uDeviceTotalCountKey;
    NSString *m_nsDeviceDes;
    _Bool m_bActive;
}

- (void).cxx_destruct;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (id)getIdKeyContent;
- (void)loadIdKeyInfo;
- (void)getKeyInfo:(struct XmlReaderNode_t *)arg1;
- (id)getReportIdKeyEx:(struct XmlReaderNode_t *)arg1;
- (void)reportCostData:(unsigned int)arg1 ToIdKey:(unsigned int)arg2 ToMainKey:(unsigned int)arg3 ToKeyRange:(id)arg4 ToRange:(id)arg5;
- (void)reportCostData:(unsigned int)arg1 ToIdKey:(unsigned int)arg2 ToKeyRange:(id)arg3 ToRange:(id)arg4;
- (void)reportCostData:(unsigned int)arg1 ToCaseId:(unsigned long long)arg2;
- (void)reportCostMemoryToIdKey:(unsigned int)arg1 caseID:(unsigned long long)arg2;
- (void)reportCostTimeToIdKey:(unsigned int)arg1 caseID:(unsigned long long)arg2;
- (void)reportCostMemoryOnKey:(id)arg1;
- (void)reportCostTimeOnKey:(id)arg1;
- (void)setCurrentMemoryOnCase:(unsigned long long)arg1 withTag:(id)arg2;
- (void)setCurrentTimeOnCase:(unsigned long long)arg1 withTag:(id)arg2;
- (void)endLogPerformanceData:(unsigned long long)arg1 onCase:(unsigned long long)arg2 withTag:(id)arg3;
- (void)startLogPerformanceData:(unsigned long long)arg1 onCase:(unsigned long long)arg2 withTag:(id)arg3;
- (void)registerExtension;
- (void)start;
- (void)stop;
- (void)didBecomeActive;
- (void)willSuspend;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


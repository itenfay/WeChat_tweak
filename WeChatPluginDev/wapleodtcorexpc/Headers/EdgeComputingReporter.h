//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EdgeComputingRtReportCache;

@interface EdgeComputingReporter : NSObject
{
    EdgeComputingRtReportCache *m_realtimeReportCache;
    unsigned long long m_reportPeriod;
    unsigned long long m_lastReportTime;
}

- (void).cxx_destruct;
- (void)onRealTimeKVReportFailedWithWrap:(id)arg1;
- (void)onRealTimeKVReportSucceedWithWrap:(id)arg1;
- (void)onFailure:(id)arg1;
- (void)onSuccess:(id)arg1 withNextPeriod:(unsigned long long)arg2 withDropFlags:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reportItemsByKv:(id)arg1;
- (_Bool)reportItemsByCgi:(id)arg1;
- (void)realRtReport;
- (void)rtKVReportFieldData:(id)arg1 withLogID:(unsigned int)arg2;
- (void)rtKVReportStrData:(id)arg1 withLogID:(unsigned int)arg2;
- (void)kvReportFieldData:(id)arg1 withLogID:(unsigned int)arg2;
- (void)kvReportStrData:(id)arg1 withLogID:(unsigned int)arg2;
- (void)batchRtReport;
- (void)cacheRtFieldData:(id)arg1 withLogID:(unsigned int)arg2 withConfigID:(id)arg3;
- (void)cahceRtStrData:(id)arg1 withLogID:(unsigned int)arg2 withConfigID:(id)arg3;
- (id)init;

@end


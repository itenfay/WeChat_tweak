//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface MMMetricsRecordDB : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_tableMetricsInfo;
    WCTTable *m_tableStackInfo;
    WCTTable *m_tableImageInfo;
    WCTTable *m_tableThreadInfo;
    WCTTable *m_tableCpuThreadSample;
    WCTTable *m_tableGpuRenderSample;
    WCTTable *m_tableLocationTask;
    WCTTable *m_tableAudioTask;
    WCTTable *m_tableBusinessData;
}

- (void).cxx_destruct;
- (id)getBusinessDatasFrom:(double)arg1 to:(double)arg2;
- (_Bool)insertBusinessDatas:(id)arg1;
- (id)getAllImageInfos;
- (_Bool)insertImageInfos:(id)arg1;
- (id)getAudioTasksFrom:(double)arg1 to:(double)arg2;
- (_Bool)insertAudioTasks:(id)arg1;
- (_Bool)insertOrUpdateAudioTask:(id)arg1;
- (id)getLocationTasksFrom:(double)arg1 to:(double)arg2;
- (_Bool)insertLocationTasks:(id)arg1;
- (_Bool)insertOrUpdateLocationTask:(id)arg1;
- (id)getGpuRenderSamplesFrom:(double)arg1 to:(double)arg2;
- (_Bool)insertGpuRenderSamples:(id)arg1;
- (id)getCpuThreadSamplesFrom:(double)arg1 to:(double)arg2 minUsage:(float)arg3;
- (_Bool)insertCpuThreadSamples:(id)arg1;
- (id)getThreadInfosFrom:(double)arg1 to:(double)arg2;
- (_Bool)insertThreadInfos:(id)arg1;
- (id)getLastMetricsInfos:(int)arg1;
- (id)getMetricsInfosFrom:(double)arg1 to:(double)arg2;
- (_Bool)insertMetricsInfos:(id)arg1;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (void)vacuumCleaner;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)setupTable;
- (void)closeDB;
- (id)initWithDBPath:(id)arg1;

@end


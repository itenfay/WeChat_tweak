//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMStackReportConnection, MemoryReportTask, NSMutableArray, NSString, WCMemoryStatPlugin;

@interface MemoryStatReporter : NSObject
{
    NSString *m_reportPath;
    NSString *m_configPath;
    MemoryReportTask *m_uploadTask;
    NSMutableArray *m_taskList;
    WCMemoryStatPlugin *m_plugin;
    _Bool m_isAllReport;
    MMStackReportConnection *m_connection;
    MMStackReportConnection *m_dumpReportConnection;
}

- (void).cxx_destruct;
- (void)onReportUploadCompleted:(_Bool)arg1;
- (void)onStackReportCompleted:(_Bool)arg1;
- (void)doSummaryReport:(id)arg1;
- (void)doNextReport;
- (_Bool)hasNextTask;
- (id)nextTask;
- (void)loadTasks;
- (void)saveTasks;
- (_Bool)canReport:(id)arg1;
- (void)reportWithDumpData:(id)arg1;
- (void)uploadAllSummaryReport;
- (_Bool)addSummaryReportTask:(unsigned long long)arg1 customInfo:(id)arg2;
- (id)initWithReportPath:(id)arg1;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMStackReportConnection, NSMutableArray, WCGPUCounterSamplingConfig, WCGPUCounterSamplingTask;
@protocol OS_dispatch_queue;

@interface WCGPUCounterSamplingReporter : NSObject
{
    NSMutableArray *_samplingTaskList;
    WCGPUCounterSamplingTask *_uploadingTask;
    MMStackReportConnection *_reportConnection;
    NSObject<OS_dispatch_queue> *_saveGPUSamplingDumpToLibraryQueue;
    WCGPUCounterSamplingConfig *_samplingConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCGPUCounterSamplingConfig *samplingConfig; // @synthesize samplingConfig=_samplingConfig;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *saveGPUSamplingDumpToLibraryQueue; // @synthesize saveGPUSamplingDumpToLibraryQueue=_saveGPUSamplingDumpToLibraryQueue;
@property(retain, nonatomic) MMStackReportConnection *reportConnection; // @synthesize reportConnection=_reportConnection;
@property(retain, nonatomic) WCGPUCounterSamplingTask *uploadingTask; // @synthesize uploadingTask=_uploadingTask;
@property(retain, nonatomic) NSMutableArray *samplingTaskList; // @synthesize samplingTaskList=_samplingTaskList;
- (void)onReportCompleted:(_Bool)arg1;
- (void)onStackReportCompleted:(_Bool)arg1;
- (void)doReport;
- (_Bool)hasNextTask;
- (id)nextTask;
- (void)loadTasksFromLibrary;
- (void)saveConfigToLibrary;
- (void)saveTasksToLibrary;
- (_Bool)canReport:(id)arg1;
- (unsigned int)reportCount;
- (unsigned int)lastReportTime;
- (void)reportAll;
- (_Bool)reportDirectlyWithreportID:(unsigned long long)arg1 reportData:(id)arg2;
- (void)addReport:(unsigned long long)arg1 reportData:(id)arg2;
- (id)init;

@end


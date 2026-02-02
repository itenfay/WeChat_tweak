//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMDiskUsageScaner, NSDictionary, NSString;
@protocol MMDiskUsageRepoterDelegate, OS_dispatch_queue;

@interface MMDiskUsageReporter : NSObject
{
    _Bool _isRunning;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <MMDiskUsageRepoterDelegate> _delegate;
    NSDictionary *_sizeReportIdKeyInfoDic;
    NSDictionary *_fileNumReportIdKeyInfoDic;
    MMDiskUsageScaner *_reportScanner;
}

+ (id)regularExpressionsThatLogFilesToKV;
- (void).cxx_destruct;
@property(retain, nonatomic) MMDiskUsageScaner *reportScanner; // @synthesize reportScanner=_reportScanner;
@property(retain, nonatomic) NSDictionary *fileNumReportIdKeyInfoDic; // @synthesize fileNumReportIdKeyInfoDic=_fileNumReportIdKeyInfoDic;
@property(retain, nonatomic) NSDictionary *sizeReportIdKeyInfoDic; // @synthesize sizeReportIdKeyInfoDic=_sizeReportIdKeyInfoDic;
@property(nonatomic) __weak id <MMDiskUsageRepoterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)setupReportInfo;
- (void)reportDelFileToIDKey:(id)arg1 vecIDKey:(void *)arg2;
- (void)reportFileSize:(unsigned int)arg1 andFileNum:(unsigned int)arg2 toBizType:(long long)arg3 vecIDKey:(void *)arg4;
- (void)callReportFinishedOnMainThread;
- (void)removeReportDataFile;
- (void)reportOnThread:(id)arg1;
- (void)asyncReportAccountInfo;
- (void)reportChatLog:(id)arg1;
- (void)onDiskUsageScanFinishedWithScanStat:(id)arg1;
- (void)onDiskUsageScanCancel;
- (void)onDiskUsageScanStart;
- (void)handleScanStat:(id)arg1;
- (void)onDiskUsageMgrFinishOneScan:(id)arg1;
- (void)report;
- (void)reportFolders;
- (void)reportAggregationsByDayInterval:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol MMResDownloadMgrDelegate, OS_dispatch_queue;

@interface MMResourceDownloadMgr : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_taskWaitQueue;
    NSMutableDictionary *_dicDownloadingTask;
    id <MMResDownloadMgrDelegate> _downloadMgrDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMResDownloadMgrDelegate> downloadMgrDelegate; // @synthesize downloadMgrDelegate=_downloadMgrDelegate;
- (void)workThread_onDownloadFinish:(long long)arg1 downloadData:(id)arg2 task:(id)arg3;
- (void)onDownloadFinish:(long long)arg1 downloadData:(id)arg2 task:(id)arg3;
- (void)notifyDownloadTaskEnd:(long long)arg1 downloadData:(id)arg2 task:(id)arg3;
- (void)handleDownloadTaskFinish:(long long)arg1 downloadData:(id)arg2 task:(id)arg3 isRetry:(_Bool *)arg4;
- (id)retryTaskFromDownloadTask:(id)arg1;
- (void)checkQueue;
- (void)removeDownloadTaskFromDownloadQueue:(id)arg1;
- (void)addDownloadTaskToDonwloadQueue:(id)arg1;
- (void)removeDownloadTasksFromWaitQueue:(id)arg1;
- (void)addDownloadTaskToWaitQueue:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)insertIndexInWaitQueue:(id)arg1;
- (_Bool)isTaskInWaitOrDownloadQueue:(id)arg1;
- (void)workThread_cancelDownload:(unsigned int)arg1 WithSubtype:(unsigned int)arg2;
- (void)workThread_cancelDownload:(id)arg1;
- (void)workThread_addDownloadTask:(id)arg1;
- (void)cancelDownload:(unsigned int)arg1 WithSubtype:(unsigned int)arg2;
- (void)cancelDownload:(id)arg1;
- (void)addDownloadTask:(id)arg1;
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


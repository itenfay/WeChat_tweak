//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MBDownloadFileHandler : NSObject
{
    NSString *_bizName;
    unsigned int _maxTaskCount;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSObject<OS_dispatch_queue> *_dnsQueue;
    NSMutableArray *_arrDownloadTask;
}

- (void).cxx_destruct;
- (void)downloadFileTaskDidEnd:(id)arg1;
- (void)cancelAndDeleteAllTaskWithError:(id)arg1;
- (void)deleteTask:(id)arg1;
- (id)getDownloadTaskWithTaskID:(id)arg1;
- (id)getNewDownloadTask:(id)arg1;
- (_Bool)isExceedMaxTaskCount;
- (void)invalidate;
- (_Bool)abortDownloadTask:(id)arg1 getError:(id *)arg2;
- (id)GetHttpHeaderReferer;
- (void)startDownloadTaskWithUrl:(id)arg1 taskID:(id)arg2 httpHeaders:(id)arg3 context:(id)arg4 completionHandler:(CDUnknownBlockType)arg5 headerHandler:(CDUnknownBlockType)arg6 progressHandler:(CDUnknownBlockType)arg7;
- (id)initWithBizName:(id)arg1 workerQueue:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


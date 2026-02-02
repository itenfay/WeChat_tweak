//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCStoryUploadTaskInfo;
@protocol WCStoryUploadCdnMgrDelegate;

@interface WCStoryUploadCdnMgr : NSObject
{
    id <WCStoryUploadCdnMgrDelegate> _delegate;
    NSMutableArray *_taskQueue;
    NSMutableArray *_retryQueue;
    NSMutableArray *_deleteQueue;
    WCStoryUploadTaskInfo *_curTaskInfo;
    NSString *_taskRetryPath;
    NSString *_taskUploadingPath;
    NSString *_taskUploadingShouldDeletePath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *taskUploadingShouldDeletePath; // @synthesize taskUploadingShouldDeletePath=_taskUploadingShouldDeletePath;
@property(retain, nonatomic) NSString *taskUploadingPath; // @synthesize taskUploadingPath=_taskUploadingPath;
@property(retain, nonatomic) NSString *taskRetryPath; // @synthesize taskRetryPath=_taskRetryPath;
@property(retain, nonatomic) WCStoryUploadTaskInfo *curTaskInfo; // @synthesize curTaskInfo=_curTaskInfo;
@property(retain, nonatomic) NSMutableArray *deleteQueue; // @synthesize deleteQueue=_deleteQueue;
@property(retain, nonatomic) NSMutableArray *retryQueue; // @synthesize retryQueue=_retryQueue;
@property(retain, nonatomic) NSMutableArray *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(nonatomic) __weak id <WCStoryUploadCdnMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnInit;
- (void)onStoryUploadCdnSuccess:(id)arg1;
- (void)onStoryUploadRetryFail:(id)arg1;
- (void)addRetryQueueWithTask:(id)arg1;
- (void)reportVideoArgsWhenPostSucc:(id)arg1;
- (void)reportCDNKV;
- (_Bool)canTaskRetryWithErrorType:(long long)arg1;
- (void)startStoryPostCgiWithTask;
- (void)startUploadStoryTask;
- (void)CheckRetryQueue;
- (void)CheckQueue;
- (void)retry;
- (void)deleteUploadTaskWithDataIem:(id)arg1;
- (void)startUploadStoryWithDataItem:(id)arg1;
- (_Bool)isTaskRetryingWithDataItem:(id)arg1;
- (_Bool)isTaskUploadingWithDataItem:(id)arg1;
- (void)deleteTaskInAllQueueWithTid:(id)arg1;
- (_Bool)uploadTaskNeedDeleteWithTid:(id)arg1;
- (id)getUploadTaskInfoForTid:(id)arg1 inQueue:(id)arg2;
- (id)getUploadTaskInfoForTid:(id)arg1;
- (_Bool)deleteTaskWithTid:(id)arg1 InQueue:(id)arg2;
- (_Bool)IsDataItem:(id)arg1 InQueue:(id)arg2;
- (void)reloadQueueFromeLocal;
- (void)syncQueueToLocal;
- (id)initWithDelegate:(id)arg1;

@end


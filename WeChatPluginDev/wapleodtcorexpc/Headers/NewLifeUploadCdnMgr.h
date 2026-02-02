//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCFinderUploadTask;
@protocol OS_dispatch_queue, WCFinderUploadCdnMgrDelegate;

@interface NewLifeUploadCdnMgr : NSObject
{
    NSMutableArray *_taskQueue;
    NSMutableArray *_retryQueue;
    NSMutableArray *_deleteQueue;
    NSMutableArray *_backupQueue;
    NSString *_taskRetryPath;
    NSString *_taskUploadingPath;
    NSString *_taskUploadingShouldDeletePath;
    NSString *_taskUploadingBackupPath;
    WCFinderUploadTask *_currentTask;
    id <WCFinderUploadCdnMgrDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_ioQueue;
}

+ (void)updateMentionedHistoryArray:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(nonatomic) __weak id <WCFinderUploadCdnMgrDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderUploadTask *currentTask; // @synthesize currentTask=_currentTask;
@property(retain, nonatomic) NSString *taskUploadingBackupPath; // @synthesize taskUploadingBackupPath=_taskUploadingBackupPath;
@property(retain, nonatomic) NSString *taskUploadingShouldDeletePath; // @synthesize taskUploadingShouldDeletePath=_taskUploadingShouldDeletePath;
@property(retain, nonatomic) NSString *taskUploadingPath; // @synthesize taskUploadingPath=_taskUploadingPath;
@property(retain, nonatomic) NSString *taskRetryPath; // @synthesize taskRetryPath=_taskRetryPath;
@property(retain, nonatomic) NSMutableArray *backupQueue; // @synthesize backupQueue=_backupQueue;
@property(retain, nonatomic) NSMutableArray *deleteQueue; // @synthesize deleteQueue=_deleteQueue;
@property(retain, nonatomic) NSMutableArray *retryQueue; // @synthesize retryQueue=_retryQueue;
@property(retain, nonatomic) NSMutableArray *taskQueue; // @synthesize taskQueue=_taskQueue;
- (void)reportUploadResultWithMediaTaskInfo:(id)arg1 taskInfo:(id)arg2 retCode:(long long)arg3;
- (_Bool)checkDataItemInCDNUploadQueue:(id)arg1;
- (_Bool)busy;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnInit;
- (void)moveFileToDataItemPath:(id)arg1;
- (void)finderUploadCDNSuccess:(id)arg1;
- (void)addPostTaskToUploadQueue:(id)arg1;
- (void)bindTraceInfoToDataItem:(id)arg1 traceInfo:(id)arg2;
- (void)finderPost;
- (void)finderMusicDraftPost;
- (void)clearLiveUploadTask;
- (void)onDraftCDNUploadFailed;
- (void)afterDraftPostTaskFailed:(long long)arg1 tid:(id)arg2;
- (void)afterPostTaskFinish:(id)arg1;
- (void)draftPost;
- (void)finderMemberQAPost;
- (void)startUploadCGIPost;
- (_Bool)hasSamePrefixWithFirstString:(id)arg1 secondString:(id)arg2;
- (id)handleCDNResultCombineLogic;
- (_Bool)checkFileExistsWithTask:(id)arg1;
- (void)startUploadCdnMediaTask;
- (_Bool)realStartUpload;
- (void)startUploadCdnTask;
- (void)startUploadFinderCoverWithPostSession:(id)arg1;
- (id)checkPostInvalidAddQueue:(id)arg1;
- (id)createPostTaskOrRaiseError:(id)arg1;
- (void)startUploadFinderMemberQAWithPostSession:(id)arg1;
- (void)startUploadFinderLiveWithDataItem:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)startUploadFinderWithPostSession:(id)arg1;
- (id)_getShouldUploadTaskByPostSession:(id)arg1;
- (void)preCancelUploadFinderWithPostSession:(id)arg1;
- (void)preUploadFinderWithPostSession:(id)arg1;
- (void)startUploadFinderDraft:(id)arg1;
- (void)uploadMgrIdle;
- (void)checkRetryQueue;
- (void)checkQueue;
- (void)syncQueueToLocal;
- (void)startWithTaskInfo:(id)arg1;
- (id)getUploadTaskWithTid:(id)arg1 fromQueue:(id)arg2;
- (id)getUploadTaskWithTid:(id)arg1;
- (void)deleteUploadTaskWithTid:(id)arg1;
- (void)deleteTaskInAllQueueWithTid:(id)arg1;
- (_Bool)uploadTaskNeedDeleteWithTid:(id)arg1;
- (_Bool)deleteTaskTid:(id)arg1 inQueue:(id)arg2;
- (_Bool)checkDataItemHasUpload:(id)arg1;
- (_Bool)checkDataItem:(id)arg1 inQueue:(id)arg2;
- (void)finderUploadRetryFail:(id)arg1;
- (void)addRetryQueueWithTask:(id)arg1;
- (void)clearInvalidUploadTask;
- (void)filterIgnoreTask;
- (id)initWithDelegate:(id)arg1;

@end


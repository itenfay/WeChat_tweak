//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FIFOFileQueue, NSDate, NSMutableArray, NSString, WCTaskUploader;
@protocol WCUploadMgrDelegate;

@interface WCUploadMgr
{
    FIFOFileQueue *m_taskQueue;
    NSMutableArray *m_failedQueue;
    NSMutableArray *m_succeedItems;
    id <WCUploadMgrDelegate> m_delegate;
    _Bool m_taskRunning;
    WCTaskUploader *m_taskUploader;
    NSDate *m_dateLastNotifySentFail;
    FIFOFileQueue *_pendingQueue;
}

+ (id)createPendingExtensionKeyWithTaskId:(id)arg1 businessType:(int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) FIFOFileQueue *pendingQueue; // @synthesize pendingQueue=_pendingQueue;
@property(nonatomic) __weak id <WCUploadMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)checkPendingTaskOverTime;
- (id)checkIsNeedDeletePendingTask:(id)arg1;
- (void)onPendingTaskUpdatedForFail:(id)arg1 forBusiness:(int)arg2 removedFromPending:(_Bool)arg3;
- (void)deleteFailedPendingTask:(id)arg1;
- (void)onPendingTaskUploaded:(id)arg1 forBusiness:(int)arg2 prepareUploadTask:(id)arg3;
- (id)getPendingTask:(id)arg1 forBusiness:(int)arg2;
- (id)deletePendingTaskForDataItem:(id)arg1;
- (id)removePendingTaskForTaskKey:(id)arg1 forBusiness:(int)arg2;
- (void)addPendingTask:(id)arg1 pendingTaskKey:(id)arg2 forBusiness:(int)arg3;
- (void)uploadPendingTask:(id)arg1;
- (id)getInPendingQueue;
- (void)registerPendingExtension;
- (void)initPendingQueue;
- (void)OnCdnInit;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)enterBackground;
- (void)enterForeground;
- (void)restartAllFailUploadFromLocalNotification;
- (void)onUploadFailNotify:(id)arg1;
- (void)onUploadFinished:(id)arg1;
- (void)onUploader:(id)arg1 didUpdateUploadTask:(id)arg2;
- (void)onMediaUploadFinished:(id)arg1 task:(id)arg2;
- (void)saveCurrentTask;
- (void)notifyUploadFailStatusChanged:(id)arg1;
- (void)notifyUploadRestart:(id)arg1;
- (void)notifyUploadFailed:(id)arg1;
- (void)notifyUploadFinished:(id)arg1;
- (void)addUploadTask:(id)arg1;
- (void)retryStartTask;
- (_Bool)_deleteUploadingTaskWithDataItem:(id)arg1;
- (_Bool)_deleteUploadFailedTaskWithDataIem:(id)arg1;
- (_Bool)deleteUploadTaskWithDataIem:(id)arg1;
- (void)restartUploadTaskWithDataIem:(id)arg1;
- (void)TryStartTask;
- (void)setTaskArrFail:(id)arg1;
- (void)setTaskFail:(id)arg1;
- (void)updateAllSpamDataItemsForSecurityVerification:(_Bool)arg1;
- (void)updateFailDataItemForSpam:(id)arg1;
- (_Bool)cleanFailDataItemForSpam:(id)arg1;
- (void)deleteHomepageSucceedUploads:(id)arg1;
- (void)deleteTimelineSucceedUploads:(id)arg1;
- (void)doDeleteSucceedUploads:(id)arg1 from:(id)arg2;
- (id)getHomepageSucceedUploads;
- (id)getTimelineSucceedUploads;
- (void)addSucceedUpload:(id)arg1;
- (id)getFailedUploads;
- (id)getInQueueUploads;
- (void)cleanUpForTask:(id)arg1;
- (_Bool)saveSucceedItems;
- (_Bool)loadSucceedItems;
- (_Bool)saveFailedQueue;
- (_Bool)loadFailedQueue;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (unsigned long long)onServiceCleanCache;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


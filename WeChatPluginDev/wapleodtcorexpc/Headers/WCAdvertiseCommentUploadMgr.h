//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FIFOFileQueue, NSMutableDictionary, NSString;
@protocol WCAdvertiseCommentUploadMgrDelegate;

@interface WCAdvertiseCommentUploadMgr
{
    FIFOFileQueue *m_queue;
    NSMutableDictionary *m_inQueueCommentsForWCObject;
    int m_uploadingCount;
    id <WCAdvertiseCommentUploadMgrDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCAdvertiseCommentUploadMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)onNewSyncOplogOK;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)pushBackTopTask;
- (void)popTopTask;
- (void)removeCommentFromWCObjectCache:(id)arg1;
- (_Bool)doComment:(id)arg1;
- (void)tryStartNextTask;
- (void)addCommentToWCObjectCache:(id)arg1;
- (void)deleteAllCommentInQueue;
- (id)getInQueueCommentForWCObject:(id)arg1;
- (void)removeInQueueLikeCommentForWCObject:(id)arg1;
- (void)addComment:(id)arg1;
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


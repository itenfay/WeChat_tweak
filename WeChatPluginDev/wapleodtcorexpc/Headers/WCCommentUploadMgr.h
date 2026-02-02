//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FIFOFileQueue, NSMutableArray, NSMutableDictionary, NSString;
@protocol WCCommentUploadMgrDelegate;

@interface WCCommentUploadMgr
{
    FIFOFileQueue *m_queue;
    NSMutableDictionary *m_inQueueCommentsForWCObject;
    NSMutableArray *m_failedCommentQueue;
    NSMutableArray *m_failedLikeQueue;
    int m_uploadingCount;
    id <WCCommentUploadMgrDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCommentUploadMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)doInputAreaReportIfNeededWithCommentItem:(id)arg1;
- (_Bool)loadFailedQueue;
- (_Bool)saveFailedLikeQueue;
- (_Bool)saveFailedCommentQueue;
- (void)setTopTaskFailWithRet:(int)arg1;
- (void)deleteFailedComment:(id)arg1;
- (id)getFailedLike;
- (id)getFailedComments;
- (void)onNewSyncOplogOK;
- (void)wc_MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)ww_MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)wc_doComment:(id)arg1;
- (_Bool)ww_doComment:(id)arg1;
- (_Bool)doComment:(id)arg1;
- (void)tryStartNextTask;
- (void)pushBackTopTask;
- (void)popTopTask;
- (void)removeCommentFromWCObjectCache:(id)arg1;
- (void)addCommentToWCObjectCache:(id)arg1;
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


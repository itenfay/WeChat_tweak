//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, WCFinderUploadCdnMgr, WCFinderUploadDraftTask;
@protocol WCFinderDraftUploadDraftMgrDelegate;

@interface WCFinderDraftUploadDraftMgr : NSObject
{
    id <WCFinderDraftUploadDraftMgrDelegate> _delegate;
    WCFinderUploadCdnMgr *_uploadMgr;
    NSMutableDictionary *_progressMap;
    NSMutableArray *_pendingTasks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pendingTasks; // @synthesize pendingTasks=_pendingTasks;
@property(retain, nonatomic) NSMutableDictionary *progressMap; // @synthesize progressMap=_progressMap;
@property(retain, nonatomic) WCFinderUploadCdnMgr *uploadMgr; // @synthesize uploadMgr=_uploadMgr;
@property(nonatomic) __weak id <WCFinderDraftUploadDraftMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onProgressValueDidUpdate:(id)arg1;
- (void)onFinderUploadMgrIdle:(id)arg1;
- (void)tryUploadDraftTask;
@property(readonly, nonatomic) WCFinderUploadDraftTask *currentDraftTask;
- (void)onTaskFailed:(id)arg1 info:(id)arg2;
- (void)onTaskFailedWithId:(id)arg1 info:(id)arg2;
- (void)onTaskDone:(id)arg1 info:(id)arg2;
- (void)onTaskDoneWithId:(id)arg1 info:(id)arg2;
- (void)onFinderDraftPostSessionFailedWithErrorType:(long long)arg1 draftId:(id)arg2;
- (void)onFinderDraftPostSessionSuccess:(id)arg1 draftId:(id)arg2;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)finishUploadMusicTrackItem:(id)arg1 infos:(id)arg2;
- (void)doPostMusicTrackVideoItem:(id)arg1;
- (void)doPostMusicTrackPicItem:(id)arg1;
- (void)doPostMusicTrackItem:(id)arg1;
- (void)finishUploadMVDraft:(id)arg1 infos:(id)arg2;
- (void)doPostMusicDraft:(id)arg1;
- (id)prepareMVTrackItemsForDraft:(id)arg1;
- (void)uploadMusicDraft:(id)arg1;
- (void)checkLongVideoCompress:(id)arg1;
- (void)uploadBackgroundLongVideoDraft:(id)arg1;
- (void)failedPostDraft:(id)arg1 infos:(id)arg2;
- (void)finishUploadFeedDraft:(id)arg1 infos:(id)arg2;
- (void)doUploadFeedDraft:(id)arg1;
- (void)uploadFeedDraft:(id)arg1 subTask:(id)arg2;
- (void)deleteTaskWithDraft:(id)arg1;
- (void)deleteDraft:(id)arg1;
- (void)uploadDraft:(id)arg1;
- (id)progressForDraftId:(id)arg1;
- (void)bindProgress:(id)arg1 progress:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


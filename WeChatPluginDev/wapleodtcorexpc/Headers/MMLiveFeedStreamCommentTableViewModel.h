//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMLiveFeedStreamCommentTableViewModel
{
    _Bool _needTableViewAutoScrollToRereshBeforeUnDisplay;
    _Bool _hasSuccessLoadLocalDataAfterDisplay;
    _Bool _hasSuccessFetchRemoteDataAfterDisplay;
}

@property(nonatomic) _Bool hasSuccessFetchRemoteDataAfterDisplay; // @synthesize hasSuccessFetchRemoteDataAfterDisplay=_hasSuccessFetchRemoteDataAfterDisplay;
@property(nonatomic) _Bool hasSuccessLoadLocalDataAfterDisplay; // @synthesize hasSuccessLoadLocalDataAfterDisplay=_hasSuccessLoadLocalDataAfterDisplay;
@property(nonatomic) _Bool needTableViewAutoScrollToRereshBeforeUnDisplay; // @synthesize needTableViewAutoScrollToRereshBeforeUnDisplay=_needTableViewAutoScrollToRereshBeforeUnDisplay;
- (void)setLoadingFirstRemoteData:(_Bool)arg1;
- (void)setLoadingFirstLocalData:(_Bool)arg1;
- (_Bool)calculateCellFrameAsync;
- (void)onMMLiveCommentDataResetForTaskId:(id)arg1 boxId:(id)arg2;
- (void)onMMLiveCommentDataUpdateForTaskId:(id)arg1 boxId:(id)arg2 isHistoryComment:(_Bool)arg3;
- (void)loopMetricsCollection:(id)arg1 didFinishCollectingMetrics:(id)arg2;
- (struct CGPoint)convertLocation:(struct CGPoint)arg1 fromCellToTableView:(id)arg2;
- (void)checkisFirstRemoteDataLoaded;
- (void)checkisFirstLocalDataLoaded;
- (void)checkIsHasTrackingData:(_Bool)arg1;
- (unsigned long long)getCurrentUnReadCountForDisplay;
- (void)handleForCommentContentViewDisplay:(_Bool)arg1;
- (void)prepareTableViewCellForReuse:(id)arg1;
- (id)createCommentPubbleViewWithCommentItem:(id)arg1 taskId:(id)arg2;
- (Class)commentTableViewCellFrameClass;
- (void)initData;
- (id)commentDataMgr;
- (id)initWithTaskId:(id)arg1 boxId:(id)arg2;
- (id)initWithTaskId:(id)arg1;
- (long long)commentCellFrameStyle;

@end


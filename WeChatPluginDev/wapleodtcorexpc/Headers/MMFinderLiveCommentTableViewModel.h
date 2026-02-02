//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveCommentDataAppendLogic;

@interface MMFinderLiveCommentTableViewModel
{
    _Bool _needTableViewAutoScrollToRereshBeforeUnDisplay;
    _Bool _hasSuccessLoadLocalDataAfterDisplay;
    _Bool _hasSuccessFetchRemoteDataAfterDisplay;
    long long _commentContentState;
    CDUnknownBlockType _finderCellModelDidTapBlock;
    CDUnknownBlockType _actionInvokeBlock;
    CDUnknownBlockType _getSingleEnableCommentCallback;
    CDUnknownBlockType _tableVMDidDoubleTapBlock;
    CDUnknownBlockType _localCommentAppendCallback;
    CDUnknownBlockType _tableVMRetryPostBlock;
    MMFinderLiveCommentDataAppendLogic *_commentDataAppendLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveCommentDataAppendLogic *commentDataAppendLogic; // @synthesize commentDataAppendLogic=_commentDataAppendLogic;
@property(nonatomic) _Bool hasSuccessFetchRemoteDataAfterDisplay; // @synthesize hasSuccessFetchRemoteDataAfterDisplay=_hasSuccessFetchRemoteDataAfterDisplay;
@property(nonatomic) _Bool hasSuccessLoadLocalDataAfterDisplay; // @synthesize hasSuccessLoadLocalDataAfterDisplay=_hasSuccessLoadLocalDataAfterDisplay;
@property(nonatomic) _Bool needTableViewAutoScrollToRereshBeforeUnDisplay; // @synthesize needTableViewAutoScrollToRereshBeforeUnDisplay=_needTableViewAutoScrollToRereshBeforeUnDisplay;
@property(copy, nonatomic) CDUnknownBlockType tableVMRetryPostBlock; // @synthesize tableVMRetryPostBlock=_tableVMRetryPostBlock;
@property(copy, nonatomic) CDUnknownBlockType localCommentAppendCallback; // @synthesize localCommentAppendCallback=_localCommentAppendCallback;
@property(copy, nonatomic) CDUnknownBlockType tableVMDidDoubleTapBlock; // @synthesize tableVMDidDoubleTapBlock=_tableVMDidDoubleTapBlock;
@property(copy, nonatomic) CDUnknownBlockType getSingleEnableCommentCallback; // @synthesize getSingleEnableCommentCallback=_getSingleEnableCommentCallback;
@property(copy, nonatomic) CDUnknownBlockType actionInvokeBlock; // @synthesize actionInvokeBlock=_actionInvokeBlock;
@property(copy, nonatomic) CDUnknownBlockType finderCellModelDidTapBlock; // @synthesize finderCellModelDidTapBlock=_finderCellModelDidTapBlock;
@property(nonatomic) long long commentContentState; // @synthesize commentContentState=_commentContentState;
- (void)hideHotWords;
- (void)showHotWord:(id)arg1 prevCount:(long long)arg2 currentCount:(long long)arg3;
- (void)updateEnableCustomData;
- (void)setLoadingFirstRemoteData:(_Bool)arg1;
- (void)setLoadingFirstLocalData:(_Bool)arg1;
- (_Bool)calculateCellFrameAsync;
- (void)onMMFinderGroupLiveChatLocalMessageLoaded:(id)arg1;
- (void)onMMFinderGroupLiveChatMessageSuccessLoaded:(id)arg1;
- (void)onMMLiveCommentDataResetForTaskId:(id)arg1 boxId:(id)arg2;
- (void)onMMLiveCommentDataLoadedForTaskId:(id)arg1 boxId:(id)arg2;
- (void)onMMLiveCommentDataInsertPreForTaskId:(id)arg1 boxId:(id)arg2;
- (void)onMMLiveCommentDataUpdateForTaskId:(id)arg1 boxId:(id)arg2 isHistoryComment:(_Bool)arg3;
- (_Bool)canAddHotWords;
- (void)loopMetricsCollection:(id)arg1 didFinishCollectingMetrics:(id)arg2;
- (void)onInsertLiveCommentFail;
- (void)onGetFinderLiveAppMsgListWithTaskId:(id)arg1 appMsgList:(id)arg2 isHistoryMsg:(_Bool)arg3;
- (struct CGPoint)convertLocation:(struct CGPoint)arg1 fromCellToTableView:(id)arg2;
- (void)checkisFirstRemoteDataLoaded;
- (void)checkisFirstLocalDataLoaded;
- (void)checkIsHasTrackingData:(_Bool)arg1;
- (void)handleForCommentContentViewDisplay:(_Bool)arg1;
- (id)finderLiveTask;
- (id)appendCommentContentFromMySelf:(id)arg1 toUser:(id)arg2 postType:(unsigned long long)arg3 poiAddrSubStr:(id)arg4 extra:(id)arg5;
- (id)appendCommentContentFromMySelf:(id)arg1 toUser:(id)arg2 postType:(unsigned long long)arg3 extra:(id)arg4;
- (id)appendCommentContentFromMySelf:(id)arg1 toDataItem:(id)arg2;
- (void)prepareTableViewCellForReuse:(id)arg1;
- (id)createCommentPubbleViewWithCommentItem:(id)arg1 taskId:(id)arg2;
- (Class)commentTableViewCellFrameClass;
- (id)commentDataMgr;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)initData;
- (id)initWithTaskId:(id)arg1 boxId:(id)arg2;
- (id)initWithTaskId:(id)arg1;
- (long long)commentCellFrameStyle;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCGroupMgrExt-Protocol.h"

@class NSArray, NSString, WCCommentItem, WCDataItem, WCMediaItem, WCSNSMessage, WCUploadTask;

@protocol WCFacadeExt <WCGroupMgrExt>

@optional
- (void)onTimeLineVcWillAppear;
- (void)onTimeLineVcWillPop;
- (void)onDataItem:(WCDataItem *)arg1 likeFlagChanged:(_Bool)arg2;
- (void)onSetWCMessageNotifyFinished:(long long)arg1 dataItemID:(NSString *)arg2 opFlag:(_Bool)arg3;
- (void)onMediaVideoDownloadSuccess:(WCMediaItem *)arg1;
- (void)onMediaItemSizeDidChange:(WCMediaItem *)arg1;
- (void)onUploadTaskDidFail:(WCUploadTask *)arg1;
- (void)onSnsNewCommitFinished:(WCDataItem *)arg1 task:(WCUploadTask *)arg2;
- (void)onHomepage:(NSString *)arg1 type:(long long)arg2 clearJumpState:(id)arg3;
- (void)onHomepage:(NSString *)arg1 type:(long long)arg2 updatePrePage:(id)arg3;
- (void)onHomepage:(NSString *)arg1 type:(long long)arg2 fetchDataBeforeJumpEnd:(NSString *)arg3 success:(_Bool)arg4;
- (void)onHomepage:(NSString *)arg1 type:(long long)arg2 updateYearMonthData:(NSArray *)arg3;
- (void)onHomepage:(NSString *)arg1 type:(long long)arg2 updateWithResult:(long long)arg3 withAddedData:(NSArray *)arg4 changedData:(NSArray *)arg5 deletedData:(NSArray *)arg6 tips:(NSString *)arg7;
- (void)onHomepageClearJumpState;
- (void)onHomepagePrePageUpdate;
- (void)onHomepageFetchDataBeforeJumpEnd:(NSString *)arg1 success:(_Bool)arg2;
- (void)onHomepageYearMonthDataUpdated:(NSArray *)arg1;
- (void)onHomepageUpdate:(long long)arg1 withAdded:(NSArray *)arg2 andChanged:(NSArray *)arg3 andDeleted:(NSArray *)arg4 andTip:(NSString *)arg5;
- (void)onAddDownloadQueue:(WCMediaItem *)arg1 downloadType:(long long)arg2;
- (void)onBeginDownload:(WCMediaItem *)arg1 downloadType:(long long)arg2;
- (void)onCancelDownloadSuccess:(WCMediaItem *)arg1 downloadType:(long long)arg2;
- (void)onDownloadFail:(WCMediaItem *)arg1 downloadType:(long long)arg2;
- (void)onDownloadFinish:(WCMediaItem *)arg1 downloadType:(long long)arg2;
- (void)onDownloadMediaProcessChange:(WCMediaItem *)arg1 downloadType:(long long)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)onModifyDataItemStarStatusFinished:(long long)arg1 dataItem:(WCDataItem *)arg2;
- (void)onModifyTogetherFinished:(long long)arg1 itemID:(NSString *)arg2 dataItem:(WCDataItem *)arg3;
- (void)onTogetherBadgesChanged;
- (void)onHotVideoOrHotImageItemChange;
- (void)onWCPostPrivacyChanged;
- (void)onBGStorageUpdated;
- (void)onWCBackgroundChanged;
- (void)onAdvertiseCommentReturn:(WCDataItem *)arg1 comment:(WCCommentItem *)arg2;
- (void)onSecurityVerificationFinished:(_Bool)arg1 type:(unsigned long long)arg2 dataItem:(WCDataItem *)arg3;
- (void)onCancelLikeFailureQueueChange;
- (void)onCommentOrLikeFailQueueChange;
- (void)onCommentReturn:(WCDataItem *)arg1 comment:(WCCommentItem *)arg2;
- (void)onCommentSend:(WCDataItem *)arg1 comment:(WCCommentItem *)arg2;
- (void)onDeleteUploadFailedHBDataItem:(WCDataItem *)arg1;
- (void)onModifyDataItemShareScopeFinished:(long long)arg1 dataItemID:(NSString *)arg2;
- (void)onSetDataItemPublicFinished:(long long)arg1 dataItemID:(NSString *)arg2;
- (void)onSetDataItemPrivateFinished:(long long)arg1 dataItemID:(NSString *)arg2;
- (void)onCommentItemDeleteFinished:(long long)arg1 commentItemID:(NSString *)arg2 dataItemID:(NSString *)arg3;
- (void)onDataItemDeleteFinished:(long long)arg1 dataItemID:(NSString *)arg2;
- (void)onUpdateDataItemDetailFinished:(long long)arg1 itemId:(NSString *)arg2 dataItem:(WCDataItem *)arg3;
- (void)onReveiceWCDeleteMessage:(NSArray *)arg1;
- (void)onMessageUnReadCountChanged;
- (void)onReveiceLikeMessages:(NSArray *)arg1;
- (void)onReveiceCommentMessages:(NSArray *)arg1;
- (void)onReveiceWCMessage:(WCSNSMessage *)arg1;
- (void)onLatestWCObjectChanged:(WCDataItem *)arg1;
- (void)onTimelineServerError;
- (void)onNoMoreTimelineData;
- (void)onDataChangedWithAdded:(NSArray *)arg1 andChanged:(NSArray *)arg2 andDeleted:(NSArray *)arg3;
- (void)onPrePageUpdate:(_Bool)arg1;
@end


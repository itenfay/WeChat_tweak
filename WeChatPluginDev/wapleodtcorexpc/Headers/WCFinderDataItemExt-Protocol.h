//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderObjectHelpPromotionInfo, FinderOriginalDesc, FinderPlayHistoryInfo, NSArray, NSString, OriginalSoundInfo, WCFinderAdEntryItem, WCFinderComment, WCFinderDataItem, WCFinderJumpInfoContainer, WCFinderUploadProgressModel;

@protocol WCFinderDataItemExt <NSObject>

@optional
- (void)onFeedBulletSwitchChangedNeedReflush:(NSString *)arg1;
- (void)onFeedExtPersmissionFlagChanged:(NSString *)arg1 flag:(int)arg2;
- (void)onFinderAsyncLoadInfoSuccessful:(NSString *)arg1 scene:(int)arg2;
- (void)onFinderDataItem:(NSString *)arg1 modifyOriginalInfo:(FinderOriginalDesc *)arg2;
- (void)onGetCommentDetailWithEncryptId:(NSString *)arg1 dataItem:(WCFinderDataItem *)arg2;
- (void)onGetCommentDetailFromServer:(NSString *)arg1 dataItem:(WCFinderDataItem *)arg2;
- (void)onFinderDataItemJumpCarouselUpdateWithTid:(NSString *)arg1 jumpInfoList:(NSArray *)arg2;
- (void)onFinderDataItemPlayHistoryInfoUpdateWithTid:(NSString *)arg1 playHistoryInfo:(FinderPlayHistoryInfo *)arg2;
- (void)onFinderDataItemPromotionInfoUpdateWithTid:(NSString *)arg1 promotionInfo:(FinderObjectHelpPromotionInfo *)arg2;
- (void)onFinderDataItemOriginalSoundInfoUpdateWithTid:(NSString *)arg1 originalSoundInfo:(OriginalSoundInfo *)arg2;
- (void)onFinderDataItemHotCommentUpdateWithTid:(NSString *)arg1 hotCommentList:(NSArray *)arg2;
- (void)onFinderDataItemWithTid:(NSString *)arg1 asyncRecommendInfoUpdatedIncommentScene:(int)arg2;
- (void)onFinderDataItemWithTid:(NSString *)arg1 jumpInfoContainerChanged:(WCFinderJumpInfoContainer *)arg2 commentScene:(int)arg3 noExposeReport:(_Bool)arg4;
- (void)onFinderDataItemWithTid:(NSString *)arg1 jumpInfoContainerChanged:(WCFinderJumpInfoContainer *)arg2 commentScene:(int)arg3;
- (void)onFinderDataItemWithTid:(NSString *)arg1 adEntryItemChanged:(WCFinderAdEntryItem *)arg2;
- (void)onFinderDataStickyTopStateChanged:(WCFinderDataItem *)arg1;
- (void)onFinderLiveStartFailWith:(NSString *)arg1 errorType:(int)arg2;
- (void)onFinderDataItemLiveClose:(NSString *)arg1;
- (void)onFinderDataItemEncodingProgress:(double)arg1;
- (void)onFinderTargetDataItemMediaURLIsExpired:(NSString *)arg1;
- (void)onFinderDataItemMediaURLIsExpired:(NSString *)arg1;
- (void)onFinderDataCacheHasBeCleaned;
- (void)onFinderTimelineNeedReload;
- (void)onFinderUserpageUpdateWithDataItems:(NSArray *)arg1;
- (void)onFinderDataItemCleanBySecurityUpgrade;
- (void)onFinderDataItemDeleteBySpamList:(NSArray *)arg1;
- (void)onFinderDataItemBeSetPrivateWithTid:(NSString *)arg1;
- (void)onFinderDataItemBeDeletedWithTid:(NSString *)arg1;
- (void)onFinderDataItemPostSubCommentFail:(WCFinderComment *)arg1 tid:(NSString *)arg2 rootCommentID:(unsigned long long)arg3 retCode:(int)arg4;
- (void)onFinderDataItemPostSubCommentSuccessful:(WCFinderComment *)arg1 tid:(NSString *)arg2 rootCommentID:(unsigned long long)arg3;
- (void)onFinderDataItemPostSubComment:(WCFinderComment *)arg1 tid:(NSString *)arg2 rootCommentID:(unsigned long long)arg3;
- (void)onFinderDataItemCommentRecommendFlagChangeWithTid:(NSString *)arg1 comment:(WCFinderComment *)arg2;
- (void)onFinderDataItemCommentLikeStatusChangeWithTid:(NSString *)arg1 commentID:(unsigned long long)arg2 rootCommentID:(unsigned long long)arg3 likeStatus:(_Bool)arg4;
- (void)onFinderDataItemDeleteComment:(WCFinderComment *)arg1 rootCommentID:(unsigned long long)arg2 tid:(NSString *)arg3;
- (void)onFinderDataItemPostTemplateCommentSuccessfulWithCommentId:(unsigned long long)arg1 targetFeedId:(NSString *)arg2 postFeedID:(NSString *)arg3;
- (void)onFinderDataItemPostCommentSuccessful:(WCFinderComment *)arg1 tid:(NSString *)arg2;
- (void)onFinderDataItemPostCommentFailBySpecialError:(WCFinderComment *)arg1 errorCode:(int)arg2 errorMsg:(NSString *)arg3;
- (void)onFinderDataItemPostCommentFail:(WCFinderComment *)arg1 tid:(NSString *)arg2;
- (void)onFinderDataItemPostComment:(WCFinderComment *)arg1 tid:(NSString *)arg2;
- (void)onFinderDataItemRePostWithTid:(NSString *)arg1;
- (void)onFinderDataItemPostFailWithTid:(NSString *)arg1 errorType:(long long)arg2;
- (void)onFinderDataItemPostProgressWithTid:(NSString *)arg1 progress:(WCFinderUploadProgressModel *)arg2;
- (void)onFinderPostSessionUpLoadFailWithTid:(NSString *)arg1 errorType:(long long)arg2;
- (void)onFinderDataItemDeleteByUserPageMergeWithTidList:(NSArray *)arg1;
- (void)onFinderDataItemPrivateUpdate:(NSString *)arg1 isPrivate:(_Bool)arg2;
- (void)onFinderDataItemFoldLayoutHasUpdate:(NSString *)arg1 scene:(int)arg2;
- (void)onFinderDataItemDeleteFromScene:(int)arg1 tid:(NSString *)arg2 toastWording:(NSString *)arg3;
- (void)onFinderDataItemCancelFav:(NSString *)arg1;
- (void)onFinderDataItemDelete:(NSString *)arg1;
- (void)onFinderDataItem:(NSString *)arg1 updateFavStateByKeyExtention:(_Bool)arg2;
- (void)onFinderDataItem:(NSString *)arg1 updateFavStateByExtention:(_Bool)arg2;
- (void)onFinderDataItemIsLikedFailed:(NSString *)arg1;
- (void)onFinderDataItemIsLikedUpdateByExtention:(NSString *)arg1;
- (void)onFinderDataItemServerIsLikedUpdateByKeyExtension:(NSString *)arg1;
- (void)onFinderDataItemIsLikedUpdateByKeyExtention:(NSString *)arg1;
- (void)onFinderDataItemUpdate:(WCFinderDataItem *)arg1 scene:(int)arg2 source:(long long)arg3;
- (void)onFinderDataItemUpdate:(WCFinderDataItem *)arg1;
@end


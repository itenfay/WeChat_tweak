//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderFullFeedCommonVMDelegate-Protocol.h"

@class NSArray, NSData, NSIndexPath, NSIndexSet, NSString, WCFinderFeedContentVM, WCFinderFeedLayoutContentVM;

@protocol WCFinderFeedRecommendVMDelegate <WCFinderFullFeedCommonVMDelegate>

@optional
- (void)onFeedVMFetchSplitBubbleLayoutData;
- (void)onFeedShowStatusRefreshTipsWithTid:(NSString *)arg1;
- (void)onFeedVMFetchLocalRedDotDataItem;
- (void)feedRecommendScrollToTargetIndexPath:(NSIndexPath *)arg1 animated:(_Bool)arg2;
- (NSString *)feedRecommendVCCurrentForceTid;
- (_Bool)onFeedRecommendGetHotTabNeedTopRefresh;
- (NSData *)onFeedRecommendGetHotTabLastBuff;
- (void)onFeedRecommendVMShouldReloadAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)WCFinderFeedRecommendVMIsSelected;
- (void)onFeedVMLiveDataRefreshData;
- (void)onFeedVMLiveDataFetchFinish:(_Bool)arg1;
- (void)onFeedVMLiveDataNoMore;
- (void)onLayoutContentVMDidUpdate:(WCFinderFeedLayoutContentVM *)arg1 oldLayoutVM:(WCFinderFeedLayoutContentVM *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)onFeedPrivateMsgTipsUpdate;
- (void)onFeedAllDataItemsNeedClean;
- (void)onFeedVMDataItemMediaResourceIsDeleted;
- (void)onFeedVMDataTextDidShowFullText:(WCFinderFeedContentVM *)arg1;
- (NSArray *)otherTabUnreadCacheFeeds;
- (void)onFeedVMLiveDataChanged;
- (void)onFeedVMCommentFailNeedReload;
- (void)onFeedVMDataWillRemoved:(WCFinderFeedContentVM *)arg1;
- (void)onFeedVMDataChangedAtIndexPath:(NSIndexPath *)arg1 contentVM:(WCFinderFeedContentVM *)arg2 animated:(_Bool)arg3;
- (void)onFeedVMDataFetchSuccess;
- (void)onFeedVMDataLocalEmpty;
- (void)onFeedVMDataFootRefreshError;
- (void)onFeedVMDataFootRefreshNoMore;
- (void)onFeedVMDataPullRefreshError:(unsigned long long)arg1;
- (void)onFeedVMDataPullRefreshNoMore;
- (void)onFeedServerFetchHistorySuccess:(_Bool)arg1;
- (void)onFeedServerFetchSuccess;
- (void)onFeedVMInsertContentVM:(WCFinderFeedContentVM *)arg1 section:(long long)arg2;
- (void)onFeedVMDataPullRefreshStopLoading;
- (void)onFeedVMDataChangedByPublish:(NSIndexSet *)arg1;
- (void)onFeedRevertPlayerState;
- (void)onFeedVMDataAppendFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onFeedVMDataChangedWithDeletedIndexSet:(NSIndexSet *)arg1;
- (void)onFeedVMDataDeleteWithIndexSet:(NSIndexSet *)arg1;
- (void)onFeedVMDataAppend:(NSArray *)arg1;
- (void)onFeedVMDataChanged;
- (void)onFeedVMWillChangeOriginDataIndex:(_Bool)arg1;
@end


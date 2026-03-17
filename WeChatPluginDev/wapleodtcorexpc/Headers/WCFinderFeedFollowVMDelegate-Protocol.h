//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderFullFeedCommonVMDelegate-Protocol.h"

@class NSArray, NSData, NSIndexPath, NSIndexSet, NSString, WCFinderDataItem, WCFinderFeedContentVM;

@protocol WCFinderFeedFollowVMDelegate <WCFinderFullFeedCommonVMDelegate>

@optional
- (_Bool)showMachineTab;
- (void)onFeedVMFetchSplitBubbleLayoutData;
- (void)onFeedVMFetchLocalRedDotDataItem;
- (int)followVMGetVCCommentScene;
- (void)onFeedServerNeedUpdateDataFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)onFeedShowStatusRefreshTipsWithTid:(NSString *)arg1;
- (void)feedFollowScrollToTargetIndexPath:(NSIndexPath *)arg1 animated:(_Bool)arg2;
- (NSString *)feedFollowVCCurrentForceTid;
- (void)onFeedFollowVMUploadSucWithDataItem:(WCFinderDataItem *)arg1;
- (_Bool)onFeedFollowVMGetHotTabNeedTopRefresh;
- (NSData *)onFeedFollowVMGetHotTabLastBuff;
- (void)onFeedFollowVMShouldReloadAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)WCFinderFeedFollowVMIsSelected;
- (void)onFeedVMLiveDataRefreshData;
- (void)onFeedPrivateMsgTipsUpdate;
- (void)onFeedAllDataItemsNeedClean;
- (void)onFeedVMDataItemMediaResourceIsDeleted;
- (void)onFeedVMDataTextDidShowFullText:(WCFinderFeedContentVM *)arg1;
- (void)onFeedVMLiveDataFetchFinish:(_Bool)arg1;
- (void)onFeedVMLiveDataNoMore;
- (void)onFeedVMLiveDataChanged;
- (void)onFeedVMGetNewMsg;
- (void)onFeedVMCommentFailNeedReload;
- (void)onFeedVMDataWillRemovedIndex:(long long)arg1;
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
- (void)onFeedVMDataChangedByPublish:(NSIndexSet *)arg1 dataItem:(WCFinderDataItem *)arg2;
- (void)onFeedRevertPlayerState;
- (void)onFeedVMDataAppendFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onFeedVMDataAppend:(NSArray *)arg1;
- (void)onFeedVMDataChangedWithDeletedIndexSet:(NSIndexSet *)arg1;
- (void)onFeedVMDataDeleteWithIndexSet:(NSIndexSet *)arg1;
- (void)onFeedVMDataChanged;
- (void)onFeedVMWillChangeOriginDataIndex:(_Bool)arg1;
@end


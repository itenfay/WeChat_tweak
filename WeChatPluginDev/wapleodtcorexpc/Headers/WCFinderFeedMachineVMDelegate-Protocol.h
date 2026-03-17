//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderFullFeedCommonVMDelegate-Protocol.h"

@class DelayBubble, FinderSyncTipsShowInfo, NSArray, NSIndexPath, NSIndexSet, NSString, WCFinderDataItem, WCFinderFeedContentVM, WCFinderRedDotCtrlInfo;

@protocol WCFinderFeedMachineVMDelegate <WCFinderFullFeedCommonVMDelegate>

@optional
- (void)onFeedVMFetchSucBySpecialRequestScene:(int)arg1;
- (void)onFeedVMFetchSplitBubbleLayoutData;
- (void)onFeedVMFetchLocalRedDotDataItem;
- (void)onFeedPrivateMsgTipsUpdate;
- (void)onFeedAllDataItemsNeedClean;
- (void)onFeedVMDataItemMediaResourceIsDeleted;
- (void)onFeedVMDataTextDidShowFullText:(WCFinderFeedContentVM *)arg1;
- (NSArray *)otherTabUnreadCacheFeeds;
- (void)onFeedVMGetNewMsg;
- (void)onFeedVMCommentFailNeedReload;
- (void)onFeedVMDataChangedAtIndexPath:(NSIndexPath *)arg1 contentVM:(WCFinderFeedContentVM *)arg2 animated:(_Bool)arg3;
- (void)onFeedVMDataFetchByShareTypeSuccessWithTid:(NSString *)arg1;
- (void)onFeedVMDataFetchSuccess;
- (void)onFeedVMDataLocalEmpty;
- (void)onFeedVMDataFootRefreshError;
- (void)onFeedVMDataFootRefreshNoMore;
- (void)onFeedVMDataPullRefreshError:(unsigned long long)arg1;
- (void)onFeedVMDataPullRefreshNoMore;
- (void)onFeedServerFetchHistorySuccess:(_Bool)arg1;
- (void)onFeedServerFetchSuccess;
- (void)onFeedVMInsertContentVM:(WCFinderFeedContentVM *)arg1 section:(long long)arg2;
- (void)onFeedRevertPlayerState;
- (void)onFeedVMDataAppend:(NSArray *)arg1;
- (void)onFeedVMDataChangedWithDeletedIndexSet:(NSIndexSet *)arg1;
- (void)onFeedVMDataChangedByPublish:(NSIndexSet *)arg1 dataItem:(WCFinderDataItem *)arg2;
- (void)onFeedMachineVMUploadSucWithDataItem:(WCFinderDataItem *)arg1;
- (void)onFeedVMDataChanged;
- (void)onFeedVMWillChangeOriginDataIndex:(_Bool)arg1;
- (void)onStreamTipsShowInfoUpdate:(FinderSyncTipsShowInfo *)arg1 delayBubble:(DelayBubble *)arg2 originCtrlInfo:(WCFinderRedDotCtrlInfo *)arg3;
- (void)onFeedShowStatusRefreshTipsWithTid:(NSString *)arg1;
- (void)feedMachineScrollToTargetIndexPath:(NSIndexPath *)arg1 animated:(_Bool)arg2;
- (NSString *)feedMachineVCCurrentForceTid;
- (_Bool)WCFinderFeedMachineVMIsSelected;
@end


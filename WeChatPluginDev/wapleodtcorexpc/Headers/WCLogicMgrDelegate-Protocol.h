//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SnsObjectOpChangeVisibility, WCDataItem;

@protocol WCLogicMgrDelegate <NSObject>

@optional
- (void)onModifyDataItem:(WCDataItem *)arg1 isStarred:(_Bool)arg2 result:(long long)arg3;
- (void)onModifyDataItemShareScopeFinished:(long long)arg1 dataItemID:(NSString *)arg2 visibilityChangeOp:(SnsObjectOpChangeVisibility *)arg3;
- (void)onSetDataItemTogetherFinished:(long long)arg1 dataItemID:(NSString *)arg2 dataItem:(WCDataItem *)arg3 originalDataItem:(WCDataItem *)arg4;
- (void)onAddBrandResult:(NSString *)arg1 andResult:(_Bool)arg2;
- (void)onSetWCMessageNotifyFinished:(long long)arg1 dataItemID:(NSString *)arg2 opFlag:(_Bool)arg3;
- (void)onAdvertiseItemDeleted:(NSString *)arg1;
- (void)onUpdateDataItemDetailFinished:(long long)arg1 itemId:(NSString *)arg2 dataItem:(WCDataItem *)arg3;
- (void)onSetDataItemPublicFinished:(long long)arg1 dataItemID:(NSString *)arg2;
- (void)onSetDataItemPrivateFinished:(long long)arg1 dataItemID:(NSString *)arg2;
- (void)onCancelLikeWithResult:(long long)arg1 commentID:(NSString *)arg2 dataItemID:(NSString *)arg3 context:(id)arg4;
- (void)onCommentItemDeleteFinished:(long long)arg1 commentItemID:(NSString *)arg2 dataItemID:(NSString *)arg3 context:(id)arg4;
- (void)onDataItemDeleteWhthHomepageYearMonthInfosUpdated:(NSArray *)arg1;
- (void)onDataItemDeleteFinished:(long long)arg1 dataItemID:(NSString *)arg2;
@end


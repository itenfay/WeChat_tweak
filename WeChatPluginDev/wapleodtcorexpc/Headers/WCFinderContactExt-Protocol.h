//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveInfo, FinderLiveNoticeInfo, FinderLiveNoticeListInfo, NSArray, NSString, WCFinderContact, WCFinderDataItem;

@protocol WCFinderContactExt <NSObject>

@optional
- (void)onFinderBizContactFollowStatusUpdate:(WCFinderContact *)arg1;
- (void)onFinderContactRefuseListAdded:(NSString *)arg1 wxUsernames:(NSArray *)arg2;
- (void)onFinderContactLastestLiveObjectUpdate:(WCFinderDataItem *)arg1;
- (void)onFinderContactLastestLiveInfoUpdate:(FinderLiveInfo *)arg1;
- (void)onFinderContactLiveUpdateWithNoticeInfo:(FinderLiveNoticeInfo *)arg1 noticeList:(FinderLiveNoticeListInfo *)arg2 commentScene:(int)arg3;
- (void)onFinderContactLivingStatusHasChange:(WCFinderContact *)arg1;
- (void)onFinderContactLikeFeedListHasChange:(WCFinderContact *)arg1 isRefuse:(_Bool)arg2;
- (void)onFinderContactAudienceMuteSwitchChange:(WCFinderContact *)arg1;
- (void)onFinderContactFollowUnFollowStart;
- (void)onFinderContactFollowStatusUpdateFailure:(WCFinderContact *)arg1;
- (void)onFinderContactFollowListHasChange:(WCFinderContact *)arg1;
- (void)onFinderContactFollowStatusRealUpdate:(WCFinderContact *)arg1;
- (void)onFinderContactFollowStatusUpdate:(WCFinderContact *)arg1;
- (void)onFinderCreateSuccessful:(WCFinderContact *)arg1;
- (void)onFinderContactDelete:(WCFinderContact *)arg1;
- (void)onFinderContactUpdate:(WCFinderContact *)arg1;
@end


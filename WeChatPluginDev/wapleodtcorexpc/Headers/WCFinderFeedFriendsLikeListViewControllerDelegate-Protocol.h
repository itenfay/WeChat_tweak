//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderFeedFriendsLikeListViewController, WCFinderLikeInfo;

@protocol WCFinderFeedFriendsLikeListViewControllerDelegate <NSObject>

@optional
- (_Bool)canShowMore;
- (_Bool)shouldShowFirstLikeLabel;
- (void)onFriendsLikeListViewControllerDisappear;
- (void)onClickLikedListContactWithWith:(WCFinderFeedFriendsLikeListViewController *)arg1 LikeInfo:(WCFinderLikeInfo *)arg2 ObjectID:(NSString *)arg3;
- (void)onClickLikedListClickMoreActionWith:(WCFinderFeedFriendsLikeListViewController *)arg1 ObjectId:(NSString *)arg2;
- (void)onClickLikedListBtnWithUsername:(NSString *)arg1;
@end


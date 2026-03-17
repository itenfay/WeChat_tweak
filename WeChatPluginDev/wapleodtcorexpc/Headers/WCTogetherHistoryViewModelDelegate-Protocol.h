//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, WCDataItem, WCMediaItem, WCTogetherFeedViewItem, WCTogetherFriendsListViewItem, WCTogetherHistoryViewModel;

@protocol WCTogetherHistoryViewModelDelegate <NSObject>
- (void)togetherViewModel:(WCTogetherHistoryViewModel *)arg1 viewItemDidClickFriendsInfo:(WCTogetherFriendsListViewItem *)arg2;
- (void)togetherViewModel:(WCTogetherHistoryViewModel *)arg1 viewItem:(WCTogetherFeedViewItem *)arg2 didClickMediaWithDataItem:(WCDataItem *)arg3 mediaItem:(WCMediaItem *)arg4;
- (void)togetherViewModel:(WCTogetherHistoryViewModel *)arg1 viewItem:(WCTogetherFeedViewItem *)arg2 didClickContentDetailWithDataItem:(WCDataItem *)arg3;
- (void)togetherViewModel:(WCTogetherHistoryViewModel *)arg1 viewItem:(WCTogetherFeedViewItem *)arg2 didClickLocationInfoWithDataItem:(WCDataItem *)arg3;
- (void)togetherViewModel:(WCTogetherHistoryViewModel *)arg1 viewItem:(WCTogetherFeedViewItem *)arg2 didClickContactInfoWithDataItem:(WCDataItem *)arg3 contact:(CContact *)arg4;
- (void)togetherViewModelDidReloadData:(WCTogetherHistoryViewModel *)arg1;
@end


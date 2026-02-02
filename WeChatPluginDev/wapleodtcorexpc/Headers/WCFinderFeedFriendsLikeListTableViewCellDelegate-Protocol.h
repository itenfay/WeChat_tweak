//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderFeedFriendsLikeListTableViewCell;

@protocol WCFinderFeedFriendsLikeListTableViewCellDelegate <NSObject>

@optional
- (void)likeListTableViewCell:(WCFinderFeedFriendsLikeListTableViewCell *)arg1 onClickMore:(unsigned long long)arg2 notSee:(_Bool)arg3;
- (void)likeListTableViewCell:(WCFinderFeedFriendsLikeListTableViewCell *)arg1 onClickLike:(unsigned long long)arg2 doLike:(_Bool)arg3;
@end


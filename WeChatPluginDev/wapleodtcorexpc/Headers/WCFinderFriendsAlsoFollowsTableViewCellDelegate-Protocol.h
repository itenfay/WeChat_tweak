//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UICollectionViewCell, WCFinderFriendsAlsoFollowsTableViewCell;

@protocol WCFinderFriendsAlsoFollowsTableViewCellDelegate <NSObject>

@optional
- (void)finderFriendsAlsoFollowCellDidClickFollowButton:(WCFinderFriendsAlsoFollowsTableViewCell *)arg1;
- (void)finderFriendsAlsoFollowCell:(WCFinderFriendsAlsoFollowsTableViewCell *)arg1 didClickCoverAtIndex:(unsigned long long)arg2 clickCell:(UICollectionViewCell *)arg3;
@end


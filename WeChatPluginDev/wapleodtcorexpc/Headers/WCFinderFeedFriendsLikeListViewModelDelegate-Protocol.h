//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderFeedFriendsLikeListViewModelDelegate <NSObject>

@optional
- (void)finderFriendsLikeDoLikeFailWithErrorCode:(long long)arg1;
- (void)finderFriendsLikeDoLikeSuccessWithIndex:(unsigned long long)arg1 doLike:(_Bool)arg2;
- (void)finderFriendsLikeOptionFailWithErrorCode:(long long)arg1;
- (void)finderFriendsLikeOptionSuccess:(unsigned long long)arg1;
- (void)finderFeedFriendsLikeListFetchFailWithErrorCode:(long long)arg1;
- (void)finderFeedFriendsLikeListFetchSuccess;
- (void)finderFeedFriendsLikeListGetLocalFailWithErrorCode:(long long)arg1;
- (void)finderFeedFriendsLikeListGetLocalSuccess;
@end


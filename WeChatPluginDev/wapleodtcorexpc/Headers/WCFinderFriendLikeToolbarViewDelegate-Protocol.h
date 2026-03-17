//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, WCFinderFeedContentVM, WCFinderFriendLikeToolbarView;

@protocol WCFinderFriendLikeToolbarViewDelegate <NSObject>

@optional
- (void)finderFinderFriendLikeToolbarViewClickLikeAction:(WCFinderFriendLikeToolbarView *)arg1 contentVM:(WCFinderFeedContentVM *)arg2 isNormalLiked:(_Bool)arg3;
- (void)clickRecommendUrl:(NSURL *)arg1;
- (void)onRefreshFriendUI:(WCFinderFeedContentVM *)arg1;
- (void)onClickFollowLikeBtn:(WCFinderFeedContentVM *)arg1;
- (void)onClickFriendLikeListDetail:(WCFinderFeedContentVM *)arg1;
- (void)onClickWeChatFriendDetail:(NSString *)arg1;
@end


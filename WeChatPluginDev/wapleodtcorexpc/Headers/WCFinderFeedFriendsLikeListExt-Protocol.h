//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCFinderFeedFriendsLikeListExt <NSObject>

@optional
- (void)onFinderFeedFriendsLikeStatusChangedWithObjectID:(NSString *)arg1 index:(unsigned long long)arg2 likeStatus:(_Bool)arg3;
- (void)onFinderFeedFrinedsGetFeedFriendsLikeListSuccessWithObjectID:(NSString *)arg1;
- (void)onFinderFeedFriendsLikeOptionNotInterestingSuccessWithObjectID:(NSString *)arg1;
- (void)onFinderFeedLocalFriendsLikeListDataUpdateByKeyExtension:(NSString *)arg1;
@end


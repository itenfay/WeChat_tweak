//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIView, WCFinderCommentLinkClickInfo, WCFinderFeedContentVM, WCFinderMediaInfo;

@protocol WCFinderMeberShipActivityEvent <NSObject>

@optional
- (void)onActivityFeedClickHeader:(WCFinderFeedContentVM *)arg1;
- (void)onActivityFeedClickPostToolbar;
- (void)onActivityFeedLongPress:(WCFinderFeedContentVM *)arg1;
- (void)onActivityFeed:(WCFinderFeedContentVM *)arg1 notifyHeightChanged:(NSString *)arg2;
- (void)onActivityFeed:(WCFinderFeedContentVM *)arg1 clickTextLink:(WCFinderCommentLinkClickInfo *)arg2 fromLikeList:(_Bool)arg3;
- (void)onActivityFeed:(WCFinderFeedContentVM *)arg1 clickVideo:(WCFinderMediaInfo *)arg2 originRect:(struct CGRect)arg3 originView:(UIView *)arg4;
- (void)onActivityFeed:(WCFinderFeedContentVM *)arg1 clickPhoto:(WCFinderMediaInfo *)arg2 photoIndex:(long long)arg3 originViewArr:(NSArray *)arg4;
- (void)onActivityFeedClickMore:(WCFinderFeedContentVM *)arg1;
- (void)onActivityFeedClickComment:(WCFinderFeedContentVM *)arg1 enterType:(unsigned long long)arg2;
- (void)onActivityFeed:(WCFinderFeedContentVM *)arg1 turnToLiked:(_Bool)arg2;
@end


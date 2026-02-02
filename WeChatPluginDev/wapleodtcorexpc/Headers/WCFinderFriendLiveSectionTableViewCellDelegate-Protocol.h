//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath, NSString, WCFinderFeedContentVM, WCFinderLiveFeedCollectionView;

@protocol WCFinderFriendLiveSectionTableViewCellDelegate <NSObject>

@optional
- (NSString *)finderLiveSectionTableViewCell:(WCFinderLiveFeedCollectionView *)arg1 customTitleWithContentVM:(WCFinderFeedContentVM *)arg2;
- (void)finderLiveSectionTableViewCell:(WCFinderLiveFeedCollectionView *)arg1 endExposeLiveContentVM:(WCFinderFeedContentVM *)arg2;
- (void)finderLiveSectionTableViewCell:(WCFinderLiveFeedCollectionView *)arg1 didExposeLiveContentVM:(WCFinderFeedContentVM *)arg2;
- (void)finderLiveSectionTableViewCellFetchMoreLiveList:(WCFinderLiveFeedCollectionView *)arg1;
- (void)onViewMoreLiveList;
- (void)finderLiveClickAvatar:(WCFinderLiveFeedCollectionView *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
- (void)onDidExposeLiveAtIndex:(NSIndexPath *)arg1 inLives:(NSArray *)arg2;
- (void)onDidSelectMoreLive;
- (void)onDidSelectLiveAtIndex:(NSIndexPath *)arg1 inLives:(NSArray *)arg2;
@end


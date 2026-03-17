//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath, NSString, WCFinderFeedContentVM, WCFinderSnSLiveSectionTableViewCell;

@protocol WCFinderSnSLiveSectionTableViewCellDelegate <NSObject>

@optional
- (void)onSnsLiveSectionClickClearBtnAction;
- (void)onClearAllSnSLiveSectionData;
- (NSString *)finderLiveSectionTableViewCell:(WCFinderSnSLiveSectionTableViewCell *)arg1 customTitleWithContentVM:(WCFinderFeedContentVM *)arg2;
- (void)finderLiveSectionTableViewCell:(WCFinderSnSLiveSectionTableViewCell *)arg1 endExposeLiveContentVM:(WCFinderFeedContentVM *)arg2;
- (void)finderLiveSectionTableViewCell:(WCFinderSnSLiveSectionTableViewCell *)arg1 didExposeLiveContentVM:(WCFinderFeedContentVM *)arg2;
- (void)finderLiveSectionTableViewCellFetchMoreLiveList:(WCFinderSnSLiveSectionTableViewCell *)arg1;
- (void)onViewMoreLiveList;
- (void)onDidExposeLiveAtIndex:(NSIndexPath *)arg1 inLives:(NSArray *)arg2;
- (void)onDidSelectLiveAtIndex:(NSIndexPath *)arg1 inLives:(NSArray *)arg2;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, WCFinderContentTableViewCell, WCFinderDataItem, WCFinderFeedContentVM;

@protocol WCFinderContentTableViewCellDelegate <NSObject>

@optional
- (void)onClickFeedPatMusicAction:(WCFinderFeedContentVM *)arg1 enableClick:(_Bool)arg2;
- (void)onClickEventEntry:(WCFinderFeedContentVM *)arg1;
- (void)onClickContentUsernameAction:(WCFinderFeedContentVM *)arg1;
- (void)onRefreshContentCellUI:(WCFinderFeedContentVM *)arg1;
- (void)onClickContentMentionAction:(NSString *)arg1 nickname:(NSString *)arg2 dataItem:(WCFinderDataItem *)arg3;
- (void)onClickContentTopicAction:(NSString *)arg1 dataItem:(WCFinderDataItem *)arg2;
- (void)clickContentModFeedAction:(WCFinderDataItem *)arg1;
- (void)clickContentPOIAction:(WCFinderDataItem *)arg1;
- (void)onClickContentExtReadingAction:(NSURL *)arg1;
- (void)onContentTableViewCell:(WCFinderContentTableViewCell *)arg1 longPressContentAction:(WCFinderFeedContentVM *)arg2 rect:(struct CGRect)arg3;
- (void)onClickContentReadMoreAction:(WCFinderFeedContentVM *)arg1 isExpand:(_Bool)arg2;
@end


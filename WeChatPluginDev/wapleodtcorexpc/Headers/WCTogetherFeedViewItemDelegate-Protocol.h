//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, WCDataItem, WCMediaItem, WCTogetherFeedViewItem;

@protocol WCTogetherFeedViewItemDelegate <NSObject>
- (void)viewItem:(WCTogetherFeedViewItem *)arg1 didClickMediaWithDataItem:(WCDataItem *)arg2 mediaItem:(WCMediaItem *)arg3;
- (void)viewItem:(WCTogetherFeedViewItem *)arg1 didClickContentDetailWithDataItem:(WCDataItem *)arg2;
- (void)viewItem:(WCTogetherFeedViewItem *)arg1 didClickLocationInfoWithDataItem:(WCDataItem *)arg2;
- (void)viewItem:(WCTogetherFeedViewItem *)arg1 didClickContactInfoWithDataItem:(WCDataItem *)arg2 contact:(CContact *)arg3;
@end


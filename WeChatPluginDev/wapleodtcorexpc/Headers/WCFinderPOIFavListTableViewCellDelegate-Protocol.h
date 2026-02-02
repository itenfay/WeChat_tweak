//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderFavPoiItem;

@protocol WCFinderPOIFavListTableViewCellDelegate <NSObject>

@optional
- (void)onPOIFavListTableViewCellClickedWithFavPOIItem:(WCFinderFavPoiItem *)arg1;
- (void)onPOIFavListTableViewCellHeightChanged;
@end


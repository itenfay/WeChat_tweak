//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderPaidCollectionInfo, WCFinderFeedContentVM;

@protocol WCFinderCollectionFeedListViewControllerDelegate <NSObject>

@optional
- (_Bool)handleCollectionFeedListSelectNeedPayFeed:(WCFinderFeedContentVM *)arg1 withPaidCollection:(FinderPaidCollectionInfo *)arg2;
- (void)collectionFeedListViewControllerWillBePoped;
@end


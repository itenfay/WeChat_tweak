//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UILongPressGestureRecognizer, WCFinderFeedStaticCoverCollectionViewCell;

@protocol WCFinderStaticCoverCellMenuHandle <NSObject>
- (_Bool)onStaticCoverCellShowMenu:(WCFinderFeedStaticCoverCollectionViewCell *)arg1 gesture:(UILongPressGestureRecognizer *)arg2;
- (_Bool)coverCellShouldHandleMenuGesgture:(WCFinderFeedStaticCoverCollectionViewCell *)arg1 gesture:(UILongPressGestureRecognizer *)arg2;
@end


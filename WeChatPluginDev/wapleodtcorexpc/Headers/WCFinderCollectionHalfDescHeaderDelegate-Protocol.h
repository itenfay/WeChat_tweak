//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderCollectionHalfDescHeader;

@protocol WCFinderCollectionHalfDescHeaderDelegate <NSObject>

@optional
- (void)collectionHalfDescHeaderHeightUpdate:(WCFinderCollectionHalfDescHeader *)arg1;
- (void)collectionHalfDescHeaderDidClickMoreButton:(WCFinderCollectionHalfDescHeader *)arg1;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderFeedContentVM;

@protocol WCFinderLandScapeCollectionDisplayViewDelegate <NSObject>

@optional
- (void)onCollectionDisplayViewDidSelectContentVM:(WCFinderFeedContentVM *)arg1;
- (void)onCollectionDisplayViewReadyToShowStateChanged:(_Bool)arg1;
@end


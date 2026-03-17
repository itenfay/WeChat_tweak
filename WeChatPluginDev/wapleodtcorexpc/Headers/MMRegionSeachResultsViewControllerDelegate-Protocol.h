//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMRegion, MMRegionSeachResultsViewController;

@protocol MMRegionSeachResultsViewControllerDelegate <NSObject>

@optional
- (void)resultVC:(MMRegionSeachResultsViewController *)arg1 didSelectedRegion:(MMRegion *)arg2;
@end


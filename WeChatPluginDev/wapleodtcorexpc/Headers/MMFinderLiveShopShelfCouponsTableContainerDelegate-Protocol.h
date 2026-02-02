//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMFinderLiveCouponViewDelegate-Protocol.h"
#import "MMFinderLiveShopShelfSubPageHeaderViewDelegate-Protocol.h"

@class MMFinderLiveShopShelfCouponViewModel;

@protocol MMFinderLiveShopShelfCouponsTableContainerDelegate <MMFinderLiveShopShelfSubPageHeaderViewDelegate, MMFinderLiveCouponViewDelegate>

@optional
- (void)willDisplayCellForModel:(MMFinderLiveShopShelfCouponViewModel *)arg1;
@end


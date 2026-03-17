//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMFinderLiveShopShelfCoordinatorDelegate-Protocol.h"
#import "MMFinderLiveShopShelfItemsDelegate-Protocol.h"
#import "MMFinderLiveShopShelfMainPageHeaderDelegate-Protocol.h"

@class MMFinderLiveGoodsItem, MMFinderLiveShopContext;

@protocol MMFinderLiveShopShelfViewDelegate <MMFinderLiveShopShelfItemsDelegate, MMFinderLiveShopShelfMainPageHeaderDelegate, MMFinderLiveShopShelfCoordinatorDelegate>

@optional
- (void)onMMFinderLiveFlashSaleClicked:(MMFinderLiveShopContext *)arg1;
- (void)onMMFinderLiveShopVIPClicked:(MMFinderLiveShopContext *)arg1;
- (void)onMMFinderLiveAddGoodsButtonClicked:(MMFinderLiveShopContext *)arg1;
- (void)onMMFinderLivePromoteStatusChanged:(MMFinderLiveGoodsItem *)arg1 promoteStatus:(_Bool)arg2;
- (void)onMMFinderLiveShopShelfCloseWithReason:(long long)arg1;
- (void)onMMFinderLiveShopShelfRefreshed;
@end


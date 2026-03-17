//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderDirectAddPreviousLivePageCmdRetBuf, FinderWindowProductInfo_SkuAttrInfo, MMFinderLiveGoodsCell, MMFinderLiveGoodsItem, MMFinderLiveGoodsViewModel, MMFinderLiveShopContext, MMFinderLiveShopShelfView, NSArray;
@protocol MMFinderLiveProductVisibleItem;

@protocol MMFinderLiveShopShelfItemsDelegate <NSObject>
- (void)onMMFinderLiveGoodsCellExpose:(MMFinderLiveGoodsCell *)arg1;
- (void)onMMFinderLiveOpenReplayButtonClicked:(MMFinderLiveGoodsViewModel *)arg1;
- (void)onMMFinderLiveShopCouponItemUpdated:(NSArray *)arg1;
- (void)onMMFinderLiveWillShowMoreSKUsTailForGoods:(MMFinderLiveGoodsItem *)arg1 visibleItem:(id <MMFinderLiveProductVisibleItem>)arg2;
- (void)onMMFinderLiveGoodsItem:(MMFinderLiveGoodsItem *)arg1 visibleItem:(id <MMFinderLiveProductVisibleItem>)arg2 willShowSKUForIndex:(unsigned long long)arg3;
- (void)onMMFinderLiveDidClickMoreSKUsTailForGoodsItem:(MMFinderLiveGoodsItem *)arg1 visibleItem:(id <MMFinderLiveProductVisibleItem>)arg2;
- (void)onMMFinderLiveDidReleaseMoreSKUsTailForGoodsItem:(MMFinderLiveGoodsItem *)arg1 visibleItem:(id <MMFinderLiveProductVisibleItem>)arg2;
- (void)onMMFinderLiveGoodsItem:(MMFinderLiveGoodsItem *)arg1 visibleItem:(id <MMFinderLiveProductVisibleItem>)arg2 skuSelected:(FinderWindowProductInfo_SkuAttrInfo *)arg3;
- (void)onMMFinderLiveGoodsItemSelected:(MMFinderLiveGoodsItem *)arg1 visibleItem:(id <MMFinderLiveProductVisibleItem>)arg2 isInMainPage:(_Bool)arg3 shopContext:(MMFinderLiveShopContext *)arg4;
- (void)onMMFinderLiveAddToShoppingCartButtonClicked:(MMFinderLiveGoodsViewModel *)arg1;
- (void)onMMFinderLivePurchaseButtonClicked:(MMFinderLiveGoodsItem *)arg1 visibleItem:(id <MMFinderLiveProductVisibleItem>)arg2 shopContext:(MMFinderLiveShopContext *)arg3;
- (void)onMMFinderLiveShopShelfView:(MMFinderLiveShopShelfView *)arg1 addPreviousLiveGoodsFail:(FinderDirectAddPreviousLivePageCmdRetBuf *)arg2;
@end


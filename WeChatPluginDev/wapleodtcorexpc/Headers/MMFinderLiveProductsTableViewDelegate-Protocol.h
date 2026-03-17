//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderWindowProductInfo_SkuAttrInfo, MMFinderLiveGoodsCell, MMFinderLiveGoodsViewModel, NSDictionary;

@protocol MMFinderLiveProductsTableViewDelegate <NSObject>
- (void)cell:(MMFinderLiveGoodsCell *)arg1 willShowMoreSKUsTailForModel:(MMFinderLiveGoodsViewModel *)arg2;
- (void)cell:(MMFinderLiveGoodsCell *)arg1 didClickMoreSKUsTailForModel:(MMFinderLiveGoodsViewModel *)arg2;
- (void)cell:(MMFinderLiveGoodsCell *)arg1 didReleaseMoreSKUsTailForModel:(MMFinderLiveGoodsViewModel *)arg2;
- (void)cell:(MMFinderLiveGoodsCell *)arg1 willDisplayForModel:(MMFinderLiveGoodsViewModel *)arg2;
- (void)cell:(MMFinderLiveGoodsCell *)arg1 model:(MMFinderLiveGoodsViewModel *)arg2 willShowSKUCellForIndex:(unsigned long long)arg3;
- (void)cell:(MMFinderLiveGoodsCell *)arg1 model:(MMFinderLiveGoodsViewModel *)arg2 didSelectSKU:(FinderWindowProductInfo_SkuAttrInfo *)arg3;
- (void)cell:(MMFinderLiveGoodsCell *)arg1 didSelectedForModel:(MMFinderLiveGoodsViewModel *)arg2;
- (void)onOpenRecordPromotionReplay:(MMFinderLiveGoodsCell *)arg1 goodsViewModel:(MMFinderLiveGoodsViewModel *)arg2 info:(NSDictionary *)arg3;
- (void)onAskForPromoteProductButtonClicked:(MMFinderLiveGoodsCell *)arg1 goodsViewModel:(MMFinderLiveGoodsViewModel *)arg2;
- (void)onAddToShoppingCartButtonClicked:(MMFinderLiveGoodsCell *)arg1 goodsViewModel:(MMFinderLiveGoodsViewModel *)arg2;
- (void)onActionButtonClicked:(MMFinderLiveGoodsCell *)arg1 goodsViewModel:(MMFinderLiveGoodsViewModel *)arg2 info:(NSDictionary *)arg3;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMFinderLiveAnchorGoodsCellManageDelegate-Protocol.h"
#import "MMFinderLiveGoodsCellBaseDelegate-Protocol.h"

@class MMFinderLiveGoodsCell, MMFinderLiveGoodsViewModel, NSDictionary;

@protocol MMFinderLiveAnchorGoodsCellDelegate <MMFinderLiveGoodsCellBaseDelegate, MMFinderLiveAnchorGoodsCellManageDelegate>

@optional
- (void)onDeleteRecordPromotionReplay:(MMFinderLiveGoodsCell *)arg1 goodsViewModel:(MMFinderLiveGoodsViewModel *)arg2 info:(NSDictionary *)arg3;
- (void)onStopRecordPromotionReplay:(MMFinderLiveGoodsCell *)arg1 goodsViewModel:(MMFinderLiveGoodsViewModel *)arg2 info:(NSDictionary *)arg3;
- (void)onStartRecordPromotionReplay:(MMFinderLiveGoodsCell *)arg1 goodsViewModel:(MMFinderLiveGoodsViewModel *)arg2 info:(NSDictionary *)arg3;
- (void)onMayNeedChangeSizeForImageLoaded:(MMFinderLiveGoodsCell *)arg1;
@end


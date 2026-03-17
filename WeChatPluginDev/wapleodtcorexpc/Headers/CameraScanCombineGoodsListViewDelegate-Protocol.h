//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CameraScanCombineScanGoodsResultCardViewModel, CameraScanGoodsItemViewModel;

@protocol CameraScanCombineGoodsListViewDelegate <NSObject>
- (void)onListViewWillEndDragging;
- (void)onListViewWillStartDragging;
- (void)listViewDidFold:(_Bool)arg1;
- (void)listViewWillFold:(_Bool)arg1;
- (double)gradienLayerMaskHeight;
- (void)onClikcItemCardWithItemViewModel:(CameraScanGoodsItemViewModel *)arg1 index:(unsigned long long)arg2;
- (void)onCompleteAppendAnimationWithCardItem:(CameraScanCombineScanGoodsResultCardViewModel *)arg1;
- (void)callAppendNewCardItemToList:(CameraScanCombineScanGoodsResultCardViewModel *)arg1;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CameraScanGoodsItemViewModel;

@protocol CameraScanCombineContentViewDelegate <NSObject>
- (void)callSetupHoleMaskViewWithHoleFrame:(struct CGRect)arg1;
- (void)onClikcItemCardWithItemViewModel:(CameraScanGoodsItemViewModel *)arg1 index:(unsigned long long)arg2;
- (void)onAddItemFromDetectorsWithItemViewModel:(CameraScanGoodsItemViewModel *)arg1 index:(unsigned long long)arg2;
- (void)onListViewWillEndDragging;
- (void)onListViewWillStartDragging;
- (void)listViewDidFold:(_Bool)arg1;
- (void)listViewWillFold:(_Bool)arg1;
- (double)getTabViewHeight;
- (double)getContentBottomMarginToTabView;
- (double)getWidthBetweenAlbumButtonAndMyQRCodeButton;
- (double)getContentBottomMargin;
@end


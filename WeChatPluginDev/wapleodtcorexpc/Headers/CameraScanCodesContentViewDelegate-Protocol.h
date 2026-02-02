//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "CameraScanBaseContentViewDelegate-Protocol.h"

@class CameraScanBaseContentView, CameraScanCodesMarkDotInfo, CameraScanGoodsItemViewModel;

@protocol CameraScanCodesContentViewDelegate <CameraScanBaseContentViewDelegate>
- (void)callSetupHoleMaskViewWithHoleFrame:(struct CGRect)arg1;
- (void)onAppenItemCarkWithItemViewModel:(CameraScanGoodsItemViewModel *)arg1 index:(unsigned long long)arg2;
- (void)onClikcItemCardWithItemViewModel:(CameraScanGoodsItemViewModel *)arg1 index:(unsigned long long)arg2;
- (void)onListViewWillEndDragging;
- (void)onListViewWillStartDragging;
- (void)listViewDidFold:(_Bool)arg1;
- (void)listViewWillFold:(_Bool)arg1;
- (void)onTipsIKnowButtonClicked:(CameraScanBaseContentView *)arg1;
- (void)onTryScanGoodsButtonClicked:(CameraScanBaseContentView *)arg1;
- (void)onSelectMarkDotInfo:(CameraScanCodesMarkDotInfo *)arg1;
- (void)onMyQRButtonClicked:(CameraScanBaseContentView *)arg1;
- (void)onCancelButtonClicked:(CameraScanBaseContentView *)arg1;
@end


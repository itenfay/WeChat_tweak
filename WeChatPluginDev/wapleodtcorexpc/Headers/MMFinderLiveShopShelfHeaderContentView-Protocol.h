//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveShopShelfHeaderViewModel, MMLiveShopShelfDragBar, UIButton, UIView;

@protocol MMFinderLiveShopShelfHeaderContentView <NSObject>
- (MMLiveShopShelfDragBar *)dragBar;
- (void)updateWithHeaderViewModel:(MMFinderLiveShopShelfHeaderViewModel *)arg1;

@optional
- (UIView *)anchorSettingButton;
- (UIButton *)searchButton;
- (UIView *)goodsOrderCenterButton;
- (UIButton *)shoppingCartButton;
- (UIView *)displayWindowView;
@end


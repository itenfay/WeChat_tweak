//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveShopShelfAudienceHeaderButtonGroupViewConfig, MMFinderLiveShopShelfHeaderViewModel, MMUIButton;

@interface MMFinderLiveShopShelfAudienceHeaderButtonGroupView : UIView
{
    MMFinderLiveShopShelfAudienceHeaderButtonGroupViewConfig *_config;
    MMUIButton *_searchButton;
    MMUIButton *_shoppingCartButton;
    MMUIButton *_customerServiceButton;
    MMUIButton *_goodsOrderCenterButton;
    MMFinderLiveShopShelfHeaderViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveShopShelfHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MMUIButton *goodsOrderCenterButton; // @synthesize goodsOrderCenterButton=_goodsOrderCenterButton;
@property(retain, nonatomic) MMUIButton *customerServiceButton; // @synthesize customerServiceButton=_customerServiceButton;
@property(retain, nonatomic) MMUIButton *shoppingCartButton; // @synthesize shoppingCartButton=_shoppingCartButton;
@property(retain, nonatomic) MMUIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) MMFinderLiveShopShelfAudienceHeaderButtonGroupViewConfig *config; // @synthesize config=_config;
- (void)updateEdgeInsetsForButton:(id)arg1;
- (void)updateWithHeaderViewModel:(id)arg1;
- (void)onClickShoppingCartButton:(id)arg1;
- (void)onClickShopAssistantButton:(id)arg1;
- (void)onClickGoodsOrderButton:(id)arg1;
- (void)onClickSearchButton:(id)arg1;
- (id)buttons;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithConfig:(id)arg1;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveShopShelfAudienceHeaderButtonGroupView, MMFinderLiveShopShelfAudienceLocalLifeMiniAppButton, MMFinderLiveShopShelfHeaderViewModel, MMLiveShopShelfDragBar, NSString, UILabel;

@interface MMFinderLiveShopShelfAudienceLocalLifeHeaderView : UIView
{
    MMFinderLiveShopShelfHeaderViewModel *_viewModel;
    MMFinderLiveShopShelfAudienceHeaderButtonGroupView *_audienceButtonGroupView;
    MMFinderLiveShopShelfAudienceLocalLifeMiniAppButton *_miniAppButton;
    UILabel *_titleLabel;
    MMLiveShopShelfDragBar *_dragBar;
    UIView *_line;
    UILabel *_productsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *productsLabel; // @synthesize productsLabel=_productsLabel;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) MMLiveShopShelfDragBar *dragBar; // @synthesize dragBar=_dragBar;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMFinderLiveShopShelfAudienceLocalLifeMiniAppButton *miniAppButton; // @synthesize miniAppButton=_miniAppButton;
@property(retain, nonatomic) MMFinderLiveShopShelfAudienceHeaderButtonGroupView *audienceButtonGroupView; // @synthesize audienceButtonGroupView=_audienceButtonGroupView;
@property(retain, nonatomic) MMFinderLiveShopShelfHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)goodsOrderCenterButton;
- (id)shoppingCartButton;
- (void)onMiniAppButtonClicked:(id)arg1;
- (void)updateWithHeaderViewModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveShopShelfAudienceHeaderButtonGroupView, MMFinderLiveShopShelfDisplayWindowButton, MMFinderLiveShopShelfHeaderSubInfosView, MMFinderLiveShopShelfHeaderViewModel, MMLiveShopShelfDragBar, MMUIButton, NSString, UIButton;

@interface MMFinderLiveShopShelfHeaderView : UIView
{
    MMFinderLiveShopShelfHeaderViewModel *_viewModel;
    UIView *_contentView;
    MMLiveShopShelfDragBar *_dragBar;
    MMFinderLiveShopShelfAudienceHeaderButtonGroupView *_audienceButtonGroupView;
    MMUIButton *_anchorSettingBtn;
    UIButton *_displayWindowBtn;
    MMFinderLiveShopShelfDisplayWindowButton *_displayWindowButton;
    MMFinderLiveShopShelfHeaderSubInfosView *_subInfosView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveShopShelfHeaderSubInfosView *subInfosView; // @synthesize subInfosView=_subInfosView;
@property(retain, nonatomic) MMFinderLiveShopShelfDisplayWindowButton *displayWindowButton; // @synthesize displayWindowButton=_displayWindowButton;
@property(retain, nonatomic) UIButton *displayWindowBtn; // @synthesize displayWindowBtn=_displayWindowBtn;
@property(retain, nonatomic) MMUIButton *anchorSettingBtn; // @synthesize anchorSettingBtn=_anchorSettingBtn;
@property(retain, nonatomic) MMFinderLiveShopShelfAudienceHeaderButtonGroupView *audienceButtonGroupView; // @synthesize audienceButtonGroupView=_audienceButtonGroupView;
@property(retain, nonatomic) MMLiveShopShelfDragBar *dragBar; // @synthesize dragBar=_dragBar;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveShopShelfHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)searchButton;
- (id)displayWindowView;
- (id)shoppingCartButton;
- (id)goodsOrderCenterButton;
- (id)anchorSettingButton;
- (void)onClickAnchorSettingBtn:(id)arg1;
- (void)onClickDisplayWindowButton:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithHeaderViewModel:(id)arg1;
- (void)initView;
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


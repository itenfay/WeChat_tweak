//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, UIButton, UIImageView, UILabel, WCFinderAuthInfoIconView, WCFinderContact, WCFinderFeedFlowView, WCFinderHeadImageView, WCFinderMemberShipPreviewListViewModel;
@protocol WCFinderMemberShipPaymentGuideTableViewCellDelegate;

@interface WCFinderMemberShipPaymentGuideTableViewCell
{
    id <WCFinderMemberShipPaymentGuideTableViewCellDelegate> _delegate;
    WCFinderContact *_contact;
    WCFinderHeadImageView *_headImageView;
    MMUILabel *_nameLabel;
    MMUILabel *_tipsLabel;
    WCFinderFeedFlowView *_feedFlowView;
    WCFinderMemberShipPreviewListViewModel *_viewModel;
    UIButton *_confirmButton;
    UIImageView *_priceCoinIcon;
    UILabel *_priceLabel;
    UILabel *_cycleLabel;
    UILabel *_moreLabel;
    WCFinderAuthInfoIconView *_authIconView;
}

+ (double)cellHeightWithIsSubScene:(_Bool)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UILabel *cycleLabel; // @synthesize cycleLabel=_cycleLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIImageView *priceCoinIcon; // @synthesize priceCoinIcon=_priceCoinIcon;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) WCFinderMemberShipPreviewListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <WCFinderMemberShipPaymentGuideTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finderMemberShipPreviewListViewFetchListFail;
- (void)finderMemberShipPreviewListViewFetchListSuc;
- (void)finderMemberShipPreviewListViewNoMoreData;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)layoutSubviews;
- (void)onConfirm;
- (void)updateContact:(id)arg1 memberPrice:(unsigned long long)arg2 otherVideoNum:(unsigned long long)arg3 otherLiveNum:(unsigned long long)arg4 viewModel:(id)arg5;
- (void)setLineSpace:(double)arg1 withText:(id)arg2 inLabel:(id)arg3;
- (void)layoutFeedFlowView;
- (void)layoutMoreLabel;
- (void)layoutCycleLabel;
- (void)layoutPriceLabel;
- (void)layoutPriceCoinIcon;
- (void)layoutConfirmButton;
- (void)layoutTipsLabel;
- (void)layoutAuthIconView;
- (void)layoutNameLabel;
- (void)layoutHeadImageView;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


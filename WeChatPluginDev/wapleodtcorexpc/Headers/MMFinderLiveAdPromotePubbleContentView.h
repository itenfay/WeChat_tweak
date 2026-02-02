//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveShopWindowAdItem, MMLiveGradientLayerView, MMUILabel, MMWebImageView;

@interface MMFinderLiveAdPromotePubbleContentView
{
    MMLiveGradientLayerView *_titleImgContainerView;
    MMWebImageView *_titleImgView;
    MMUILabel *_titleTagLabel;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    FinderLiveShopWindowAdItem *_adItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveShopWindowAdItem *adItem; // @synthesize adItem=_adItem;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUILabel *titleTagLabel; // @synthesize titleTagLabel=_titleTagLabel;
@property(retain, nonatomic) MMWebImageView *titleImgView; // @synthesize titleImgView=_titleImgView;
@property(retain, nonatomic) MMLiveGradientLayerView *titleImgContainerView; // @synthesize titleImgContainerView=_titleImgContainerView;
- (id)onPromoteBubbleActionExtraInfo;
- (void)onAdAction;
- (void)updateLabelsOriginY;
- (void)layoutDescLabel;
- (void)layoutTitleLabel;
- (void)layoutTitleTagLabel;
- (void)layoutTitleImgView;
- (void)onShowed;
- (void)onClosed;
- (void)onTapAction;
- (void)handleSingleTapGesture:(id)arg1;
- (void)refreshData;
- (void)layoutUI;
- (id)getCurrentPromoteBuffer;
- (void)updatepromoteBuffer:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (_Bool)isCurrentPromoteItem:(id)arg1;
- (void)convertPromoteMsgInfo:(id)arg1;
- (id)accessibilityLabelString;
- (_Bool)shouldBeAccessibilityElement;

@end


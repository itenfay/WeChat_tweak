//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveGiftNewCustomizationModel, MMFinderLiveRewardGiftItem, MMUILabel;

@interface MMLiveRewardGiftNewCustomizationTipView
{
    CDUnknownBlockType _selfSizeChangeCallback;
    CDUnknownBlockType _onTapCallback;
    MMUILabel *_tipLabel;
    MMFinderLiveRewardGiftItem *_giftItem;
    MMFinderLiveGiftNewCustomizationModel *_customizationModel;
}

+ (double)preferHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveGiftNewCustomizationModel *customizationModel; // @synthesize customizationModel=_customizationModel;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(retain, nonatomic) MMUILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(copy, nonatomic) CDUnknownBlockType onTapCallback; // @synthesize onTapCallback=_onTapCallback;
@property(copy, nonatomic) CDUnknownBlockType selfSizeChangeCallback; // @synthesize selfSizeChangeCallback=_selfSizeChangeCallback;
- (void)onTapCustomizationTip:(id)arg1;
- (double)selfCornerRadius;
- (double)triangeArrowHeight;
- (double)triangeArrowWidth;
- (void)updateWithGiftItem:(id)arg1;
- (void)updateSelfWidthIfNeeded;
- (void)updateTipContent;
- (void)updateTipLabelOrigin;
- (void)layoutTipLabel;
- (void)layoutUI;
- (void)addGestures;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(long long)arg2;

@end


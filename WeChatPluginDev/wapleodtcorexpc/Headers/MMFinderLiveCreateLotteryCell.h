//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMFinderLiveCreateLotteryDataItem, MMLiveLotteryGiftPacketsView, MMUIButton, MMUILabel, UIImageView, UIView;

@interface MMFinderLiveCreateLotteryCell
{
    _Bool _bigCell;
    int _prizeType;
    MMFinderLiveCreateLotteryDataItem *_createlotteryDataItem;
    CDUnknownBlockType _actionBlock;
    UIView *_custemContentView;
    MMUILabel *_prizeLabel;
    MMUILabel *_prizeNumLabel;
    MMUILabel *_prizeTimeLabel;
    MMUILabel *_prizeJoinLabel;
    MMUILabel *_prizeGiftDistributeLabel;
    MMUIButton *_actionButton;
    CAGradientLayer *_gradientLayer;
    UIImageView *_goodsImageView;
    MMLiveLotteryGiftPacketsView *_lotteryGiftPacketsView;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool bigCell; // @synthesize bigCell=_bigCell;
@property(nonatomic) int prizeType; // @synthesize prizeType=_prizeType;
@property(retain, nonatomic) MMLiveLotteryGiftPacketsView *lotteryGiftPacketsView; // @synthesize lotteryGiftPacketsView=_lotteryGiftPacketsView;
@property(retain, nonatomic) UIImageView *goodsImageView; // @synthesize goodsImageView=_goodsImageView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *prizeGiftDistributeLabel; // @synthesize prizeGiftDistributeLabel=_prizeGiftDistributeLabel;
@property(retain, nonatomic) MMUILabel *prizeJoinLabel; // @synthesize prizeJoinLabel=_prizeJoinLabel;
@property(retain, nonatomic) MMUILabel *prizeTimeLabel; // @synthesize prizeTimeLabel=_prizeTimeLabel;
@property(retain, nonatomic) MMUILabel *prizeNumLabel; // @synthesize prizeNumLabel=_prizeNumLabel;
@property(retain, nonatomic) MMUILabel *prizeLabel; // @synthesize prizeLabel=_prizeLabel;
@property(retain, nonatomic) UIView *custemContentView; // @synthesize custemContentView=_custemContentView;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) MMFinderLiveCreateLotteryDataItem *createlotteryDataItem; // @synthesize createlotteryDataItem=_createlotteryDataItem;
- (id)getGradientLayer:(struct CGRect)arg1;
- (void)actionButtonClick;
- (void)recreateActionButton;
- (void)updateGradientLayer:(_Bool)arg1;
- (void)layoutUI;
- (void)createUI;
- (_Bool)canShowActionButton;
- (void)updateData;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


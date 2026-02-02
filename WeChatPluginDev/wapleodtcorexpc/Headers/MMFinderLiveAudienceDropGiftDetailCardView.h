//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, UIColor, UIFont, UIImageView, UIView;

@interface MMFinderLiveAudienceDropGiftDetailCardView
{
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    MMUILabel *_subDescLabel;
    MMWebImageView *_giftImageView;
    UIImageView *_liveIconsImageView;
    MMUILabel *_liveIconSumLabel;
    UIView *_liveIconContainerView;
    UIFont *_titleFont;
    UIFont *_descFont;
    UIFont *_coinSumFont;
    UIFont *_subDescFont;
    UIColor *_titleColor;
    UIColor *_descColor;
    UIColor *_coinSumColor;
    UIColor *_subDescColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *subDescColor; // @synthesize subDescColor=_subDescColor;
@property(retain, nonatomic) UIColor *coinSumColor; // @synthesize coinSumColor=_coinSumColor;
@property(retain, nonatomic) UIColor *descColor; // @synthesize descColor=_descColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *subDescFont; // @synthesize subDescFont=_subDescFont;
@property(retain, nonatomic) UIFont *coinSumFont; // @synthesize coinSumFont=_coinSumFont;
@property(retain, nonatomic) UIFont *descFont; // @synthesize descFont=_descFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIView *liveIconContainerView; // @synthesize liveIconContainerView=_liveIconContainerView;
@property(retain, nonatomic) MMUILabel *liveIconSumLabel; // @synthesize liveIconSumLabel=_liveIconSumLabel;
@property(retain, nonatomic) UIImageView *liveIconsImageView; // @synthesize liveIconsImageView=_liveIconsImageView;
@property(retain, nonatomic) MMWebImageView *giftImageView; // @synthesize giftImageView=_giftImageView;
@property(retain, nonatomic) MMUILabel *subDescLabel; // @synthesize subDescLabel=_subDescLabel;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateViewModel:(id)arg1;
- (void)refreshLayout;
- (void)layoutSubviews;
- (void)setup;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCPLabel, UIImageView;

@interface MMFinderLivePaymentSettingViewCell
{
    _Bool _forceDarkMode;
    unsigned int _priceInWecoin;
    UIImageView *_selectionIndicatorView;
    UIImageView *_wecoinIconView;
    MMCPLabel *_priceInWecoinNameLabel;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool forceDarkMode; // @synthesize forceDarkMode=_forceDarkMode;
@property(nonatomic) unsigned int priceInWecoin; // @synthesize priceInWecoin=_priceInWecoin;
@property(retain, nonatomic) MMCPLabel *priceInWecoinNameLabel; // @synthesize priceInWecoinNameLabel=_priceInWecoinNameLabel;
@property(retain, nonatomic) UIImageView *wecoinIconView; // @synthesize wecoinIconView=_wecoinIconView;
@property(retain, nonatomic) UIImageView *selectionIndicatorView; // @synthesize selectionIndicatorView=_selectionIndicatorView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateWithPriceInWecoin:(unsigned int)arg1 optionName:(id)arg2 isSelected:(_Bool)arg3 forceDarkMode:(_Bool)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel, UIView, WecoinPriceInfo;

@interface WCPayCoinView
{
    WecoinPriceInfo *_priceInfo;
    UILabel *_amountLabel;
    UILabel *_priceLabel;
    UIView *_discountView;
    UILabel *_discountCount;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *discountCount; // @synthesize discountCount=_discountCount;
@property(retain, nonatomic) UIView *discountView; // @synthesize discountView=_discountView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) WecoinPriceInfo *priceInfo; // @synthesize priceInfo=_priceInfo;
- (id)initWithFrame:(struct CGRect)arg1;

@end


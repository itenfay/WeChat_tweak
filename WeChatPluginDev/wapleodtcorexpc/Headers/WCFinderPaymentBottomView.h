//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, WCFinderMaskButton, WCFinderPaymentBottomViewConfig;
@protocol WCFinderPaymentBottomViewDelegate;

@interface WCFinderPaymentBottomView : UIView
{
    id <WCFinderPaymentBottomViewDelegate> _delegate;
    UIView *_topLine;
    UIImageView *_priceCoinIcon;
    UILabel *_priceLabel;
    UILabel *_priceDescLabel;
    WCFinderMaskButton *_confirmButton;
    WCFinderPaymentBottomViewConfig *_config;
    double _layoutWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(retain, nonatomic) WCFinderPaymentBottomViewConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) WCFinderMaskButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *priceDescLabel; // @synthesize priceDescLabel=_priceDescLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIImageView *priceCoinIcon; // @synthesize priceCoinIcon=_priceCoinIcon;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) __weak id <WCFinderPaymentBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickConfirm;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateWithConfig:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end


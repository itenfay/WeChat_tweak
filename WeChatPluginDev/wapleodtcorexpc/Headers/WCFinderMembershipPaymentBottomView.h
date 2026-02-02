//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel, WCFinderMaskButton;
@protocol WCFinderMembershipPaymentBottomViewDelegate;

@interface WCFinderMembershipPaymentBottomView : UIView
{
    id <WCFinderMembershipPaymentBottomViewDelegate> _delegate;
    WCFinderMaskButton *_confirmButton;
    UIView *_topLine;
    UIImageView *_priceCoinIcon;
    UILabel *_priceLabel;
    UILabel *_cycleLabel;
    NSString *_priceLabelStr;
    NSString *_confirmBtnStr;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *confirmBtnStr; // @synthesize confirmBtnStr=_confirmBtnStr;
@property(copy, nonatomic) NSString *priceLabelStr; // @synthesize priceLabelStr=_priceLabelStr;
@property(retain, nonatomic) UILabel *cycleLabel; // @synthesize cycleLabel=_cycleLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIImageView *priceCoinIcon; // @synthesize priceCoinIcon=_priceCoinIcon;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) WCFinderMaskButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) __weak id <WCFinderMembershipPaymentBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickConfirm;
- (void)updateMemberPrice:(unsigned long long)arg1;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1 priceLabelStr:(id)arg2 confirmBtnStr:(id)arg3;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveRewardGiftCoinButton, MMUIButton, MMUILabel, UIView;
@protocol MMLiveJoinGameAudiencePaymentViewDelegate, MMLiveRewardGiftSelectionLogicDelegate;

@interface MMLiveJoinGameAudiencePaymentView
{
    unsigned int _payment;
    id <MMLiveJoinGameAudiencePaymentViewDelegate> _delegate;
    UIView *_contentView;
    MMUIButton *_backButton;
    MMLiveRewardGiftCoinButton *_coinButton;
    MMUILabel *_title;
    MMUILabel *_payNumLabel;
    MMUIButton *_payButton;
    MMUILabel *_descLabel;
    id <MMLiveRewardGiftSelectionLogicDelegate> _logicDelegate;
    long long _balance;
}

- (void).cxx_destruct;
@property(nonatomic) long long balance; // @synthesize balance=_balance;
@property(nonatomic) __weak id <MMLiveRewardGiftSelectionLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUIButton *payButton; // @synthesize payButton=_payButton;
@property(retain, nonatomic) MMUILabel *payNumLabel; // @synthesize payNumLabel=_payNumLabel;
@property(retain, nonatomic) MMUILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) MMLiveRewardGiftCoinButton *coinButton; // @synthesize coinButton=_coinButton;
@property(retain, nonatomic) MMUIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) unsigned int payment; // @synthesize payment=_payment;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <MMLiveJoinGameAudiencePaymentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCoinButtonClicked;
- (void)onPayButtonClicked;
- (void)onClickBackButton;
- (void)updateWecoinBalance:(long long)arg1;
- (void)fetchWecoinBalance;
- (void)pageSheetDidAppear;
- (void)updateWithPayment:(unsigned int)arg1;
- (double)contentViewHeight;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initUI;
- (id)initWithPayment:(unsigned int)arg1;

@end


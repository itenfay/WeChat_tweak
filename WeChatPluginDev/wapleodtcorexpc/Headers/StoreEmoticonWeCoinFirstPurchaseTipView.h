//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UILabel;
@protocol StoreEmoticonWeCoinFirstPurchaseTipViewDelegate;

@interface StoreEmoticonWeCoinFirstPurchaseTipView
{
    id <StoreEmoticonWeCoinFirstPurchaseTipViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_confirmButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <StoreEmoticonWeCoinFirstPurchaseTipViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)onConfirm;
- (id)genTipLabelWithFont:(id)arg1 color:(id)arg2 text:(id)arg3;
- (void)configPageSheet;
- (void)layoutSubviews;
- (id)init;

@end


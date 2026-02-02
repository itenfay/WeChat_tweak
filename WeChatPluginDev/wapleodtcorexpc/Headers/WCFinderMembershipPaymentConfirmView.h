//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHeadImageView, MMUIButton, MMUIView, UILabel, WCFinderMaskButton;
@protocol WCFinderMembershipPaymentConfirmViewDelegate;

@interface WCFinderMembershipPaymentConfirmView
{
    id <WCFinderMembershipPaymentConfirmViewDelegate> _delegate;
    WCFinderMaskButton *_confirmButton;
    MMUIView *_contentView;
    MMHeadImageView *_avatarImageView;
    UILabel *_titleLabel;
    MMUIButton *_closeButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) WCFinderMaskButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) __weak id <WCFinderMembershipPaymentConfirmViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pageSheetDidCloseWithType:(long long)arg1;
- (void)onConfirmButtonClicked;
- (void)onCloseButtonClicked;
- (double)contentViewHeight;
- (id)initWithFrame:(struct CGRect)arg1 nickname:(id)arg2;

@end


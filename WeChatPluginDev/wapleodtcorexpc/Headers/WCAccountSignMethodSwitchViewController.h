//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppleStyleLoginRegisterButton, UILabel, UIView;
@protocol WCAccountSignMethodSwitchViewControllerDelegate;

@interface WCAccountSignMethodSwitchViewController
{
    id <WCAccountSignMethodSwitchViewControllerDelegate> _delegate;
    unsigned long long _signMethod;
    unsigned long long _signType;
    AppleStyleLoginRegisterButton *_defaultButton;
    AppleStyleLoginRegisterButton *_appleButton;
    AppleStyleLoginRegisterButton *_facebookButton;
    AppleStyleLoginRegisterButton *_passkeyButton;
    UILabel *_separatorTextLabel;
    UIView *_separatorLineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property(retain, nonatomic) UILabel *separatorTextLabel; // @synthesize separatorTextLabel=_separatorTextLabel;
@property(retain, nonatomic) AppleStyleLoginRegisterButton *passkeyButton; // @synthesize passkeyButton=_passkeyButton;
@property(retain, nonatomic) AppleStyleLoginRegisterButton *facebookButton; // @synthesize facebookButton=_facebookButton;
@property(retain, nonatomic) AppleStyleLoginRegisterButton *appleButton; // @synthesize appleButton=_appleButton;
@property(retain, nonatomic) AppleStyleLoginRegisterButton *defaultButton; // @synthesize defaultButton=_defaultButton;
@property(nonatomic) unsigned long long signType; // @synthesize signType=_signType;
@property(nonatomic) unsigned long long signMethod; // @synthesize signMethod=_signMethod;
@property(nonatomic) __weak id <WCAccountSignMethodSwitchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapPasskeyButton;
- (void)onTapFacebookButton;
- (void)onTapAppleButton;
- (void)onTapDefaultButton;
- (void)updateDetailViewLayout:(id)arg1;
- (void)updateContent;
- (void)configDetailView;
- (void)configPageSheet;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;

@end


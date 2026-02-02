//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, MMUILabel, MultiDeviceLoginInfo, UIButton, UIImageView, UIScrollView, WCAgreementCheckBox;
@protocol MultiDeviceCardViewDelegate;

@interface MultiDeviceCardLoginContentView : UIView
{
    _Bool _agreementSelected;
    MultiDeviceLoginInfo *_deviceLoginInfo;
    id <MultiDeviceCardViewDelegate> _delegate;
    UIImageView *_iconImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_deviceNameLabel;
    MMUILabel *_tipsLabel;
    UIScrollView *_tipsContainerView;
    WCAgreementCheckBox *_syncChatCheckbox;
    WCAgreementCheckBox *_autoLoginCheckbox;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
    WCAgreementCheckBox *_agreementCheckBox;
    long long _errorType;
    MMTimer *_timeoutTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) long long errorType; // @synthesize errorType=_errorType;
@property(nonatomic) _Bool agreementSelected; // @synthesize agreementSelected=_agreementSelected;
@property(retain, nonatomic) WCAgreementCheckBox *agreementCheckBox; // @synthesize agreementCheckBox=_agreementCheckBox;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) WCAgreementCheckBox *autoLoginCheckbox; // @synthesize autoLoginCheckbox=_autoLoginCheckbox;
@property(retain, nonatomic) WCAgreementCheckBox *syncChatCheckbox; // @synthesize syncChatCheckbox=_syncChatCheckbox;
@property(retain, nonatomic) UIScrollView *tipsContainerView; // @synthesize tipsContainerView=_tipsContainerView;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMUILabel *deviceNameLabel; // @synthesize deviceNameLabel=_deviceNameLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak id <MultiDeviceCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MultiDeviceLoginInfo *deviceLoginInfo; // @synthesize deviceLoginInfo=_deviceLoginInfo;
- (void)onTimeout;
- (void)onTapCancelButton;
- (void)onTapConfirmButton;
- (void)onTapAutoLoginCheckbox:(id)arg1;
- (void)onLoginConfirmFailed;
- (id)getLoginConfirmInfo;
- (id)tips;
- (_Bool)enableRescanQRCode;
- (void)updateLayout;
- (void)updateContent;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


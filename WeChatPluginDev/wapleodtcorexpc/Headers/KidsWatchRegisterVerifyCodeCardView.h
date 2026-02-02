//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class KidsWatchTextFieldItem, MMTimer, MMUILabel, NSString, UIButton;
@protocol KidsWatchRegisterVerifyCodeCardViewDelegate;

@interface KidsWatchRegisterVerifyCodeCardView : UIView
{
    id <KidsWatchRegisterVerifyCodeCardViewDelegate> _delegate;
    double _cornerRadius;
    NSString *_rawPhoneNumber;
    MMUILabel *_titleLabel;
    KidsWatchTextFieldItem *_rawPhoneNumberTextFieldItem;
    UIView *_rawPhoneNumberSeparateView;
    KidsWatchTextFieldItem *_verifyCodeTextFieldItem;
    UIView *_verifyCodeSeparateView;
    UIButton *_sendVerifyCodeButton;
    MMTimer *_timer;
    unsigned long long _countdown;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long countdown; // @synthesize countdown=_countdown;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIButton *sendVerifyCodeButton; // @synthesize sendVerifyCodeButton=_sendVerifyCodeButton;
@property(retain, nonatomic) UIView *verifyCodeSeparateView; // @synthesize verifyCodeSeparateView=_verifyCodeSeparateView;
@property(retain, nonatomic) KidsWatchTextFieldItem *verifyCodeTextFieldItem; // @synthesize verifyCodeTextFieldItem=_verifyCodeTextFieldItem;
@property(retain, nonatomic) UIView *rawPhoneNumberSeparateView; // @synthesize rawPhoneNumberSeparateView=_rawPhoneNumberSeparateView;
@property(retain, nonatomic) KidsWatchTextFieldItem *rawPhoneNumberTextFieldItem; // @synthesize rawPhoneNumberTextFieldItem=_rawPhoneNumberTextFieldItem;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *rawPhoneNumber; // @synthesize rawPhoneNumber=_rawPhoneNumber;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) __weak id <KidsWatchRegisterVerifyCodeCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)makeFirstResponder;
- (void)countdownTick;
- (void)startCountDownIfNeeded;
- (void)onTapSendVerifyCodeButton;
- (id)verifyCode;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (double)updateSizeAndCalculateHeightFromFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


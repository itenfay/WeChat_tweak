//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KidsWatchButton, KidsWatchFlexibleImageView, KidsWatchRegisterVerifyCodeCardView, NSString;
@protocol KidsWatchKidsRegisterVerifyCodeViewControllerDelegate;

@interface KidsWatchKidsRegisterVerifyCodeViewController
{
    _Bool _hasSentVerifyCode;
    KidsWatchRegisterVerifyCodeCardView *_verifyCodeCardView;
    KidsWatchFlexibleImageView *_bottomBackgroundView;
    KidsWatchButton *_doneButton;
    NSString *_rawPhoneNumber;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasSentVerifyCode; // @synthesize hasSentVerifyCode=_hasSentVerifyCode;
@property(retain, nonatomic) NSString *rawPhoneNumber; // @synthesize rawPhoneNumber=_rawPhoneNumber;
@property(retain, nonatomic) KidsWatchButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) KidsWatchFlexibleImageView *bottomBackgroundView; // @synthesize bottomBackgroundView=_bottomBackgroundView;
@property(retain, nonatomic) KidsWatchRegisterVerifyCodeCardView *verifyCodeCardView; // @synthesize verifyCodeCardView=_verifyCodeCardView;
- (void)onVerifyCodeChanged:(id)arg1;
- (void)onTapSendVerifyCodeButton:(id)arg1;
- (_Bool)forceCloseBarButtonItem;
- (void)onKeyboardChangingHeight:(double)arg1;
- (void)onKeyboardWillChangeHeight:(double)arg1;
- (_Bool)shouldEndEditForTappedView:(id)arg1;
- (_Bool)respondToKeyboardEvent;
- (void)onTapDoneButton;
- (void)sendVerifyCode;
- (void)initSubviews;
- (void)setupWithData:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <KidsWatchKidsRegisterVerifyCodeViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


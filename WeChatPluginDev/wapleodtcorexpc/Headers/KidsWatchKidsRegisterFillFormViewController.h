//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KidsWatchButton, KidsWatchFlexibleImageView, KidsWatchRegisterFormCardView, NSString, WCAgreementCheckBox;
@protocol KidsWatchKidsRegisterFillFormViewControllerDelegate;

@interface KidsWatchKidsRegisterFillFormViewController
{
    KidsWatchRegisterFormCardView *_formCardView;
    KidsWatchFlexibleImageView *_bottomBackgroundView;
    WCAgreementCheckBox *_checkBox;
    KidsWatchButton *_registerButton;
    NSString *_ISOCode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ISOCode; // @synthesize ISOCode=_ISOCode;
@property(retain, nonatomic) KidsWatchButton *registerButton; // @synthesize registerButton=_registerButton;
@property(retain, nonatomic) WCAgreementCheckBox *checkBox; // @synthesize checkBox=_checkBox;
@property(retain, nonatomic) KidsWatchFlexibleImageView *bottomBackgroundView; // @synthesize bottomBackgroundView=_bottomBackgroundView;
@property(retain, nonatomic) KidsWatchRegisterFormCardView *formCardView; // @synthesize formCardView=_formCardView;
- (void)onFormCardInfoChanged:(id)arg1;
- (id)getViewController;
- (void)onTapRegisterButton;
- (void)updateRegisterButton;
- (_Bool)validate;
- (_Bool)forceCloseBarButtonItem;
- (void)onKeyboardChangingHeight:(double)arg1;
- (void)onKeyboardWillChangeHeight:(double)arg1;
- (_Bool)shouldEndEditForTappedView:(id)arg1;
- (_Bool)respondToKeyboardEvent;
- (void)makePhoneNumberFirstResponder;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)setupWithData:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <KidsWatchKidsRegisterFillFormViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, RichTextView, UIImageView, UIView;
@protocol MMLiveRewardQuotaPolicySheetViewDelegate;

@interface MMLiveRewardQuotaPolicySheetView
{
    _Bool _isAgreementChecked;
    id <MMLiveRewardQuotaPolicySheetViewDelegate> _delegate;
    id _userInfo;
    UIView *_contentView;
    UIImageView *_imageView;
    RichTextView *_descLabel;
    UIView *_checkBoxView;
    MMUIButton *_agreementCheckbox;
    RichTextView *_agreementText;
    MMUIButton *_closeButton;
    MMUIButton *_actionButton;
    MMUIButton *_cancelButton;
    unsigned long long _verifyMode;
    NSString *_verifyUrl;
    NSString *_secverifyId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *secverifyId; // @synthesize secverifyId=_secverifyId;
@property(retain, nonatomic) NSString *verifyUrl; // @synthesize verifyUrl=_verifyUrl;
@property(nonatomic) unsigned long long verifyMode; // @synthesize verifyMode=_verifyMode;
@property(nonatomic) _Bool isAgreementChecked; // @synthesize isAgreementChecked=_isAgreementChecked;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) RichTextView *agreementText; // @synthesize agreementText=_agreementText;
@property(retain, nonatomic) MMUIButton *agreementCheckbox; // @synthesize agreementCheckbox=_agreementCheckbox;
@property(retain, nonatomic) UIView *checkBoxView; // @synthesize checkBoxView=_checkBoxView;
@property(retain, nonatomic) RichTextView *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <MMLiveRewardQuotaPolicySheetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickCancelButton:(id)arg1;
- (void)onActionButtonClicked;
- (void)onCheckBoxClicked;
- (void)onCloseAction:(id)arg1;
- (double)contentViewHeight;
- (id)protocalLinkText;
- (id)cancelButtonText;
- (id)actionButtonText;
- (id)warningText;
- (_Bool)isFlowSign;
- (_Bool)isFaceVerify;
- (void)updateAccessbility;
- (void)addShakeOnCheckBoxView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithVerifyMode:(unsigned long long)arg1 verifyUrl:(id)arg2 secverifyId:(id)arg3 userInfo:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


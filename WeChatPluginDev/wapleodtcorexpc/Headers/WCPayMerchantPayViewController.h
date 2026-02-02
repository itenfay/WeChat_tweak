//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, UIButton, UIImageView, UILabel, UIView, WCPayDecimalKeyboardView, WCPayTextField, WCPayWebImageView, WCUIAlertView;
@protocol WCPayMerchantPayViewControllerDelegate;

@interface WCPayMerchantPayViewController
{
    _Bool _isShouldShowPlaceHolder;
    double _keyboardHeight;
    WCPayTextField *_m_textField;
    WCPayDecimalKeyboardView *_keyboardView;
    id <WCPayMerchantPayViewControllerDelegate> _delegate;
    NSString *_comment;
    UIView *_m_headerView;
    UIView *_m_bannerView;
    UIView *_m_mchNameLabelView;
    UILabel *_m_mchNamePrefixLabel;
    UILabel *_m_mchNameLabel;
    UILabel *_m_nickNameLabel;
    UIView *_m_mchAddressInfoView;
    UIImageView *_m_mchAddressIconImageView;
    UILabel *_m_mchAddressInfoLabel;
    WCPayWebImageView *_m_mchIconImageView;
    UIView *_m_contentView;
    UILabel *_m_amountTitle;
    UILabel *_m_unitLabel;
    UIView *_m_textFieldLine;
    RichTextView *_m_commentView;
    UIButton *_m_fixAmountPayBtn;
    UIView *_m_footerMask;
    WCUIAlertView *_m_alertView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCUIAlertView *m_alertView; // @synthesize m_alertView=_m_alertView;
@property(nonatomic) _Bool isShouldShowPlaceHolder; // @synthesize isShouldShowPlaceHolder=_isShouldShowPlaceHolder;
@property(retain, nonatomic) UIView *m_footerMask; // @synthesize m_footerMask=_m_footerMask;
@property(retain, nonatomic) UIButton *m_fixAmountPayBtn; // @synthesize m_fixAmountPayBtn=_m_fixAmountPayBtn;
@property(retain, nonatomic) RichTextView *m_commentView; // @synthesize m_commentView=_m_commentView;
@property(retain, nonatomic) UIView *m_textFieldLine; // @synthesize m_textFieldLine=_m_textFieldLine;
@property(retain, nonatomic) UILabel *m_unitLabel; // @synthesize m_unitLabel=_m_unitLabel;
@property(retain, nonatomic) UILabel *m_amountTitle; // @synthesize m_amountTitle=_m_amountTitle;
@property(retain, nonatomic) UIView *m_contentView; // @synthesize m_contentView=_m_contentView;
@property(retain, nonatomic) WCPayWebImageView *m_mchIconImageView; // @synthesize m_mchIconImageView=_m_mchIconImageView;
@property(retain, nonatomic) UILabel *m_mchAddressInfoLabel; // @synthesize m_mchAddressInfoLabel=_m_mchAddressInfoLabel;
@property(retain, nonatomic) UIImageView *m_mchAddressIconImageView; // @synthesize m_mchAddressIconImageView=_m_mchAddressIconImageView;
@property(retain, nonatomic) UIView *m_mchAddressInfoView; // @synthesize m_mchAddressInfoView=_m_mchAddressInfoView;
@property(retain, nonatomic) UILabel *m_nickNameLabel; // @synthesize m_nickNameLabel=_m_nickNameLabel;
@property(retain, nonatomic) UILabel *m_mchNameLabel; // @synthesize m_mchNameLabel=_m_mchNameLabel;
@property(retain, nonatomic) UILabel *m_mchNamePrefixLabel; // @synthesize m_mchNamePrefixLabel=_m_mchNamePrefixLabel;
@property(retain, nonatomic) UIView *m_mchNameLabelView; // @synthesize m_mchNameLabelView=_m_mchNameLabelView;
@property(retain, nonatomic) UIView *m_bannerView; // @synthesize m_bannerView=_m_bannerView;
@property(retain, nonatomic) UIView *m_headerView; // @synthesize m_headerView=_m_headerView;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(nonatomic) __weak id <WCPayMerchantPayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCPayDecimalKeyboardView *keyboardView; // @synthesize keyboardView=_keyboardView;
@property(retain, nonatomic) WCPayTextField *m_textField; // @synthesize m_textField=_m_textField;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
- (void)refreshTransferButton;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange;
- (void)clearTextField;
- (void)showFloatConfirmBtn;
- (id)keyboardHostViewController;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (unsigned int)getOriginalAmountInCent;
- (void)transferBtnClick;
- (void)leftBarButtonItemClick;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)onTapEmpty;
- (void)updateTextFieldLine;
- (double)amountInputLabelHeight;
- (double)amountInputLabelFontSize;
- (void)adjustUnitAndTextField;
- (double)getWCPayTextFieldOffsetX;
- (double)getWCPayTextFieldOffsetY;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)placeHolder;
- (void)updateTextField;
- (void)setupWithData:(id)arg1;
- (void)updateUnitTitle;
- (void)updateAmountTitle;
- (void)commentConfirm;
- (void)commentCancel;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)fixAmountPayBtnClick;
- (void)updateFixAmountPayBtn;
- (void)updateCommentView;
- (void)updateContentView;
- (void)adjustBannerView;
- (void)updateMchLogoImageView;
- (void)updateAddressLabel;
- (void)updateMchNameLabel;
- (void)viewDidLayoutSubviews;
- (void)updateBannerView;
- (void)updateHeaderView;
- (void)updateView;
- (void)initNavigationBar;
- (void)activeTextField;
- (void)viewDidLoad;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


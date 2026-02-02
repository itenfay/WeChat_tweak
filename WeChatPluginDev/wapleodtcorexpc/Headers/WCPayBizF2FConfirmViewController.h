//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel, UIView, WCPayCss, WCPayDecimalKeyboardView, WCPayTextField;
@protocol WCPayBizF2FConfirmViewControllerDelegate;

@interface WCPayBizF2FConfirmViewController
{
    NSString *_titleText;
    NSString *_descText;
    NSString *_sign;
    id <WCPayBizF2FConfirmViewControllerDelegate> _m_delegate;
    UIView *_containerView;
    UIView *_headerView;
    UIView *_titleDescView;
    UILabel *_headerTitleLabel;
    UILabel *_headerDescLabel;
    UIView *_firstLine;
    UIView *_textFieldRowView;
    UILabel *_textFieldRowTitle;
    UILabel *_textFieldUnitLabel;
    WCPayTextField *_textField;
    UIView *_secondLine;
    WCPayDecimalKeyboardView *_keyboard;
    WCPayCss *_css;
    double _keyboardHeight;
}

- (void).cxx_destruct;
@property double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain) WCPayCss *css; // @synthesize css=_css;
@property(retain) WCPayDecimalKeyboardView *keyboard; // @synthesize keyboard=_keyboard;
@property(retain) UIView *secondLine; // @synthesize secondLine=_secondLine;
@property(retain) WCPayTextField *textField; // @synthesize textField=_textField;
@property(retain) UILabel *textFieldUnitLabel; // @synthesize textFieldUnitLabel=_textFieldUnitLabel;
@property(retain) UILabel *textFieldRowTitle; // @synthesize textFieldRowTitle=_textFieldRowTitle;
@property(retain) UIView *textFieldRowView; // @synthesize textFieldRowView=_textFieldRowView;
@property(retain) UIView *firstLine; // @synthesize firstLine=_firstLine;
@property(retain) UILabel *headerDescLabel; // @synthesize headerDescLabel=_headerDescLabel;
@property(retain) UILabel *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
@property(retain, nonatomic) UIView *titleDescView; // @synthesize titleDescView=_titleDescView;
@property(retain) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain) UIView *containerView; // @synthesize containerView=_containerView;
@property __weak id <WCPayBizF2FConfirmViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(copy, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(copy, nonatomic) NSString *descText; // @synthesize descText=_descText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (id)keyboardHostViewController;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (void)textFieldDidChange;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)onTapEmpty;
- (void)updateSecondLine;
- (void)updateTextField;
- (void)updateTextFieldUnitLabel;
- (void)updateTextFieldRowTitle;
- (void)updateTextFieldRowView;
- (void)updateFirstLine;
- (void)updateDescView;
- (void)updateHeaderTitleLabel;
- (void)updateTitleDescArea;
- (void)updateHeaderView;
- (void)updateView;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)onClickBackButton;
- (id)navigationBarBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


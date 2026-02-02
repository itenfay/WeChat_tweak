//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMObject, MMUILabel, MMUIView, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UIScrollView, UITapGestureRecognizer, UITextField, UIView, UIViewController;
@protocol IWCCTRichTextViewProtocol, IWCUIKitGrowTextViewProtocol, IWCUIKitInputControllerProtocol, IWCUIKitInputControllerProxyService, MMTipsViewControllerDelegate;

@interface MMTipsViewController
{
    id <MMTipsViewControllerDelegate> m_delegate;
    unsigned long long _tipsType;
    NSString *_tipsTitle;
    NSString *_tipsContent;
    NSMutableArray *_tipsActionArray;
    NSMutableArray *_btnArray;
    UIButton *_leftBtn;
    UIButton *_rightBtn;
    _Bool _ignoreSwapTitle;
    unsigned int _tipsTextMaxCount;
    MMUIView<IWCUIKitGrowTextViewProtocol> *_tipsTextView;
    UITextField *_tipsPasswordTextField;
    UILabel *_placeHolderLabel;
    UIImageView *_inputView;
    UIButton *_expressionButton;
    MMObject<IWCUIKitInputControllerProtocol> *_inputController;
    UIView *_textBackgroundImage;
    _Bool _hasInputSth;
    UITapGestureRecognizer *_tapGR;
    UIButton *_backgroundBtn;
    UIView *_containerView;
    UIImageView *_containerBg;
    UIScrollView *_contentView;
    UIView *_buttonsView;
    double _realContentViewHeight;
    MMUILabel<IWCCTRichTextViewProtocol> *_tipsTitleLabel;
    MMUILabel *_tipsContentLabel;
    double contentYOfKeyboardShow;
    _Bool bIsForbidCancelBtn;
    _Bool _allButtonVertical;
    _Bool _alwaysWeakContent;
    _Bool _hideTipsWhenClickedOutOfTips;
    UIImageView *_tipsImgView;
    id _m_userData;
    NSString *_tipsTextPlaceholder;
    NSString *_textFieldDefaultText;
    long long _tipTag;
    UIView *_customView;
    UIViewController *_topViewController;
    long long _fixedUserInterfaceStyle;
    id <IWCUIKitInputControllerProxyService> _inputControllerProxyService;
}

+ (void)load;
- (void).cxx_destruct;
@property(retain, nonatomic) id <IWCUIKitInputControllerProxyService> inputControllerProxyService; // @synthesize inputControllerProxyService=_inputControllerProxyService;
@property(nonatomic) long long fixedUserInterfaceStyle; // @synthesize fixedUserInterfaceStyle=_fixedUserInterfaceStyle;
@property(nonatomic) _Bool hideTipsWhenClickedOutOfTips; // @synthesize hideTipsWhenClickedOutOfTips=_hideTipsWhenClickedOutOfTips;
@property(nonatomic) _Bool alwaysWeakContent; // @synthesize alwaysWeakContent=_alwaysWeakContent;
@property(nonatomic) _Bool allButtonVertical; // @synthesize allButtonVertical=_allButtonVertical;
@property(nonatomic) __weak UIViewController *topViewController; // @synthesize topViewController=_topViewController;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(nonatomic) long long tipTag; // @synthesize tipTag=_tipTag;
@property(copy, nonatomic) NSString *textFieldDefaultText; // @synthesize textFieldDefaultText=_textFieldDefaultText;
@property(copy, nonatomic) NSString *tipsTextPlaceholder; // @synthesize tipsTextPlaceholder=_tipsTextPlaceholder;
@property(retain, nonatomic) id m_userData; // @synthesize m_userData=_m_userData;
@property(readonly, nonatomic) NSString *tipsTitle; // @synthesize tipsTitle=_tipsTitle;
@property(nonatomic) _Bool bIsForbidCancelBtn; // @synthesize bIsForbidCancelBtn;
@property(retain, nonatomic) UIImageView *tipsImgView; // @synthesize tipsImgView=_tipsImgView;
@property(retain, nonatomic) MMUILabel<IWCCTRichTextViewProtocol> *m_tipsTitleLabel; // @synthesize m_tipsTitleLabel=_tipsTitleLabel;
@property(retain, nonatomic) MMUILabel *m_tipsContentLabel; // @synthesize m_tipsContentLabel=_tipsContentLabel;
@property(nonatomic) __weak id <MMTipsViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)handleKeyboardDidHide;
- (void)handleKeyboardWillShow:(id)arg1;
- (void)dealloc;
- (void)setButtonsAtIndex:(unsigned int)arg1 enable:(_Bool)arg2;
- (void)tapGestureInProcess:(id)arg1;
- (void)keyboardDidHide;
- (void)textViewTextDidChange;
- (void)keyboardWillShow;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)didCommitEmptyText;
- (void)didCommitText:(id)arg1;
- (id)presentContentView;
- (long long)overrideUserInterfaceStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (id)bulidNSAttributedStringText:(id)arg1 mediumFont:(_Bool)arg2;
- (void)removeAllBtn;
- (void)setButtonsEnable:(_Bool)arg1;
- (void)onClickBtn:(id)arg1;
- (id)getButtonFromBtnString:(id)arg1 style:(long long)arg2 location:(long long)arg3;
- (void)updateSubViewsFrame;
- (_Bool)isLayoutButtonsVertical;
- (id)getBtnAtIndex:(unsigned int)arg1;
- (void)resignInput;
- (void)becomeInput;
- (void)initInputController;
- (void)initInputToolView;
- (void)initInputView;
- (void)initPasswordInputView;
- (void)addTextBackgroundImageToContentView;
- (void)createContainImgTips;
- (id)topViewControllerInMainWindow;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)updateContentHeightWithDiff:(double)arg1;
- (double)getRealContainerHeight;
- (double)getContainerMaxHeight;
- (void)layoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)btnAtIndex:(unsigned long long)arg1;
- (void)clickBgEmptyToHideTips;
- (void)hideTips;
- (void)show;
- (void)showInView:(id)arg1;
- (id)getButtonsView;
- (id)getTextView;
- (id)getPasswordTextField;
- (void)updateTipsTitleWithNewTitle:(id)arg1;
- (void)addConfiguredPasswordInputTextField:(id)arg1;
- (void)addPasswordInputTextField;
- (void)addTextViewWithMaxLen:(unsigned int)arg1;
- (void)addButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2 style:(long long)arg3;
- (void)addButtonWithTitle:(id)arg1 colorName:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)addCancelButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addDestructiveButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addButtonWithTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (id)initWithTitle:(id)arg1 content:(id)arg2 customView:(id)arg3 buttons:(id)arg4;
- (id)initWithTitle:(id)arg1 content:(id)arg2 textFieldPlaceholder:(id)arg3 maxCount:(unsigned int)arg4 buttons:(id)arg5;
- (id)initWithTitle:(id)arg1 andContent:(id)arg2 andBtn:(id)arg3;
@property(nonatomic) _Bool isRequestKeyWindow;
- (id)initWithTitle:(id)arg1 image:(id)arg2 content:(id)arg3 actions:(id)arg4;
- (id)initWithTitle:(id)arg1 imageName:(id)arg2 content:(id)arg3 actions:(id)arg4;
- (id)initWithTitle:(id)arg1 imageName:(id)arg2 content:(id)arg3 buttons:(id)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8 btnTitle:(id)arg9 target:(id)arg10 sel:(SEL)arg11;
- (id)initWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8 rightBtnStyle:(long long)arg9;
- (id)initWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(CDUnknownBlockType)arg4 btnTitle:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (id)initWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)initWithTitle:(id)arg1 andImageName:(id)arg2 andContent:(id)arg3 andCancelText:(id)arg4 andConfirmText:(id)arg5;
- (id)initWithTitle:(id)arg1 andImageName:(id)arg2 andContent:(id)arg3 andCancelText:(id)arg4;
- (id)initWithTitle:(id)arg1 content:(id)arg2 buttons:(id)arg3;
- (CDUnknownBlockType)clickBtnBlock;
- (void)setClickBtnBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)clickEmptyBlock;
- (void)setClickEmptyBlock:(CDUnknownBlockType)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)onClickEmptyBackgroundViewToHideTips:(id)arg1;
- (void)showWithClickEmpty:(CDUnknownBlockType)arg1 clickBtn:(CDUnknownBlockType)arg2;
- (void)wcpay_onClickBtn:(id)arg1;
- (void)wcpay_show;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


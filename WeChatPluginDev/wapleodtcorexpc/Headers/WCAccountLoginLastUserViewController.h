//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSMutableArray, NSString, UIButton, UIImageView, WCButtonListView, WCRedesignTextItem, WCRedesignVerifyCodeTextItem;
@protocol WCAccountLoginLastUserViewControllerDelegate;

@interface WCAccountLoginLastUserViewController
{
    id <WCAccountLoginLastUserViewControllerDelegate> m_delegate;
    _Bool _noPasswordLoginError;
    long long _m_iCount;
    NSString *_name;
    NSMutableArray *_supportLoginTypes;
    unsigned long long _currentLoginType;
    NSMutableArray *_moreButtonTypes;
    NSMutableArray *_switchLoginTypeWordings;
    UIImageView *_headImageView;
    MMUILabel *_titleLabel;
    MMUIButton *_switchButton;
    UIButton *_doneButton;
    UIButton *_bothDeviceButton;
    UIButton *_voicePrintButton;
    UIButton *_voicePrintSwitchButton;
    WCRedesignTextItem *_passwordTextItem;
    WCButtonListView *_bottomButtonView;
    WCRedesignVerifyCodeTextItem *_verifyCodeTextItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCRedesignVerifyCodeTextItem *verifyCodeTextItem; // @synthesize verifyCodeTextItem=_verifyCodeTextItem;
@property(retain, nonatomic) WCButtonListView *bottomButtonView; // @synthesize bottomButtonView=_bottomButtonView;
@property(retain, nonatomic) WCRedesignTextItem *passwordTextItem; // @synthesize passwordTextItem=_passwordTextItem;
@property(retain, nonatomic) UIButton *voicePrintSwitchButton; // @synthesize voicePrintSwitchButton=_voicePrintSwitchButton;
@property(retain, nonatomic) UIButton *voicePrintButton; // @synthesize voicePrintButton=_voicePrintButton;
@property(retain, nonatomic) UIButton *bothDeviceButton; // @synthesize bothDeviceButton=_bothDeviceButton;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) MMUIButton *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) NSMutableArray *switchLoginTypeWordings; // @synthesize switchLoginTypeWordings=_switchLoginTypeWordings;
@property(retain, nonatomic) NSMutableArray *moreButtonTypes; // @synthesize moreButtonTypes=_moreButtonTypes;
@property(nonatomic) unsigned long long currentLoginType; // @synthesize currentLoginType=_currentLoginType;
@property(retain, nonatomic) NSMutableArray *supportLoginTypes; // @synthesize supportLoginTypes=_supportLoginTypes;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool noPasswordLoginError; // @synthesize noPasswordLoginError=_noPasswordLoginError;
@property(nonatomic) long long m_iCount; // @synthesize m_iCount=_m_iCount;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onSwitch;
- (id)getSwitchButtonTitleWithCurrentLoginType:(unsigned long long)arg1;
- (id)getSwitchButtonTitleForLoginType:(unsigned long long)arg1;
- (id)getDisplayPhoneNumber;
- (id)getDisplayLoginName;
- (_Bool)isLastQQLogin;
- (_Bool)isLastLoginAccountTypePhone;
- (id)checkDone;
- (void)refreshView;
- (void)startTimer;
- (void)onResendClicked;
- (void)onBothDeviceClicked;
- (void)onNext;
- (_Bool)checkDebugCommand;
- (void)onMore;
- (void)setDelegate:(id)arg1;
- (void)onSwitchPasswordInput;
- (void)onNoPasswordLoginError;
@property(readonly, nonatomic) _Bool isUsingPhoneNumberVerifyCodeLoginType;
- (_Bool)useRedesignStyle;
- (_Bool)useSheetView;
- (_Bool)autoHandleKeyboardEvent;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initBottomButtonView;
- (void)initVerifyCodeView;
- (void)initPasswordView;
- (void)initVoicePrintView;
- (void)initHeaderView;
- (void)initCommonView;
- (void)initView;
- (void)initData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


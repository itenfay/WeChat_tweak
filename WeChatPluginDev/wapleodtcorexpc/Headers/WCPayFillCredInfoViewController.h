//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, WCBaseKeyboardToolBar, WCBaseTextFieldItem, WCBizInfoGroup, WCPayCredTypeItem, WCPayTenpaySecureCtrlItem;
@protocol WCPayFillCredInfoViewControllerDelegate;

@interface WCPayFillCredInfoViewController
{
    id <WCPayFillCredInfoViewControllerDelegate> _delegate;
    double _minItemLeft;
    WCBizInfoGroup *_infoGroup;
    WCBaseKeyboardToolBar *_keyboardBar;
    WCBaseTextFieldItem *_textFieldNameItem;
    WCPayCredTypeItem *_pickerCredTypeItem;
    WCPayTenpaySecureCtrlItem *_textFieldHolderIDItem;
    UIButton *_footerBtn;
    UIButton *_faqBtn;
    double _footerBtnOldY;
}

- (void).cxx_destruct;
@property(nonatomic) double footerBtnOldY; // @synthesize footerBtnOldY=_footerBtnOldY;
@property(retain, nonatomic) UIButton *faqBtn; // @synthesize faqBtn=_faqBtn;
@property(retain, nonatomic) UIButton *footerBtn; // @synthesize footerBtn=_footerBtn;
@property(retain, nonatomic) WCPayTenpaySecureCtrlItem *textFieldHolderIDItem; // @synthesize textFieldHolderIDItem=_textFieldHolderIDItem;
@property(retain, nonatomic) WCPayCredTypeItem *pickerCredTypeItem; // @synthesize pickerCredTypeItem=_pickerCredTypeItem;
@property(retain, nonatomic) WCBaseTextFieldItem *textFieldNameItem; // @synthesize textFieldNameItem=_textFieldNameItem;
@property(retain, nonatomic) WCBaseKeyboardToolBar *keyboardBar; // @synthesize keyboardBar=_keyboardBar;
@property(retain, nonatomic) WCBizInfoGroup *infoGroup; // @synthesize infoGroup=_infoGroup;
@property(nonatomic) double minItemLeft; // @synthesize minItemLeft=_minItemLeft;
@property(nonatomic) __weak id <WCPayFillCredInfoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onKeyboardFrameManulChange:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)faqBtnClick;
- (void)footerBtnClick;
- (void)clickInfoCell:(id)arg1;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)checkFooterBtnStatus;
- (id)setupTableFooterView;
- (id)setupTableHeaderView;
- (void)setupTableView;
- (void)setupInfoTemplate;
- (void)setupContentView;
- (void)leftBarButtonItemClick;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)setupNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


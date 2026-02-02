//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, UIButton, UILabel, WCBaseControlLogic, WCBaseTextFieldItem, WCBizInfoGroup, WCBizTipView, WCPayTenpaySecureCtrlItem;
@protocol WCPayFillCardNumberViewControllerDelegate;

@interface WCPayFillCardNumberViewController
{
    UIButton *m_footerButton;
    WCBizInfoGroup *m_group;
    WCPayTenpaySecureCtrlItem *m_textFieldItem;
    WCBaseTextFieldItem *m_textAutoFilledCardNumberItem;
    RichTextView *richTextView;
    id <WCPayFillCardNumberViewControllerDelegate> m_delegate;
    WCBizTipView *introView;
    _Bool m_bAutoFilledCardNumber;
    _Bool m_bShowedFavorInfo;
    NSString *m_headerTitle;
    UILabel *autoFilledNumberLabel;
    NSString *m_viewTitle;
    RichTextView *realnameRichTextView;
    UIButton *_scanButton;
    WCBaseControlLogic *_fromControlLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCBaseControlLogic *fromControlLogic; // @synthesize fromControlLogic=_fromControlLogic;
@property(readonly, nonatomic) _Bool m_bAutoFilledCardNumber; // @synthesize m_bAutoFilledCardNumber;
- (unsigned int)regFlag;
- (void)webViewReturn:(id)arg1;
- (void)changeRealName;
- (void)footerTipAction:(id)arg1;
- (unsigned int)onWCPayCardNumberScanViewControllerSource;
- (void)didFindCardNumber:(id)arg1 cardImage:(id)arg2 scanResult:(id)arg3;
- (void)setAutoFilledCardNumber;
- (void)OnWCBizTipViewClosed;
- (void)showDetailTip;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)stopLogicLoading;
- (void)startLogicLoading;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)OnClearAutoFilledCardNumber;
- (void)onNext;
- (void)scanAction:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)reloadTableView;
- (id)getFirstUserTipView;
- (void)initNavigationBar;
- (void)FillCardNumberCancel;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)setShowedFavorInfo;
- (void)initFooterView;
- (void)dealloc;
- (void)setTitle:(id)arg1;
- (void)setHeaderTip:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


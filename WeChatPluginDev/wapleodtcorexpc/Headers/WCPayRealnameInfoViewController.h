//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSIndexPath, NSString, RichTextView, UIButton, WCBaseKeyboardToolBar, WCBaseTextFieldItem, WCBizInfoGroup, WCPayAreaItem, WCPayGetProfessionItem, WCPayRealnameInfoViewV2, WCPayTenpaySecureCtrlItem;
@protocol WCPayRealnameInfoViewControllerDelegate;

@interface WCPayRealnameInfoViewController
{
    UIButton *m_footerButton;
    WCBaseTextFieldItem *m_textFieldNameItem;
    WCPayTenpaySecureCtrlItem *m_textFieldHolderIDItem;
    WCBaseKeyboardToolBar *m_keyboardBar;
    NSIndexPath *m_selectItemIndex;
    id <WCPayRealnameInfoViewControllerDelegate> m_delegate;
    WCBizInfoGroup *group;
    UIButton *_m_readAgreementButton;
    RichTextView *_m_readAgreementTextView;
    WCPayAreaItem *_areaItem;
    WCPayGetProfessionItem *_professionItem;
    double _m_minItemLeft;
    WCPayRealnameInfoViewV2 *_realNameViewV2;
}

- (void).cxx_destruct;
@property(retain) WCPayRealnameInfoViewV2 *realNameViewV2; // @synthesize realNameViewV2=_realNameViewV2;
@property(nonatomic) double m_minItemLeft; // @synthesize m_minItemLeft=_m_minItemLeft;
@property(retain, nonatomic) WCPayGetProfessionItem *professionItem; // @synthesize professionItem=_professionItem;
@property(retain, nonatomic) WCPayAreaItem *areaItem; // @synthesize areaItem=_areaItem;
@property(retain, nonatomic) RichTextView *m_readAgreementTextView; // @synthesize m_readAgreementTextView=_m_readAgreementTextView;
@property(retain, nonatomic) UIButton *m_readAgreementButton; // @synthesize m_readAgreementButton=_m_readAgreementButton;
- (id)onWCPayRealnameInfoViewV2TableViewInfo;
- (id)onWCPayRealnameInfoViewV2CurrentViewController;
- (void)onWCPayRealnameInfoViewV2ClickConfirm:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onWCPayAreaItemDidChoseRegion:(id)arg1;
- (void)setDelegate:(id)arg1;
- (_Bool)checkIsEmpty:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (_Bool)getData:(id)arg1;
- (void)onNext;
- (void)FillRealnameCancel:(id)arg1;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (_Bool)shouldInteractivePop;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)reloadTableView;
- (void)viewDidLayoutSubviews;
- (void)onReadAgreementClick:(id)arg1;
- (void)initFooterView;
- (void)initNavigationBar;
- (void)viewWillLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)adjustBottomTips;
- (void)viewDidLoad;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, WCBaseKeyboardToolBar, WCPayCVVItem, WCPayValidDateItem;
@protocol WCPayResetBindedCardInfoViewControllerDelegate;

@interface WCPayResetBindedCardInfoViewController
{
    _Bool m_bCVV;
    _Bool m_bValidDate;
    UIButton *m_footerButton;
    WCPayCVVItem *m_textFieldCVVItem;
    WCPayValidDateItem *m_pikerValidDateItem;
    WCBaseKeyboardToolBar *m_keyboardBar;
    id <WCPayResetBindedCardInfoViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onPhoneClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)showDetailTip;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)setItemWithCVV:(_Bool)arg1 ValidDate:(_Bool)arg2;
- (void)initNavigationBar;
- (void)initFooterView;
- (void)onNext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


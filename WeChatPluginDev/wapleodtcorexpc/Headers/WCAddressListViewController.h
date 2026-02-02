//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PasswordLogic, UIView;
@protocol WCAddressListViewControllerDelegate;

@interface WCAddressListViewController
{
    id <WCAddressListViewControllerDelegate> m_delegate;
    PasswordLogic *m_passwordLogic;
    int m_enWCAddressAddressListScene;
    UIView *m_oLastLongPressView;
    long long addressSelectedForLongPress;
}

- (void).cxx_destruct;
- (long long)overrideUserInterfaceStyle;
- (_Bool)canBecomeFirstResponder;
- (void)deleteForLongPress;
- (void)copyForLongPress;
- (void)onLongPressAddreessCell:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)commitEditingForRowAtIndexPath:(id)arg1 Cell:(id)arg2;
- (void)clickCopyButton:(id)arg1;
- (void)selectEditingCell:(id)arg1;
- (void)selectActionCell:(id)arg1;
- (void)makeUseAddressTipsCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeAddressFillByFriendsCell:(id)arg1 cellInfo:(id)arg2;
- (void)onSelectAddressFillByFriends;
- (void)makeGiftSceneCell:(id)arg1;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeEmptyCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeDefaultCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeNewCell:(id)arg1 cellInfo:(id)arg2;
- (void)removeFooterView;
- (void)createFooterView;
- (void)refreshViewWithData:(id)arg1;
- (void)resetDefautSelect;
- (double)getCellHeightForAddress:(id)arg1;
- (id)getAddressCopyedString:(id)arg1;
- (id)getAddressDetailString:(id)arg1;
- (void)verifyPasswordFail:(id)arg1;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)startImportYiXunAddress:(_Bool)arg1;
- (void)onImportYiXunAddressConfirm;
- (void)showImportYiXunAddressView;
- (void)dealloc;
- (void)viewDidLoad;
- (double)getContentViewY;
- (double)navigationAreaHeight;
- (id)navigationBarBackgroundColor;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)onNext;
- (void)onResendConfirm;
- (void)reloadAddressList:(int)arg1;
- (void)initNavigationBar;
- (void)initPasswordLogic;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


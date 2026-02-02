//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSString, UIViewController, WCBaseTextFieldItem;

@interface SettingBindQQViewController
{
    MMTableView *m_tableView;
    NSString *m_nsUsrName;
    NSString *m_nsPwd;
    WCBaseTextFieldItem *m_tfUsrName;
    WCBaseTextFieldItem *m_tfPwd;
    unsigned int m_uiEventID;
    UIViewController *m_vcAccount;
    _Bool m_bFirstMake;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *m_vcAccount; // @synthesize m_vcAccount;
@property(retain, nonatomic) WCBaseTextFieldItem *m_tfPwd; // @synthesize m_tfPwd;
@property(retain, nonatomic) WCBaseTextFieldItem *m_tfUsrName; // @synthesize m_tfUsrName;
@property(retain, nonatomic) NSString *m_nsPwd; // @synthesize m_nsPwd;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
- (void)onBindQQSussess;
- (void)OnBindQQErrorReturn:(id)arg1;
- (void)OnBindQQOK;
- (void)showError:(id)arg1 Title:(id)arg2;
- (void)DismissSelf;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCellOfPwd:(id)arg1;
- (void)makeCellOfQQ:(id)arg1;
- (void)makeTextFields;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (void)LogIn:(id)arg1;
- (void)OnCancel:(id)arg1;
- (void)goToPassword:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)init;
- (unsigned int)CreateBindQQEvent;
- (_Bool)CheckInputValid;
- (void)StopLoading;
- (void)StartLoading;
- (void)ShowVerifyController:(id)arg1 Key:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


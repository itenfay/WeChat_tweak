//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, NSString, UIViewController;
@protocol SettingModifyQQViewControllerDelegate;

@interface SettingModifyQQViewController
{
    MMTableViewInfo *m_tableViewInfo;
    UIViewController *m_vcAccount;
    unsigned int m_uiBindQQUin;
    id <SettingModifyQQViewControllerDelegate> _m_SettingModifyQQViewControllerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SettingModifyQQViewControllerDelegate> m_SettingModifyQQViewControllerDelegate; // @synthesize m_SettingModifyQQViewControllerDelegate=_m_SettingModifyQQViewControllerDelegate;
@property(retain, nonatomic) UIViewController *m_vcAccount; // @synthesize m_vcAccount;
@property(nonatomic) unsigned int m_uiBindQQUin; // @synthesize m_uiBindQQUin;
- (void)makeCell:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)undoRegester;
- (void)doRegester;
- (void)OnOperate;
- (void)OnBindQQOK;
- (void)OnUnBindQQOK;
- (void)OnUnBindQQFail;
- (void)updateViewOnQQChange;
- (id)getHeaderView;
- (void)updateTableCell;
- (void)onCancel:(id)arg1;
- (void)ShowBindQQView;
- (void)onUnBind:(id)arg1;
- (void)confirmUnBind;
- (void)onUnBindAccount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, SettingMyAccountExtInfoLogic, WCTableViewManager;

@interface SettingSocialInfoViewController
{
    WCTableViewManager *m_tableViewMgr;
    SettingMyAccountExtInfoLogic *m_infoLogic;
}

- (void).cxx_destruct;
- (void)showModifySignView;
- (void)showModifyAddressView;
- (void)showModifySexView;
- (void)MMRegionPickerDidChoosRegion:(id)arg1;
- (void)saveNewSign:(id)arg1;
- (void)onModifySex:(id)arg1;
- (id)getAddressString;
- (id)getSexString;
- (id)makeSignView;
- (void)updateTableCell;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)Save;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


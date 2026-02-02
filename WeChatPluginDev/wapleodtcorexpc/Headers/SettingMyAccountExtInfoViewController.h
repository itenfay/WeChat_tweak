//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPickerView, NSString, SettingMyAccountExtInfoLogic;
@protocol settingMyAccountExtInfoDelegate;

@interface SettingMyAccountExtInfoViewController
{
    struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> m_mapAccountCellToCellType;
    struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> m_mapSessionType;
    id <settingMyAccountExtInfoDelegate> m_delegate;
    unsigned int m_curPickerMode;
    MMPickerView *m_pickerView;
    SettingMyAccountExtInfoLogic *m_infoLogic;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <settingMyAccountExtInfoDelegate> m_delegate; // @synthesize m_delegate;
- (void)onInfoChange;
- (void)dealloc;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showModifySignView;
- (void)showModifyAddressView;
- (void)showModifySexView:(id)arg1;
- (void)MMPickerViewDidChooseRowTitle:(id)arg1 atSessionTitle:(id)arg2;
- (void)MMRegionPickerDidChoosRegion:(id)arg1;
- (void)saveNewSign:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)makeAccountCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeAddressCell:(id)arg1;
- (void)makeSexCell:(id)arg1;
- (void)makeCellInfoInternal:(id)arg1 col:(id)arg2 value:(id)arg3 mustFill:(_Bool)arg4;
- (id)makeMustFillLabel;
- (void)makeSignCell:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)SaveAndExit;
- (void)Save;
- (void)returnBack;
- (void)initCellType;
- (void)initSessionType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


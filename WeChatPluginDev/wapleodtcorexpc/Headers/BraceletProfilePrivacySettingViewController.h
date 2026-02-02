//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMTableViewInfo;

@interface BraceletProfilePrivacySettingViewController
{
    MMTableViewInfo *m_tableViewInfo;
    _Bool m_isSettingsChanged;
    CContact *m_contact;
}

- (void).cxx_destruct;
- (void)goWeSportBlackListView;
- (void)updateBrandReceiveMSG;
- (_Bool)isReceiveMessage;
- (void)onLikeSwitchChange:(id)arg1;
- (void)onRankMsgSwitchChange:(id)arg1;
- (void)onTakePartInSwitchChange:(id)arg1;
- (void)initTable;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1;

@end


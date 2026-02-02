//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DelaySwitchSettingLogic, MMTableViewInfo;

@interface SettingAddMeWayViewController
{
    _Bool m_allowFindMeByPhoneSwitchOpen;
    _Bool m_allowFindMeByContactConfigSwitchOpen;
    _Bool m_bAllowFindByQQOpen;
    _Bool m_allowFindMeByGoogleSwitchOpen;
    _Bool m_addMeByGroupSwitchOpen;
    _Bool m_addMeByQRCodeSwitchOpen;
    _Bool m_addMeByCardSwitchOpen;
    MMTableViewInfo *m_tableViewInfo;
    unsigned int m_phoneSection;
    _Bool m_bIsShowPhoneSectionIndexAtFirst;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bIsShowPhoneSectionIndexAtFirst; // @synthesize m_bIsShowPhoneSectionIndexAtFirst;
- (void)removeCoverView;
- (void)hideCoverView;
- (void)startCoverAnimOnPhone;
- (void)allowAddMeByCardSwitchChanged:(id)arg1;
- (void)allowAddMeByQRCodeSwitchChanged:(id)arg1;
- (void)allowAddMeByGroupSwitchChanged:(id)arg1;
- (void)allowQQFriendFindMeSwitchChanged:(id)arg1;
- (void)allowFindMeByContactConfigSwitchChanged:(id)arg1;
- (void)allowFindMeByPhoneSwitchChanged:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)reloadTableData;
- (id)init;

@end


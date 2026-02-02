//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CEnterpriseContact, MMTableViewInfo, NSMutableArray, NSString;

@interface EnterpriseContactInfoViewController
{
    CEnterpriseContact *_enterpriseContact;
    NSString *_myUserName;
    NSMutableArray *_memberDataItemList;
    NSMutableArray *_memberViewList;
    _Bool _isMuteChanged;
    _Bool _isFavoriteChanged;
    _Bool _isTopChanged;
    _Bool _isChatStatusNotifyOpen;
    _Bool _isFavorite;
    _Bool _isTop;
    _Bool _isDeleteButtonHidden;
    _Bool _chatConfig;
    MMTableViewInfo *_tableViewInfo;
    unsigned int _colCount;
}

- (void).cxx_destruct;
- (void)onUpdateEnterpriseGroupName:(id)arg1 errorCode:(int)arg2;
- (void)onUpdateEnterpriseGroupMemberList:(id)arg1 errorCode:(int)arg2;
- (void)onCreateEnterpriseGroup:(id)arg1 errorCode:(int)arg2 extDic:(id)arg3;
- (void)onBatchModifyEnterpriseContact:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onWebViewWillClose:(id)arg1;
- (void)onEnterpriseMemberViewAdd:(id)arg1;
- (void)onEnterpriseMemberViewDelete:(id)arg1;
- (void)onEnterpriseMemberHeadImageLongPress:(id)arg1;
- (void)onEnterpriseMemberHeadImageClick:(id)arg1;
- (_Bool)isContactInRoomMember:(id)arg1;
- (void)switchDeleteButtonHidden;
- (void)updateDeleteButtonHidden:(_Bool)arg1;
- (void)enterEnterpriseChat:(id)arg1;
- (void)updateContactSetting;
- (void)setTopStatus:(id)arg1;
- (void)setFavStatus:(id)arg1;
- (void)setMuteStatus:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)openEditTitle;
- (void)quitChatRoom;
- (void)onQuitButtonClicked:(id)arg1;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMemberCell:(id)arg1 CellInfo:(id)arg2;
- (id)makeMemberListSection;
- (id)makeSettingSection;
- (id)makeChatRoomSection;
- (void)reloadTableViewInfo;
- (void)updateTableFooterView;
- (void)updateTitleView;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)initView;
- (void)initTableViewInfo;
- (void)initData;
- (void)dealloc;
- (id)initWithEnterpriseContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


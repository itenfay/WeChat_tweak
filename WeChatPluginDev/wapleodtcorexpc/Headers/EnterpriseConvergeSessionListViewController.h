//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, EnterpriseBrandContactHelper, EnterpriseOpenWeworkBottomBar, MMTableView, MMTitleView, NSArray, NSObject, NSString, UIView, WCDataSearcher;

@interface EnterpriseConvergeSessionListViewController
{
    unsigned int _fromScene;
    MMTableView *_tableView;
    MMTitleView *_titleView;
    WCDataSearcher *_searcher;
    NSObject *_searchController;
    UIView *_footerView;
    UIView *_footerViewBackground;
    UIView *_emptyView;
    _Bool _isEntering;
    unsigned int _wwEntryType;
    EnterpriseBrandContactHelper *_helper;
    NSArray *_convergeSessionList;
    EnterpriseOpenWeworkBottomBar *_openWeworkBottomBar;
    CContact *_mainBrandContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *mainBrandContact; // @synthesize mainBrandContact=_mainBrandContact;
- (void)onBizShareInfoResult:(int)arg1 errorMsg:(id)arg2 shareInfo:(id)arg3 mainBrandUserName:(id)arg4;
- (void)onWebViewWillClose:(id)arg1;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (void)onCreateEnterpriseGroup:(id)arg1 errorCode:(int)arg2 extDic:(id)arg3;
- (void)onQuitEnterpriseGroup:(id)arg1 errorCode:(int)arg2;
- (void)onEnterpriseConvergeSessionChanged:(id)arg1;
- (void)onEnterpriseBrandAttrChanged:(id)arg1;
- (id)makeCell:(id)arg1;
- (_Bool)reloadWeworkEntryData:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getViewController;
- (_Bool)shouldInteractivePop;
- (id)getMMSearchBar;
- (void)reloadTable;
- (void)enterChat:(id)arg1;
- (void)updateMemberToLocal:(id)arg1;
- (void)createChatroom:(id)arg1;
- (void)createSingleChat:(id)arg1;
- (void)reportExposeWeWorkBanner:(unsigned int)arg1;
- (void)openWework:(id)arg1;
- (void)openInviteColleages:(id)arg1;
- (void)openFavSessionListView:(id)arg1;
- (void)openCreateChat:(id)arg1;
- (void)openChatBrandInfo:(id)arg1;
- (void)menuItemClick:(id)arg1;
- (void)showRightTopMenuBtn:(id)arg1;
- (void)report;
- (void)reportSubBrandClick:(id)arg1 SubType:(int)arg2 unreadCount:(int)arg3;
- (id)getChatBrandContact;
- (void)updateMainBrandContactData;
- (void)updateChatBrandContactData;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willDisappear;
- (void)willAppear;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)updateTitleView;
- (void)updateLeftBarItem;
- (void)initWeworkEntry;
- (void)initFooterView;
- (void)resetBannerTips;
- (void)hideSearchBar;
- (void)initSearchBar;
- (void)initTableView;
- (void)initView;
- (void)initData;
- (id)initWithMainBrandContact:(id)arg1 fromScene:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


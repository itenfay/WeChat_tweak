//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonManageDataLogic, MMTableView, NSMutableArray, NSString, StoreEmotionReplaceMyPanelListCgi, UISwitch;

@interface EmoticonManageViewController
{
    _Bool _isDeleteMode;
    _Bool _isFromStore;
    NSMutableArray *_sectionInfoArray;
    EmoticonManageDataLogic *_dataLogic;
    MMTableView *_tableView;
    UISwitch *_remoteRecommendSwitch;
    StoreEmotionReplaceMyPanelListCgi *_m_replaceCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) StoreEmotionReplaceMyPanelListCgi *m_replaceCgi; // @synthesize m_replaceCgi=_m_replaceCgi;
@property(nonatomic) _Bool isFromStore; // @synthesize isFromStore=_isFromStore;
@property(nonatomic) _Bool isDeleteMode; // @synthesize isDeleteMode=_isDeleteMode;
@property(retain, nonatomic) UISwitch *remoteRecommendSwitch; // @synthesize remoteRecommendSwitch=_remoteRecommendSwitch;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) EmoticonManageDataLogic *dataLogic; // @synthesize dataLogic=_dataLogic;
@property(retain, nonatomic) NSMutableArray *sectionInfoArray; // @synthesize sectionInfoArray=_sectionInfoArray;
- (void)onStoreEmotionReplaceMyPanelListCgiFailed;
- (void)onStoreEmotionReplaceMyPanelListCgiOKWithPids:(id)arg1;
- (void)loopUninstallIPSetPackagesIn:(id)arg1 failedUninstallPids:(id)arg2;
- (void)onUninstallIPSetWithObj:(id)arg1;
- (void)onUnstallButtonClickWithPid:(id)arg1;
- (_Bool)isEmoticonManageCellDeleteMode;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)OnUpdateEmoticonPackageListFor:(unsigned long long)arg1 WithPid:(id)arg2;
- (void)onRemoteRecommendSwitchValueChanged:(id)arg1;
- (void)onClickManageCameraEmoticonCell;
- (void)onClickManageCustomEmoticonCell;
- (void)onClickPurchasedCell;
- (void)onClickPrivacyCell;
- (void)showLocalEmojiRecommendPageSheetIfNeeded;
- (void)onGotoNormalMode;
- (void)onSaveEdit;
- (void)OnCancel;
- (void)onGotoDeleteMode;
- (void)updateEditButtonStatus;
- (void)updateNavigationBarConfig;
- (id)makeRemoteRecommendSwitchCellInfo;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidAppear:(_Bool)arg1;
- (void)initView;
- (void)configSessionInfoArray;
- (void)loadData;
- (void)viewDidLoad;
- (id)initWithIsFromStore:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


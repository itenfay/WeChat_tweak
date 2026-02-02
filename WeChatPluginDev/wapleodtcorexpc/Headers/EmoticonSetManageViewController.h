//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonManageDataLogic, EmoticonManageDataObject, EmoticonManageSectionInfo, MMTableView, NSString, StoreEmotionReplaceMyPanelListCgi;

@interface EmoticonSetManageViewController
{
    _Bool _isDeleteMode;
    _Bool _hasUndownload;
    EmoticonManageSectionInfo *_sectionInfo;
    EmoticonManageDataLogic *_dataLogic;
    EmoticonManageDataObject *_dataObj;
    MMTableView *_tableView;
    StoreEmotionReplaceMyPanelListCgi *_replaceCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) StoreEmotionReplaceMyPanelListCgi *replaceCgi; // @synthesize replaceCgi=_replaceCgi;
@property(nonatomic) _Bool hasUndownload; // @synthesize hasUndownload=_hasUndownload;
@property(nonatomic) _Bool isDeleteMode; // @synthesize isDeleteMode=_isDeleteMode;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) EmoticonManageDataObject *dataObj; // @synthesize dataObj=_dataObj;
@property(retain, nonatomic) EmoticonManageDataLogic *dataLogic; // @synthesize dataLogic=_dataLogic;
@property(retain, nonatomic) EmoticonManageSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
- (void)onStoreEmotionReplaceMyPanelListCgiFailed;
- (void)onStoreEmotionReplaceMyPanelListCgiOKWithPids:(id)arg1;
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
- (void)onGotoNormalMode;
- (void)onSaveEdit;
- (void)OnCancel;
- (void)onGotoDeleteMode;
- (void)updateEditButtonStatus;
- (void)configSessionInfoArray;
- (void)loadData;
- (void)updateNavigationBarConfig;
- (void)viewDidTransitionToNewSize;
- (void)initView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDataObj:(id)arg1 andDataLogic:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSMutableDictionary, NSString, UIImageView, UILabel, UIView, WAAppItemData, WAMainListStarLogic, WAPackageSweeperLogic, WAStarMoveContext, WeToast;

@interface WAStarLinearListViewController
{
    NSString *m_showSessionId;
    NSMutableArray *m_menuArray;
    NSMutableDictionary *m_contactViewCache;
    WAAppItemData *m_starItemToUnstar;
    WAPackageSweeperLogic *m_sweepLogic;
    _Bool hasEdited;
    NSMutableArray *m_sessionData;
    _Bool _isViewHasLayout;
    _Bool _editMode;
    unsigned long long _scene;
    WAMainListStarLogic *_starLogic;
    MMTableView *_tableView;
    WeToast *_toastView;
    UIView *_emptyView;
    UILabel *_emptyLabel;
    UIImageView *_emptyLogo;
    WAStarMoveContext *_moveContext;
    NSMutableArray *_toDeleteItemDatas;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *toDeleteItemDatas; // @synthesize toDeleteItemDatas=_toDeleteItemDatas;
@property(retain, nonatomic) WAStarMoveContext *moveContext; // @synthesize moveContext=_moveContext;
@property(retain, nonatomic) UIImageView *emptyLogo; // @synthesize emptyLogo=_emptyLogo;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) WeToast *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool editMode; // @synthesize editMode=_editMode;
@property(retain, nonatomic) WAMainListStarLogic *starLogic; // @synthesize starLogic=_starLogic;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void)reportDestopOpWithAppItem:(id)arg1 eventId:(unsigned long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getContactByUserName:(id)arg1;
- (void)reloadTableViewNonAnimated;
- (void)reloadTableView;
- (void)showTipsViewController:(id)arg1;
- (void)showToast:(id)arg1;
- (void)processDeletions;
- (void)deleteStarItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)unstarAppItem:(id)arg1 atIndexPath:(id)arg2;
- (void)onDeleteStaredItem:(id)arg1 atIndexPath:(id)arg2;
- (void)onModifyWeAppContact:(id)arg1;
- (void)onWeAppItemBatchMoved:(id)arg1;
- (void)starDataDidUpdated;
- (void)appItemDidUnStaredFailedWithUnknownError:(id)arg1;
- (void)appItemDidUnStaredSuccess:(id)arg1;
- (void)appItemDidStaredFailedWithUnknownError:(id)arg1;
- (void)appItemDidStaredFailedWithCountLimit:(id)arg1;
- (void)appItemDidStaredSuccess:(id)arg1;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (unsigned int)stateFlagForAppItem:(id)arg1 withIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)updateRefreshFooterHiddenState;
- (void)updateFooterNoMoreDataState;
- (void)updateViewStates;
- (void)initEmptyView;
- (void)initRefreshControl;
- (void)initTableView;
- (void)onEditDone;
- (void)onEditCancel;
- (void)onEdit;
- (void)onReturn;
- (void)updateNavigationItems;
- (void)initCustomNavigationBar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)fetchRemoteStarData;
- (void)reportStarListViewShowAction;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)checkAndUpdateContactInList:(id)arg1;
- (void)updateEmptyViewState;
- (long long)indexOfSessionId:(id)arg1;
- (void)updateSectionData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


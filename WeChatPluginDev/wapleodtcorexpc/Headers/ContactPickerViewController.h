//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FTSMultiContactSearchLogic, MMTableView, NSDictionary, NSMutableArray, NSString, NewContactsSearchPanelView, WCSTokenPickLogic;
@protocol ContactPickerViewDelegate;

@interface ContactPickerViewController
{
    NewContactsSearchPanelView *_panelView;
    MMTableView *_defaultTableView;
    NSDictionary *_dicPreSelectedContact;
    NSMutableArray *_arrMultiResultWrap;
    NSMutableArray *_arrSectionTitles;
    FTSMultiContactSearchLogic *_multiSearchLogic;
    unsigned long long _expandBitSet;
    NSMutableArray *m_arrNeedVerifyUsrName;
    WCSTokenPickLogic *_tokenPickLogic;
    id <ContactPickerViewDelegate> _delegate;
    unsigned long long _scene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id <ContactPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportRecommendInfo:(int)arg1;
- (void)openMessageContentView:(id)arg1;
- (void)asyncRecommend;
- (void)updateDefaultQuery;
- (void)pickDataDeSelected:(id)arg1 indexPath:(id)arg2;
- (void)pickDataSelected:(id)arg1 indexPath:(id)arg2;
- (_Bool)isRecommendContactSection:(long long)arg1;
- (_Bool)isRecommendGroupSection:(long long)arg1;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)didDeleteLastWithKey:(id)arg1;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)cancelSearch;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)mmTableView:(id)arg1 dragTriggerNotifyWithOffset:(double)arg2;
- (void)setExpandStatus:(_Bool)arg1 forSection:(long long)arg2;
- (_Bool)isExpandingForSection:(long long)arg1;
- (_Bool)shouldDisplayMoreCellInSection:(long long)arg1;
- (unsigned long long)maxSupportedSectionCount;
- (void)removePickDataForUsername:(id)arg1;
- (void)removeSelectedContactForUsrname:(id)arg1;
- (void)OnCreateGroup:(id)arg1 withStatus:(int)arg2 resp:(id)arg3;
- (void)multiResultKVReport;
- (void)onRecommendResultUpdated:(id)arg1;
- (void)onContactResultUpdated:(id)arg1;
- (void)onMultiDone:(id)arg1;
- (void)onCancel:(id)arg1;
- (id)genErrorString:(id)arg1 needVerify:(_Bool *)arg2;
- (id)getErrorContactName:(id)arg1;
- (void)createChatRoom;
- (id)genMemerList;
- (void)onDeselectContact:(id)arg1 forIndexPath:(id)arg2 searchMode:(_Bool)arg3;
- (void)onSelectContact:(id)arg1 forIndexPath:(id)arg2 searchMode:(_Bool)arg3;
- (void)makeMoreCell:(id)arg1 description:(id)arg2 image:(id)arg3;
- (void)makeCell:(id)arg1 contact:(id)arg2 matchTip:(id)arg3 clickable:(_Bool)arg4;
- (void)startLoading;
- (void)updateTokenLogic;
- (void)tryDeselectOtherContactForIndexPath:(id)arg1;
- (void)tryReorderContactAtSection:(long long)arg1;
- (void)setNavigationBarItemEnable:(_Bool)arg1;
- (void)updateNavigationItem;
- (_Bool)isSelectedContact:(id)arg1;
- (unsigned long long)numberOfRowsInSection:(unsigned long long)arg1;
- (_Bool)isMoreCellAtIndexPath:(id)arg1;
- (void)setCell:(id)arg1 enable:(_Bool)arg2 selected:(_Bool)arg3;
- (void)initThisTableView;
- (void)initPanelView;
- (void)initView;
- (id)getCellImageForStatus:(_Bool)arg1 enable:(_Bool)arg2;
- (id)getCellImage:(id)arg1;
- (_Bool)isSelected:(id)arg1;
- (void)initNavBar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initSectionTitles:(id)arg1;
- (void)initSearchLogic:(id)arg1;
- (id)initWithQuery:(id)arg1;
- (id)initWithKeywords:(id)arg1 andSelectedContact:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EnterpriseContactSearchView, EnterpriseSearchDataController, NSMutableArray, NSRecursiveLock, NSString;
@protocol EnterpriseConvergeSessionSearchControllerDelegate;

@interface EnterpriseConvergeSessionSearchController
{
    NSString *_mainBrandUserName;
    NSString *_chatBrandUserName;
    EnterpriseSearchDataController *_chatBrandDataController;
    NSString *_searchText;
    NSMutableArray *_aryContact;
    NSMutableArray *_aryGroup;
    NSMutableArray *_aryApplication;
    EnterpriseContactSearchView *_moreView;
    _Bool _hasContact;
    _Bool _hasMoreContact;
    _Bool _hasGroup;
    _Bool _hasMoreGroup;
    _Bool _hasApplication;
    _Bool _hasMoreApplication;
    _Bool _isLoadingContact;
    int _contactSection;
    int _groupSection;
    int _applicationSection;
    _Bool _isActive;
    _Bool _reloadSmooth;
    NSRecursiveLock *_lock;
    _Bool _hasSubBrandContact;
    _Bool _hasMoreSubBrandContact;
    id <EnterpriseConvergeSessionSearchControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EnterpriseConvergeSessionSearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)hasApplicationSection;
- (_Bool)hasGroupSection;
- (_Bool)hasContactSection;
- (double)getTitleCellTopMargin;
- (id)makeContactCell:(id)arg1 tableView:(id)arg2;
- (id)makeLoadingTipCell:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (id)makeMoreTipCell:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (id)makeTitleCell:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (id)getDataController;
- (id)getViewController;
- (id)getMMSearchBar;
- (void)onSelectEnterpriseSearchResultItem:(id)arg1;
- (void)onEnterpriseContactSearchViewReturn:(_Bool)arg1;
- (_Bool)shouldProcessRemoteSearchResp:(id)arg1 range:(unsigned int)arg2;
- (void)onRemoteSearchMoreCompleted:(id)arg1 range:(unsigned int)arg2 result:(id)arg3;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (id)cellForIndex:(id)arg1 ForSearchViewTable:(id)arg2;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)doBrandLocalSearch;
- (void)doChatBrandRemoteSearch:(id)arg1;
- (void)reloadTableView;
- (void)enterChat:(id)arg1;
- (void)openMoreView:(unsigned int)arg1;
- (void)initData;
- (id)initWithMainBrandUserName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesItem, MMTableView, NSString;

@interface FavBaseDetailViewController
{
    MMTableView *m_tableView;
    FavoritesItem *m_favItem;
}

- (void).cxx_destruct;
- (void)onFavTagEditOK;
- (void)onFavTagEditBegin:(int)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)convertToNoteViewController;
- (_Bool)canShowConvertToNoteActionSheet;
- (void)genFooterContent:(id)arg1 indexPath:(id)arg2;
- (void)genHeadCell:(id)arg1 indexPath:(id)arg2;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (long long)getRowsInContentSection;
- (void)onAction:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)initTableView;
- (void)initNavigationBar;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithFavItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSMutableDictionary, NSString, UILabel;
@protocol ShakeListDelegate;

@interface ShakeCombineListViewController
{
    MMTableView *m_tableView;
    NSMutableDictionary *m_userHeaderImageCache;
    id <ShakeListDelegate> m_delegate;
    unsigned int m_shakeListViewType;
    NSMutableArray *m_tableRows;
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
@property(retain, nonatomic) NSMutableDictionary *m_userHeaderImageCache; // @synthesize m_userHeaderImageCache;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onSelectedContactInfo:(id)arg1;
- (_Bool)isInMyContactList:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)makeShakeTvCell:(id)arg1 Item:(id)arg2 IndexPath:(id)arg3;
- (id)makeShakeMusicCell:(id)arg1 Item:(id)arg2 IndexPath:(id)arg3;
- (id)makeShakePeopleCell:(id)arg1 Item:(id)arg2 IndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadDataFromStorage;
- (void)reloadTableViewData;
- (void)showNoResultTips:(id)arg1;
- (id)getCachedHeaderImageForUser:(id)arg1 imgUrl:(id)arg2;
- (void)viewDidLoad;
- (void)initTableView;
- (void)viewDidLayoutSubviews;
- (void)OnReturn;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onReturn;
- (void)onClickClearHistory;
- (void)clearListData;
- (void)setM_Delegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


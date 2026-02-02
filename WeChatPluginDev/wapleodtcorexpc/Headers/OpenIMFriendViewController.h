//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactSearchLogic, MMTableView, MMUILabel, NSString, UIButton, UIImageView, UIView, WCSearchBar, WCTimeLineFooterView;

@interface OpenIMFriendViewController
{
    ContactSearchLogic *_contactSearchLogic;
    UIImageView *_searchBarWrap;
    UIView *_searchBarSuperView;
    UIButton *_backButton;
    WCSearchBar *_searcher;
    _Bool _bForbidSearchControllerCallBack;
    WCTimeLineFooterView *_loadingFooterView;
    UIView *_emptyFooterView;
    MMUILabel *_emptyFooterLable;
    MMTableView *m_tableView;
    _Bool _bIsSearchingFromNetwork;
    NSString *_reportSessionId;
    _Bool _islastVCNavBarHidden;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool islastVCNavBarHidden; // @synthesize islastVCNavBarHidden=_islastVCNavBarHidden;
- (void)cancelButtonClicked;
- (void)onBackBtnClick;
- (void)onContactSearchLogicFail:(id)arg1;
- (void)onContactSearchLogicDone:(id)arg1 FromScene:(unsigned int)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)doSearchAction:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)OpenContactInfo:(id)arg1;
- (void)setLoadingStatus;
- (void)didEndSearch;
- (void)beginSearch;
- (void)initData;
- (void)updateEmptyFooterView:(id)arg1;
- (void)initSearchTableFoot;
- (void)initTable;
- (void)initSearchBar;
- (void)initView;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewWillPopOrDismiss:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (id)navigationBarBackgroundColor;
- (void)UISplitViewWillChangeSplitMode;
- (_Bool)isSeachActive;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


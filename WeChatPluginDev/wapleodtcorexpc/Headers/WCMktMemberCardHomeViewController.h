//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUILabel, NSIndexPath, NSString, UIButton, UIView, WCMktMemberCardHomeLogicController;

@interface WCMktMemberCardHomeViewController
{
    WCMktMemberCardHomeLogicController *_logicController;
    MMTableView *_tableView;
    MMUILabel *_headerContentLabel;
    UIButton *_headerContentCoverBtn;
    UIView *_emptyView;
    NSIndexPath *_willDeleteIndexPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *willDeleteIndexPath; // @synthesize willDeleteIndexPath=_willDeleteIndexPath;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UIButton *headerContentCoverBtn; // @synthesize headerContentCoverBtn=_headerContentCoverBtn;
@property(retain, nonatomic) MMUILabel *headerContentLabel; // @synthesize headerContentLabel=_headerContentLabel;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCMktMemberCardHomeLogicController *logicController; // @synthesize logicController=_logicController;
- (_Bool)isVCFromJsapiScene;
- (void)onTableViewNeedUpdateSortContent;
- (void)onTableViewNeedShowLoading;
- (void)onTableViewNeedDeleteWithIndexPath:(id)arg1;
- (void)onTableViewNeedRefresh;
- (void)onTableviewGetHomePageDataFail;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)vcStopLoading;
- (void)vcStartLoading;
- (id)getViewController;
- (void)bubbleBtnClick;
- (void)setupEmptyView;
- (void)rightBarButtonClick;
- (void)updateRightBarButton;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)sortRuleCoverBtnClick;
- (void)handleHeaderRefresh;
- (id)genTableFooterView;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateFooterView;
- (void)setupTableView;
- (void)setupView;
- (void)setupData;
- (id)navigationBarBackgroundColor;
- (_Bool)useBlackStatusbar;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


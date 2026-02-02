//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel, UITableView, UIView, WAProfileRelatedViewModel;

@interface WAWeAppBindBrandListViewController
{
    UIView *_contentHeaderView;
    UILabel *_contentLabel;
    UITableView *_listTableView;
    WAProfileRelatedViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAProfileRelatedViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)openBrandContact:(id)arg1;
- (void)handleSelectWith:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onBackButtonClicked:(id)arg1;
- (void)layoutMySubViews;
- (void)viewDidLayoutSubviews;
- (void)initTableView;
- (void)initContentLabel;
- (id)navigationBarBackgroundColor;
- (void)initNavigationItems;
- (void)initView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UITableView, WCFinderSearchHotSpotViewModel;
@protocol WCFinderSearchHotSpotViewDelegate;

@interface WCFinderSearchHotSpotView
{
    id <WCFinderSearchHotSpotViewDelegate> _delegate;
    UITableView *_tableView;
    WCFinderSearchHotSpotViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderSearchHotSpotViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCFinderSearchHotSpotViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onRemoveSearchHistory:(id)arg1;
- (void)onFinderSearchHotSpotVMDataChanged:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (int)getCommentScene;
- (void)reloadHistoryData;
- (void)setupUI;
- (void)setupData;
- (void)setup;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


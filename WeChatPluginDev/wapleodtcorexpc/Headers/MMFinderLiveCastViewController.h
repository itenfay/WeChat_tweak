//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveCastViewModel, MMFinderLiveCastingView, MMUIButton, NSString, UILabel, UITableView, UIView;

@interface MMFinderLiveCastViewController
{
    _Bool _hasReportedThatDevicesDisplaying;
    _Bool _castingDeviceViewItemDidChanged;
    unsigned long long _customSupportInterfaceOrientations;
    MMFinderLiveCastViewModel *_viewModel;
    UIView *_containerView;
    UITableView *_tableView;
    MMFinderLiveCastingView *_castingView;
    UILabel *_titleLabel;
    UILabel *_tipsLabel;
    MMUIButton *_operateAllButton;
    unsigned long long _projectionSearchTime;
    unsigned long long _lastCastingTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastCastingTime; // @synthesize lastCastingTime=_lastCastingTime;
@property(nonatomic) unsigned long long projectionSearchTime; // @synthesize projectionSearchTime=_projectionSearchTime;
@property(nonatomic) _Bool castingDeviceViewItemDidChanged; // @synthesize castingDeviceViewItemDidChanged=_castingDeviceViewItemDidChanged;
@property(nonatomic) _Bool hasReportedThatDevicesDisplaying; // @synthesize hasReportedThatDevicesDisplaying=_hasReportedThatDevicesDisplaying;
@property(retain, nonatomic) MMUIButton *operateAllButton; // @synthesize operateAllButton=_operateAllButton;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMFinderLiveCastingView *castingView; // @synthesize castingView=_castingView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMFinderLiveCastViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) unsigned long long customSupportInterfaceOrientations; // @synthesize customSupportInterfaceOrientations=_customSupportInterfaceOrientations;
- (id)audienceLogReporter;
- (void)liveCastingViewDidClickStopButton:(id)arg1;
- (void)liveCastViewModel:(id)arg1 castingDeviceViewItemDidChange:(id)arg2;
- (void)liveCastViewModel:(id)arg1 didFailToCastDeviceViewItem:(id)arg2 withError:(id)arg3;
- (void)liveCastViewModelDidReloadViewItems:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)closeButtonClicked:(id)arg1;
- (void)layoutTopViews;
- (void)refreshTopViews;
- (void)loadTopViews;
- (void)refreshCastingView;
- (void)loadCastingView;
- (void)loadTableView;
- (void)loadContainerView;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)init;
- (id)initWithViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1 lastCastingTime:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


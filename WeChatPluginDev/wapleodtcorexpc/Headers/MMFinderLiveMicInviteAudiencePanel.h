//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveMicInviteAudienceViewModel, MMFinderLiveTaskId, MMTableView, MMUIActivityIndicatorView, NSString, UILabel;
@protocol MMFinderLiveMicInviteAudiencePanelDelegate;

@interface MMFinderLiveMicInviteAudiencePanel
{
    _Bool _showLoading;
    id <MMFinderLiveMicInviteAudiencePanelDelegate> _actionDelegate;
    unsigned long long _micIndex;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveMicInviteAudienceViewModel *_viewModel;
    MMTableView *_tableView;
    MMUIActivityIndicatorView *_loadingView;
    UILabel *_noUserLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showLoading; // @synthesize showLoading=_showLoading;
@property(retain, nonatomic) UILabel *noUserLabel; // @synthesize noUserLabel=_noUserLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMFinderLiveMicInviteAudienceViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) unsigned long long micIndex; // @synthesize micIndex=_micIndex;
@property(nonatomic) __weak id <MMFinderLiveMicInviteAudiencePanelDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)onMMFinderLiveConnectedMicUserCellViewConnectMicToUser:(id)arg1;
- (void)onMMFinderLiveMicInviteAudienceViewModelUserListUpdated;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)updateViewAndReloadTableView;
- (void)updateListWithInvitedMicAudienceDict:(id)arg1 waitConnectAudienceSet:(id)arg2 removedAudienceSet:(id)arg3;
- (void)showWithAnimated:(_Bool)arg1;
- (void)updateViewsHidden;
- (void)layoutNoUserLabel;
- (void)layoutLoadingView;
- (void)layoutTableView;
- (void)configPageSheetAndDetailView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


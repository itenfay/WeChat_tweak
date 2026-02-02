//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFansGroupMemberLogic, MMFinderLiveFansGroupMemberSelfIntimacyView, MMFinderLiveFansGroupMemberTableViewModel, MMFinderLiveTaskId, MMTableView, MMUILabel, MMUIMaskContainerView, NSString, UIView, WCTimeLineFooterView;

@interface MMFinderLiveFansGroupMemberListPanel
{
    long long _openMode;
    MMFinderLiveTaskId *_taskId;
    UIView *_contentView;
    MMTableView *_fansGroupMemberTableView;
    MMUILabel *_noMemberTipLabel;
    WCTimeLineFooterView *_footerView;
    MMFinderLiveFansGroupMemberTableViewModel *_fansGroupMemberTableViewModel;
    MMFinderLiveFansGroupMemberLogic *_fetchLogic;
    MMFinderLiveFansGroupMemberSelfIntimacyView *_selfIntimacyView;
    MMUIMaskContainerView *_tableViewContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIMaskContainerView *tableViewContainerView; // @synthesize tableViewContainerView=_tableViewContainerView;
@property(retain, nonatomic) MMFinderLiveFansGroupMemberSelfIntimacyView *selfIntimacyView; // @synthesize selfIntimacyView=_selfIntimacyView;
@property(retain, nonatomic) MMFinderLiveFansGroupMemberLogic *fetchLogic; // @synthesize fetchLogic=_fetchLogic;
@property(retain, nonatomic) MMFinderLiveFansGroupMemberTableViewModel *fansGroupMemberTableViewModel; // @synthesize fansGroupMemberTableViewModel=_fansGroupMemberTableViewModel;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMUILabel *noMemberTipLabel; // @synthesize noMemberTipLabel=_noMemberTipLabel;
@property(retain, nonatomic) MMTableView *fansGroupMemberTableView; // @synthesize fansGroupMemberTableView=_fansGroupMemberTableView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) long long openMode; // @synthesize openMode=_openMode;
- (id)audienceLogReporter;
- (void)reportForPanelExpose;
- (unsigned long long)getSortType;
- (unsigned long long)getFilterType;
- (void)onFansGroupMemberTableNeedRefreshWithMemberType:(unsigned long long)arg1 groupType:(unsigned long long)arg2;
- (void)onFansGroupMemberTableDidScroll;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)leftButtonAction;
- (void)refreshFansGroupMemberList;
- (id)liveTask;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidAppear;
- (void)hideNoMemberTipLabel;
- (void)showNoMemberTipLabel;
- (void)createNoMemberTipLabel;
- (void)layoutNoMemberTipLabel;
- (void)updateFooterView:(unsigned long long)arg1;
- (id)createFansGroupMemberTableFooterView;
- (void)layoutFansGroupMemberTableView;
- (void)layoutSelfIntimacyView;
- (double)contentHeight;
- (double)contentWidth;
- (void)layoutContentView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)getCurrentLeftButton;
- (_Bool)shouldAdaptToDarkLight;
- (void)createFetchLogic;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1 openMode:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


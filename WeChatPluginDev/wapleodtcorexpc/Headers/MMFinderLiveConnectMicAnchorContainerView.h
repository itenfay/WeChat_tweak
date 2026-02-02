//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveConnectMicRandomHintTableFooterView, MMTableView, NSArray, NSMutableArray, NSString, UILabel, UITableViewDiffableDataSource;

@interface MMFinderLiveConnectMicAnchorContainerView
{
    _Bool _forceDisableApplySectionCellButton;
    _Bool _footerViewHasBeenExposed;
    NSArray *connectMicUserList;
    NSMutableArray *_candicateAnchorList;
    NSArray *_connectingAnchorUserList;
    MMTableView *_tableView;
    UILabel *_tipsLabel;
    MMFinderLiveConnectMicRandomHintTableFooterView *_footerView;
    UITableViewDiffableDataSource *_diffableDataSource;
    NSMutableArray *_sections;
    NSArray *_originCandicateAnchorList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool footerViewHasBeenExposed; // @synthesize footerViewHasBeenExposed=_footerViewHasBeenExposed;
@property(nonatomic) _Bool forceDisableApplySectionCellButton; // @synthesize forceDisableApplySectionCellButton=_forceDisableApplySectionCellButton;
@property(retain, nonatomic) NSArray *originCandicateAnchorList; // @synthesize originCandicateAnchorList=_originCandicateAnchorList;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) UITableViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(retain, nonatomic) MMFinderLiveConnectMicRandomHintTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *connectingAnchorUserList; // @synthesize connectingAnchorUserList=_connectingAnchorUserList;
@property(retain, nonatomic) NSMutableArray *candicateAnchorList; // @synthesize candicateAnchorList=_candicateAnchorList;
@property(retain, nonatomic) NSArray *connectMicUserList; // @synthesize connectMicUserList;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onClickRandomMatchButton:(id)arg1;
- (void)onClickInviteAnchorButton:(id)arg1;
- (void)onContainerWillDisappear;
- (void)onContainerWillHide;
- (void)onContainerDidShow;
- (id)displaySections;
- (id)mainScrollView;
- (void)updateConnectingAnchorSection;
- (void)updateCandicateSection;
- (void)updateApplySection;
- (_Bool)handleFilterCandicateAnchorList;
- (void)tryFetchCandicateAnchorList;
- (void)resetCandicateAnchorList;
- (void)showTipsLabelWithTips:(id)arg1 topAreaHeight:(double)arg2;
- (id)makeRandomMatchButtonWithFrame:(struct CGRect)arg1;
- (id)makeInviteAnchorButtonWithFrame:(struct CGRect)arg1;
- (void)applyDiffSnapshot:(_Bool)arg1;
- (void)setupDataSourceIfNeeded;
- (void)checkFooterViewExposedAndReport;
- (void)layoutTableView;
- (void)layoutContentView;
- (void)updateWithConnectMicUserList:(id)arg1 connectingAnchorUserList:(id)arg2 forceDisableApplySectionCellButton:(_Bool)arg3 animted:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


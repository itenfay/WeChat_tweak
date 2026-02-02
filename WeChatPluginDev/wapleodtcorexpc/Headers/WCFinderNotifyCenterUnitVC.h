//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString, UITableView, UITableViewDiffableDataSource, UIView, WCFinderDataLoadTips, WCFinderFeedInputView, WCFinderMagicAnimationLogic, WCFinderNotifyCenterCellViewModel, WCFinderNotifyCenterUnitVM, WCFinderRefreshTableFooterView;

@interface WCFinderNotifyCenterUnitVC
{
    _Bool _shouldRefetchDataAfterPopOrDismiss;
    _Bool _showMentionSwitchEntry;
    unsigned long long _redDotUnreadCount;
    UIView *_customNavBg;
    UITableView *_tableView;
    WCFinderRefreshTableFooterView *_footerView;
    WCFinderDataLoadTips *_dataLoadTips;
    WCFinderFeedInputView *_commentInputView;
    WCFinderNotifyCenterCellViewModel *_currentReplyViewModel;
    UITableViewDiffableDataSource *_tableViewDataSource;
    WCFinderNotifyCenterUnitVM *_vm;
    WCFinderNotifyCenterCellViewModel *_showProfileViewModel;
    WCFinderMagicAnimationLogic *_magicAnimLogic;
    NSMutableSet *_highlightedExpandedMentionIDSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *highlightedExpandedMentionIDSet; // @synthesize highlightedExpandedMentionIDSet=_highlightedExpandedMentionIDSet;
@property(retain, nonatomic) WCFinderMagicAnimationLogic *magicAnimLogic; // @synthesize magicAnimLogic=_magicAnimLogic;
@property(retain, nonatomic) WCFinderNotifyCenterCellViewModel *showProfileViewModel; // @synthesize showProfileViewModel=_showProfileViewModel;
@property(retain, nonatomic) WCFinderNotifyCenterUnitVM *vm; // @synthesize vm=_vm;
@property(nonatomic) _Bool showMentionSwitchEntry; // @synthesize showMentionSwitchEntry=_showMentionSwitchEntry;
@property(retain, nonatomic) UITableViewDiffableDataSource *tableViewDataSource; // @synthesize tableViewDataSource=_tableViewDataSource;
@property(nonatomic) _Bool shouldRefetchDataAfterPopOrDismiss; // @synthesize shouldRefetchDataAfterPopOrDismiss=_shouldRefetchDataAfterPopOrDismiss;
@property(retain, nonatomic) WCFinderNotifyCenterCellViewModel *currentReplyViewModel; // @synthesize currentReplyViewModel=_currentReplyViewModel;
@property(retain, nonatomic) WCFinderFeedInputView *commentInputView; // @synthesize commentInputView=_commentInputView;
@property(retain, nonatomic) WCFinderDataLoadTips *dataLoadTips; // @synthesize dataLoadTips=_dataLoadTips;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *customNavBg; // @synthesize customNavBg=_customNavBg;
@property(nonatomic) unsigned long long redDotUnreadCount; // @synthesize redDotUnreadCount=_redDotUnreadCount;
- (void)registerYReportSdk;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onListLoadingStateModified;
- (void)onNotifyCenterListDataChangedFromSource:(unsigned long long)arg1;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)onDataLoadTipsClickRetry;
- (void)feedInputViewPostComment:(id)arg1 withReplyComment:(id)arg2;
- (void)inputViewDidUpdateCommentIdentity:(id)arg1;
- (void)notifyCenterCellDidClickAggregatedExpandButton:(id)arg1;
- (void)notifyCenterCell:(id)arg1 replyCommentErrorWithMsg:(id)arg2;
- (void)notifyCenterCellReplyCommentSuccesss:(id)arg1;
- (void)notifyCenterCell:(id)arg1 emitThanksMagicAnimationWithStyle:(unsigned long long)arg2;
- (void)notifyCenterCell:(id)arg1 didClickFollowButtonWithViewModel:(id)arg2;
- (void)notifyCenterCell:(id)arg1 didClickUserRelationshipTagWithViewModel:(id)arg2;
- (void)notifyCenterCell:(id)arg1 didClickCommentLikeButtonWithViewModel:(id)arg2;
- (void)notifyCenterCell:(id)arg1 didClickCommentReplyButtonWithViewModel:(id)arg2;
- (void)notifyCenterCell:(id)arg1 didClickThanksButtonWithThanksState:(_Bool)arg2;
- (void)notifyCenterCellHeightChanged:(id)arg1;
- (void)notifyCenterCell:(id)arg1 didClickMultiAvatarWithViewModel:(id)arg2;
- (void)notifyCenterCell:(id)arg1 didClickAvatarWithViewModel:(id)arg2;
- (void)notifyCenterCell:(id)arg1 didClickThumbWithViewModel:(id)arg2;
- (int)notifyCenterCellCommentScene:(id)arg1;
- (void)fansProfileViewController:(id)arg1 clickActionWithContact:(id)arg2 finderContact:(id)arg3 type:(unsigned long long)arg4;
- (void)showDataItemWasPrivateSetTips;
- (void)showDataItemWasDeletedTips;
- (void)showMentionDetailViewController:(id)arg1 cellVM:(id)arg2 autoShowListType:(unsigned long long)arg3;
- (void)showDetailDataItemVCWithContentVM:(id)arg1 mentionVM:(id)arg2 autoShowListType:(unsigned long long)arg3 forceToMentionDetailViewController:(_Bool)arg4;
- (void)openMusicVCWithDataItem:(id)arg1 viewModel:(id)arg2;
- (void)showDataItemDetailVCActionWithViewModel:(id)arg1 forceToMentionDetailViewController:(_Bool)arg2;
- (unsigned long long)fansProfileSceneWithViewModel:(id)arg1;
- (void)clickToShowUserProfileWithViewModel:(id)arg1;
- (void)showFansListViewController;
- (void)clickMentionViewModelAction:(id)arg1;
- (id)newMentionTips;
- (_Bool)shouldShowNewMentionTips;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (unsigned long long)currentPageCellType;
- (void)reportExpandIgnoredMention;
- (void)reportCellElementClickWithViewModel:(id)arg1 clickRegion:(unsigned long long)arg2;
- (id)gen20763KVReportDictWithViewModel:(id)arg1;
- (unsigned long long)tabTypeForReport;
- (_Bool)isMemberTab;
- (void)didClickToExpandIgnoredMention;
- (void)onTopBannerClicked;
- (void)reloadTableData;
- (void)updateLoadingState;
- (void)layoutLoadTips;
- (void)setupLoadingState;
- (id)cellWithIndexPath:(id)arg1 itemID:(id)arg2;
- (void)setupDataSource;
- (void)setupTableView;
- (void)layoutCustomNavBg;
- (void)setupCustomNavBg;
- (void)setupUI;
- (_Bool)useTransparentNavibar;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1 tabType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


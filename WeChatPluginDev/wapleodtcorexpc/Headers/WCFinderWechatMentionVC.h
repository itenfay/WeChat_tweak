//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSMutableSet, NSString, UITableView, UITableViewDiffableDataSource, UIView, WCFinderDataLoadTips, WCFinderFeedInputView, WCFinderMagicAnimationLogic, WCFinderRefreshTableFooterView, WCFinderWechatMentionCellViewModel, WCFinderWechatMentionVM;

@interface WCFinderWechatMentionVC
{
    WCFinderWechatMentionVM *_viewModel;
    UIView *_customNavBg;
    UITableView *_tableView;
    UITableViewDiffableDataSource *_tableViewDataSource;
    WCFinderRefreshTableFooterView *_footerView;
    WCFinderDataLoadTips *_dataLoadTips;
    WCFinderFeedInputView *_commentInputView;
    WCFinderWechatMentionCellViewModel *_currentReplyViewModel;
    NSMutableDictionary *_magicAnimationMetaDict;
    WCFinderMagicAnimationLogic *_magicAnimLogic;
    NSMutableSet *_highlightedExpandedMentionIDSet;
    long long _unreadLikeCount;
    long long _unreadCommentCount;
    long long _unreadNotifyCount;
    double _enterTime;
    WCFinderWechatMentionCellViewModel *_showProfileViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderWechatMentionCellViewModel *showProfileViewModel; // @synthesize showProfileViewModel=_showProfileViewModel;
@property(nonatomic) double enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) long long unreadNotifyCount; // @synthesize unreadNotifyCount=_unreadNotifyCount;
@property(nonatomic) long long unreadCommentCount; // @synthesize unreadCommentCount=_unreadCommentCount;
@property(nonatomic) long long unreadLikeCount; // @synthesize unreadLikeCount=_unreadLikeCount;
@property(retain, nonatomic) NSMutableSet *highlightedExpandedMentionIDSet; // @synthesize highlightedExpandedMentionIDSet=_highlightedExpandedMentionIDSet;
@property(retain, nonatomic) WCFinderMagicAnimationLogic *magicAnimLogic; // @synthesize magicAnimLogic=_magicAnimLogic;
@property(retain, nonatomic) NSMutableDictionary *magicAnimationMetaDict; // @synthesize magicAnimationMetaDict=_magicAnimationMetaDict;
@property(retain, nonatomic) WCFinderWechatMentionCellViewModel *currentReplyViewModel; // @synthesize currentReplyViewModel=_currentReplyViewModel;
@property(retain, nonatomic) WCFinderFeedInputView *commentInputView; // @synthesize commentInputView=_commentInputView;
@property(retain, nonatomic) WCFinderDataLoadTips *dataLoadTips; // @synthesize dataLoadTips=_dataLoadTips;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableViewDiffableDataSource *tableViewDataSource; // @synthesize tableViewDataSource=_tableViewDataSource;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *customNavBg; // @synthesize customNavBg=_customNavBg;
@property(retain, nonatomic) WCFinderWechatMentionVM *viewModel; // @synthesize viewModel=_viewModel;
- (void)registerYReportSdk;
- (void)reportExpandIgnoredMention;
- (void)reportCellElementClickWithViewModel:(id)arg1 clickRegion:(unsigned long long)arg2;
- (id)gen20763KVReportDictWithCellViewModel:(id)arg1;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onDataLoadTipsClickRetry;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)onWechatMentionListDataChangedFrom:(unsigned long long)arg1;
- (void)showDetailDataItemVCWithParams:(id)arg1;
- (void)showCommonWarningTipsWithContent:(id)arg1;
- (void)showDataItemWasPrivateSetTips;
- (void)showDataItemWasDeletedTips;
- (void)showProfileWithViewModel:(id)arg1;
- (void)openFeedWithOpenParams:(id)arg1;
- (void)jumpToDataItemWithViewModel:(id)arg1;
- (void)didClickToExpandIgnoredMention;
- (void)feedInputViewPostComment:(id)arg1 withReplyComment:(id)arg2;
- (void)inputViewDidUpdateCommentIdentity:(id)arg1;
- (void)wechatMentionFollowApplyTableViewCellHeightChanged:(id)arg1;
- (void)wechatMentionCell:(id)arg1 didClickAggregatedExpandButton:(id)arg2;
- (void)wechatMentionCellHeightChanged:(id)arg1;
- (void)wechatMentionCell:(id)arg1 didClickCommentLikeButton:(id)arg2;
- (void)wechatMentionCell:(id)arg1 didClickCommentReplyButton:(id)arg2;
- (void)wechatMentionCell:(id)arg1 didClickUserTag:(id)arg2;
- (void)wechatMentionCell:(id)arg1 didClickFollowButton:(id)arg2;
- (void)wechatMentionCell:(id)arg1 didClickMultiAvatarWithViewModel:(id)arg2;
- (void)wechatMentionCell:(id)arg1 didClickAvatarWithViewModel:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tryShowMagicEmojiWithIndexPath:(id)arg1;
- (void)tryShowThanksMagicEmojiWithInitialDelay:(double)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onListLoadingStateModified;
- (void)reloadTableData;
- (void)updateLoadingState;
- (id)cellWithIndexPath:(id)arg1 itemID:(id)arg2;
- (void)setupDataSource;
- (void)layoutLoadTips;
- (void)configureTableView;
- (void)setupLoadingState;
- (void)layoutCustomNavBg;
- (void)setupCustomNavBg;
- (void)setupUI;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (_Bool)useTransparentNavibar;
- (void)viewDidLoad;
- (id)initWithType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


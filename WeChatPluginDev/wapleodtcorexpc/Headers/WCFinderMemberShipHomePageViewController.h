//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel, UITableViewDiffableDataSource, UIView, UIViewController, WCFinderEventDelegate, WCFinderMSPostHeader, WCFinderMemberShipHomePageViewModel, WCFinderRefreshTableFooterView, WCFinderReuseQueue, WCFinderTabSwitchView;
@protocol WCFinderCommentBaseViewProtocol;

@interface WCFinderMemberShipHomePageViewController
{
    WCFinderMemberShipHomePageViewModel *_viewModel;
    WCFinderTabSwitchView *_tabSwitchView;
    UITableViewDiffableDataSource *_dataSource;
    WCFinderEventDelegate *_delegate;
    WCFinderRefreshTableFooterView *_footerView;
    UIViewController<WCFinderCommentBaseViewProtocol> *_lastCommentVC;
    WCFinderReuseQueue *_reuseQueue;
    UIView *_originView;
    WCFinderMSPostHeader *_postHeaderView;
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) WCFinderMSPostHeader *postHeaderView; // @synthesize postHeaderView=_postHeaderView;
@property(retain, nonatomic) UIView *originView; // @synthesize originView=_originView;
@property(retain, nonatomic) WCFinderReuseQueue *reuseQueue; // @synthesize reuseQueue=_reuseQueue;
@property(retain, nonatomic) UIViewController<WCFinderCommentBaseViewProtocol> *lastCommentVC; // @synthesize lastCommentVC=_lastCommentVC;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderEventDelegate *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITableViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) WCFinderTabSwitchView *tabSwitchView; // @synthesize tabSwitchView=_tabSwitchView;
@property(retain, nonatomic) WCFinderMemberShipHomePageViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)clickCommentNickname:(id)arg1 username:(id)arg2 contact:(id)arg3 isWeChatFriend:(_Bool)arg4 dataItem:(id)arg5;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)impactFeedbackWithStyle:(long long)arg1;
- (void)onClickInputView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onActivityFeed:(id)arg1 turnToLiked:(_Bool)arg2;
- (void)onActivityFeedClickHeader:(id)arg1;
- (_Bool)isSelfFeed:(id)arg1;
- (void)onActivityFeedLongPress:(id)arg1;
- (void)onActivityFeed:(id)arg1 notifyHeightChanged:(id)arg2;
- (void)showUserProfile:(id)arg1 contactType:(int)arg2 profileRefScene:(unsigned long long)arg3 vc:(id)arg4;
- (void)onActivityFeed:(id)arg1 clickTextLink:(id)arg2 fromLikeList:(_Bool)arg3;
- (void)onCloseFullScreenPlayComplete:(id)arg1;
- (void)onActivityFeed:(id)arg1 clickVideo:(id)arg2 originRect:(struct CGRect)arg3 originView:(id)arg4;
- (void)onActivityFeed:(id)arg1 clickPhoto:(id)arg2 photoIndex:(long long)arg3 originViewArr:(id)arg4;
- (void)onReport:(id)arg1;
- (void)onRealDelete:(id)arg1;
- (void)onDelete:(id)arg1;
- (void)changeContentVM:(id)arg1 stickyTopStatus:(_Bool)arg2;
- (void)onActivityFeedClickMore:(id)arg1;
- (void)onActivityFeedClickComment:(id)arg1 enterType:(unsigned long long)arg2;
- (void)onActivityChangeStickyTopTo:(_Bool)arg1 contentVM:(id)arg2 success:(_Bool)arg3 errorInfo:(id)arg4;
- (void)onActivityViewModelPageChanged;
- (void)onLoadingStateChanged:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (id)zoneViewController;
- (void)showCommentListWithContentVM:(id)arg1 shouldEnterKeyBoard:(_Bool)arg2 refCommentID:(unsigned long long)arg3 commentAction:(unsigned long long)arg4 showTitle:(_Bool)arg5 enterType:(unsigned long long)arg6 appendCommentModel:(id)arg7;
- (void)onClickViewAllCommentAction:(id)arg1 isActiveInput:(_Bool)arg2 isFromCommentButton:(_Bool)arg3 enterType:(unsigned long long)arg4;
- (void)reloadFooter;
- (void)reloadData;
- (void)onDisplayPageFeedArrayChanged;
- (void)selectedPageChanged:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setEventDelegate:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 indexPath:(id)arg2 cellForItemIdentifier:(id)arg3;
- (_Bool)onTabSwitchViewUserSelectIdx:(long long)arg1 oldIdx:(long long)arg2 animated:(_Bool)arg3 context:(void *)arg4 completion:(CDUnknownBlockType)arg5;
- (id)tabSwitchView:(id)arg1 titleForTabAtIndex:(long long)arg2;
- (long long)numberOfTabSwitchView:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)registerCellForTableView:(id)arg1;
- (void)updateContentInset:(struct UIEdgeInsets)arg1 minSize:(struct CGSize)arg2;
- (void)dealloc;
- (void)loadView;
- (id)tableView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


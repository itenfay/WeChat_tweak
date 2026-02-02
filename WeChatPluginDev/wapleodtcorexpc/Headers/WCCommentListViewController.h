//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIView, WCCommentEmotionFloatView, WCCommentListTipsView, WCImageView, WCMomentsPageContext, WCSNSMessage, WCStatTimerHelper, WCTimeLineFooterView;

@interface WCCommentListViewController
{
    MMTableView *_tableView;
    WCTimeLineFooterView *_footerView;
    NSMutableArray *_arrCommentList;
    NSMutableDictionary *_dicDataItems;
    NSMutableArray *_arrCommentListFromDB;
    unsigned int _autoGetMoreCount;
    _Bool _bUnreadOnly;
    _Bool _bHasNullIDs;
    _Bool _bHasMoreItems;
    NSMutableDictionary *_dicCells;
    NSMutableDictionary *_dicCellHeights;
    unsigned int _fromScene;
    unsigned int _totalUnreadCount;
    unsigned int _clickLikeCount;
    unsigned int _clickCommentCount;
    unsigned long long _totalBrowseTime;
    WCStatTimerHelper *_statTimeHelper;
    NSMutableSet *updatingItemIDs;
    unsigned long long _enterStartTime;
    NSMutableDictionary *_clickArray;
    _Bool _isNewMessageMuteTipsEnabled;
    _Bool _shouldShowMuteTips;
    WCMomentsPageContext *_pageContext;
    WCCommentEmotionFloatView *_commentEmotionView;
    UIView *_commentEmotionBgView;
    WCSNSMessage *_selectedMessage;
    WCImageView *_selectedImageView;
    NSMutableSet *_updatedItemIds;
    NSMutableSet *_deletedItemIds;
    NSString *_triggleMuteTipsItemId;
    WCCommentListTipsView *_commentListTipsView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCommentListTipsView *commentListTipsView; // @synthesize commentListTipsView=_commentListTipsView;
@property(nonatomic) _Bool shouldShowMuteTips; // @synthesize shouldShowMuteTips=_shouldShowMuteTips;
@property(nonatomic) _Bool isNewMessageMuteTipsEnabled; // @synthesize isNewMessageMuteTipsEnabled=_isNewMessageMuteTipsEnabled;
@property(retain, nonatomic) NSString *triggleMuteTipsItemId; // @synthesize triggleMuteTipsItemId=_triggleMuteTipsItemId;
@property(retain, nonatomic) NSMutableSet *deletedItemIds; // @synthesize deletedItemIds=_deletedItemIds;
@property(retain, nonatomic) NSMutableSet *updatedItemIds; // @synthesize updatedItemIds=_updatedItemIds;
@property(retain, nonatomic) WCImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) WCSNSMessage *selectedMessage; // @synthesize selectedMessage=_selectedMessage;
@property(retain, nonatomic) UIView *commentEmotionBgView; // @synthesize commentEmotionBgView=_commentEmotionBgView;
@property(retain, nonatomic) WCCommentEmotionFloatView *commentEmotionView; // @synthesize commentEmotionView=_commentEmotionView;
@property(retain, nonatomic) WCMomentsPageContext *pageContext; // @synthesize pageContext=_pageContext;
@property(nonatomic) _Bool bUnreadOnly; // @synthesize bUnreadOnly=_bUnreadOnly;
- (void)onUpdateDataItemDetailFinished:(long long)arg1 itemId:(id)arg2 dataItem:(id)arg3;
- (void)onModifyContact:(id)arg1;
- (void)onDataItemDeleteFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onSetWCMessageNotifyFinished:(long long)arg1 dataItemID:(id)arg2 opFlag:(_Bool)arg3;
- (void)commentListContentView:(id)arg1 didClickWCImage:(id)arg2;
- (void)onWCCommentEmotionViewSizeChange;
- (void)onHeadAdSpecialClick:(id)arg1;
- (void)onHeadImageDoubleClicked:(id)arg1;
- (void)onHeadImageClicked:(id)arg1;
- (void)onReveiceWCDeleteMessage:(id)arg1;
- (void)onViewAnimationWillHide;
- (void)onCommentListViewDataChanged:(id)arg1;
- (void)onDeleteData;
- (void)onCommentDetailViewController:(id)arg1 reEditDataItem:(id)arg2;
- (void)onRestartUpload;
- (void)onClearList:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clearList;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showInvisibleTipsWithMessage:(id)arg1;
- (void)openWCCommentDetail:(id)arg1 withDataItem:(id)arg2;
- (void)openWCCommentImageView:(id)arg1;
- (void)openWCCommentDetail:(id)arg1 imageViewForShow:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)contentViewYExcludeCommentListTipsView;
- (double)contentViewHeightExcludeCommentListTipsView;
- (_Bool)isCellMarkedAsIgnoreNotification:(id)arg1;
- (id)getRightestViewFor:(id)arg1;
- (void)updateEditInfo:(id)arg1 indexPath:(id)arg2;
- (void)updateCacheByServerPushDeleteAdMsg:(id)arg1;
- (void)updateCacheBySnsAdNotInterestsMsg:(id)arg1;
- (void)updateCacheBySnsObjDeleteMsg:(id)arg1;
- (void)updateCommentCache:(id)arg1;
- (id)getLoadMoreCell;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onLoadMore;
- (void)scrollViewDidScroll:(id)arg1;
- (void)initTableView;
- (void)initTableFooterView;
- (void)initCommentListTipsView;
- (void)getMoreData;
- (void)getData;
- (void)addWCMessagesWithArray:(id)arg1 MoreData:(_Bool)arg2;
- (id)getObjIDByWCMessage:(id)arg1;
- (id)createCommentJson:(id)arg1 isIgnored:(_Bool)arg2;
- (void)reportBrowseMessageListInfo;
- (_Bool)showNavigationBarSepLine;
- (void)viewDidTransitionToNewSize;
- (void)willDisappear;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewDidLoad;
- (void)markMessageAllRead;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


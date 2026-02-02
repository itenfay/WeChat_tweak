//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavClickStreamData, FavMultiSelectToolView, FavWarningBannerView, MMTimer, MMUIButton, MMUIView, MMUIWindow, NSString, UIButton, UIView;
@protocol MyFavoritesViewControllerDelegate;

@interface MyFavoritesViewController
{
    UIButton *m_bannerBtn;
    MMUIWindow *m_fullScreenWindow;
    FavWarningBannerView *m_warningBanner;
    FavClickStreamData *m_clickData;
    UIView *canvasPageAnimateOriginView;
    double m_originHeaderHeight;
    FavMultiSelectToolView *m_multiSelectActionView;
    MMUIView *m_spaceHeaderview;
    MMTimer *m_syncTimer;
    int m_deleteType;
    MMUIButton *m_favBarBtn;
    double m_lastContentOffset;
    _Bool m_didVibrate;
    _Bool m_isWarningbanner;
    _Bool m_isWarningbannerFullDisplay;
    _Bool m_isSpaceTipFullDisplay;
    int m_reportStatus;
    _Bool _createNewDirectly;
    id <MyFavoritesViewControllerDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool createNewDirectly; // @synthesize createNewDirectly=_createNewDirectly;
@property(nonatomic) __weak id <MyFavoritesViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)onLongPress:(id)arg1;
- (void)onLongPressSquareImg:(id)arg1 withInfo:(id)arg2;
- (void)msgFastBrowseView:(id)arg1 didChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(id)arg3;
- (_Bool)msgFastBrowseView:(id)arg1 willChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(id)arg3;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (void)onFinderFeedFlowViewDelete:(id)arg1 indexPath:(id)arg2;
- (void)onFinderFeedFlowViewEditTag:(id)arg1;
- (void)onFinderFeedFlowViewForward:(id)arg1;
- (void)onFinderFeedFlowViewChangeMultiSelect;
- (void)finderFeedFlowView:(id)arg1 updateCell:(id)arg2 atIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onFinderFeedFlowViewMultiSelect;
- (void)registerYReportSdk;
- (void)onSendLocationToFriendWithViewController:(id)arg1;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onClosePlayer;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onFavTagEditCancel;
- (void)onFavTagEditOK;
- (id)getFavForawrdViewController;
- (void)OnForwardDone;
- (void)OnFavCapacityInfoUpdate;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnUploadFavoritesItemFinish:(id)arg1 ErrCode:(int)arg2;
- (void)onShowFavContext:(id)arg1 DataItem:(id)arg2 NeedReport:(_Bool)arg3 FromScene:(unsigned int)arg4 FavIndex:(unsigned int)arg5 SearchText:(id)arg6;
- (void)onSelectFavDataItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)onSelectFavItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3 fromScene:(unsigned int)arg4 favIndex:(unsigned int)arg5 searchText:(id)arg6 withCell:(id)arg7;
- (void)onSelectItem:(id)arg1;
- (void)onSelectRowAtIndexPath:(id)arg1;
- (void)performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)commitEditingStyle:(long long)arg1 forRowAtIndexPath:(id)arg2;
- (id)getTempCapacityString:(id)arg1;
- (id)getCapacityString;
- (void)triggerVibrationFeedback;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)onScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)showSpaceTip;
- (void)updateSpaceTip;
- (int)getCapBarReportStatus;
- (void)onSpaceTipOrWarningbannerExposure;
- (void)initSpaceTip;
- (void)hideWarningBanner;
- (void)showWarningBanner;
- (void)showSpaceHalfScreenViewController;
- (void)showCapacityWarningTips;
- (void)showUploadFailForCapacityTips;
- (_Bool)checkForCapacityWarningBanner;
- (_Bool)checkForFailBanner;
- (void)checkForBanner;
- (void)jumpToViewStreamVideo:(id)arg1;
- (void)enableBtns;
- (void)disableBtns;
- (void)deleteDataAtIndexPath:(id)arg1;
- (void)realDeleteData:(id)arg1;
- (int)getListPageType;
- (void)onDeleteItems;
- (void)addTagForItems;
- (void)forwardData:(id)arg1;
- (void)onForwardItems;
- (void)hideSelectActionView;
- (void)updateTableViewInset;
- (void)onMultiSelectDone;
- (void)setImageTableViewBottomInset:(double)arg1;
- (void)onMultiSelect;
- (_Bool)shouldIgnoreTableHeadViewForContentInset;
- (void)updateSelectActionView;
- (void)initMultiSelectActionView;
- (id)warningBanner;
- (void)onReturn;
- (void)onClickNewBtn;
- (void)initNavigationBar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)hideVisibleCellMenu;
- (void)viewWillAppear:(_Bool)arg1;
- (void)onTimeSync;
- (void)stopAutoSyncTimer;
- (void)startAutoSyncTimer;
- (void)viewDidLoad;
- (void)updateData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


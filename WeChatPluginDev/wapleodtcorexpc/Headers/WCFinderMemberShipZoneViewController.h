//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveBuyTicketHandle, NSString, WCFinderArbitraryPageView, WCFinderCreateLiveViewModel, WCFinderInvalidTipsView, WCFinderLiveAudienceNoticeReporter, WCFinderMemberShipBlockView, WCFinderMemberShipZoneHeader, WCFinderMemberShipZonePushParams, WCFinderMemberShipZoneReporter, WCFinderMemberShipZoneViewModel, WCFinderPostMgr;

@interface WCFinderMemberShipZoneViewController
{
    WCFinderMemberShipZonePushParams *_params;
    WCFinderArbitraryPageView *_pageView;
    WCFinderMemberShipBlockView *_blockView;
    WCFinderMemberShipZoneHeader *_headerView;
    WCFinderPostMgr *_postMgr;
    WCFinderInvalidTipsView *_invalidTipsView;
    WCFinderMemberShipZoneViewModel *_viewModel;
    WCFinderCreateLiveViewModel *_createLiveVM;
    NSString *_descriptionPromptWording;
    MMFinderLiveBuyTicketHandle *_ticketHandle;
    WCFinderLiveAudienceNoticeReporter *_liveReporter;
    WCFinderMemberShipZoneReporter *_memberShipReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMemberShipZoneReporter *memberShipReporter; // @synthesize memberShipReporter=_memberShipReporter;
@property(retain, nonatomic) WCFinderLiveAudienceNoticeReporter *liveReporter; // @synthesize liveReporter=_liveReporter;
@property(retain, nonatomic) MMFinderLiveBuyTicketHandle *ticketHandle; // @synthesize ticketHandle=_ticketHandle;
@property(retain, nonatomic) NSString *descriptionPromptWording; // @synthesize descriptionPromptWording=_descriptionPromptWording;
@property(retain, nonatomic) WCFinderCreateLiveViewModel *createLiveVM; // @synthesize createLiveVM=_createLiveVM;
@property(retain, nonatomic) WCFinderMemberShipZoneViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderInvalidTipsView *invalidTipsView; // @synthesize invalidTipsView=_invalidTipsView;
@property(retain, nonatomic) WCFinderPostMgr *postMgr; // @synthesize postMgr=_postMgr;
@property(retain, nonatomic) WCFinderMemberShipZoneHeader *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WCFinderMemberShipBlockView *blockView; // @synthesize blockView=_blockView;
@property(retain, nonatomic) WCFinderArbitraryPageView *pageView; // @synthesize pageView=_pageView;
@property(retain, nonatomic) WCFinderMemberShipZonePushParams *params; // @synthesize params=_params;
- (void)finderInvalidTipsViewDidClickComplainButton:(id)arg1;
- (void)finderInvalidTipsView:(id)arg1 didClickLink:(id)arg2;
- (void)finderInvalidTipsViewDidClickConfirmButton:(id)arg1;
- (_Bool)needShowLiveMinizeWindowRunTime;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onDiscussionPostViewControllerClickDone;
- (void)postMgrStartUpload;
- (void)postMgrSaveDraft;
- (void)removeDraftTab;
- (void)selectedPageAtIdx:(long long)arg1;
- (void)switchToFirstDataPage;
- (void)switchToPage:(id)arg1;
- (void)onMemberShipZoneHeaderClickFans:(id)arg1;
- (_Bool)onMemberShipZoneContentTextViewShouldForbidClick;
- (void)onMemberShipZoneHeaderHeightChanged;
- (void)onMemberShipZoneHeaderDataChanged:(id)arg1;
- (void)onMemberShipZoneHeaderClickActivity:(id)arg1;
- (void)onMemberShipZoneHeaderClickPost:(id)arg1;
- (void)onMemberShipZoneHeaderClickLive:(id)arg1;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (id)getCurrentViewController;
- (void)onMemberShipZoneViewShouldShowConcertTicketConfirmed:(id)arg1;
- (void)onMemberShipZoneViewLiveNoticeReserveStateChanged:(unsigned long long)arg1 notice:(id)arg2;
- (void)onMemberShipZoneViewModelRequestDetailFailed:(id)arg1;
- (void)showInvalidView;
- (void)showMemberBlockView;
- (void)showValidContent:(_Bool)arg1;
- (void)onMemberShipZoneViewModelDetailFetched:(id)arg1 remote:(_Bool)arg2;
- (void)bindPageReport;
- (void)createLiveViewModel;
- (void)reportProfile;
- (void)unsubscribe;
- (void)showIntroduce;
- (void)onClickMore;
- (void)onClickSearch;
- (void)genActionSheet:(id)arg1 isAuthorPerspective:(_Bool)arg2;
- (void)onClickBack;
- (void)reloadHeaderView;
- (void)setupBarButtonItems;
- (void)clearTabUnreadCount:(id)arg1 forIndex:(long long)arg2;
- (void)arbitraryTabView:(id)arg1 expectPageContentInset:(struct UIEdgeInsets)arg2 minSize:(struct CGSize)arg3 forIndex:(long long)arg4 pageView:(id)arg5 pageVC:(id)arg6 identifier:(id)arg7;
- (id)arbitraryTabView:(id)arg1 pageViewForIdentifier:(id)arg2 index:(long long)arg3;
- (id)arbitraryTabView:(id)arg1 pageViewController:(id)arg2 index:(long long)arg3;
- (unsigned long long)arbitraryTabView:(id)arg1 pageTabUnreadCount:(id)arg2 forIndex:(long long)arg3;
- (id)arbitraryTabView:(id)arg1 pageTabNameForIdentifier:(id)arg2 index:(long long)arg3;
- (void)reloadData;
- (void)createHeaderView;
- (void)registerPages:(id)arg1;
- (void)viewWillLayoutSubviews;
- (_Bool)useTransparentNavibar;
- (id)navigationTitleColor;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)configDefaultSettings;
- (id)initWithParams:(id)arg1;
- (void)reportReserverStateChanged:(unsigned long long)arg1 forConcertNotice:(id)arg2;
- (void)reportReserverStateChanged:(unsigned long long)arg1 forCustomNotice:(id)arg2;
- (id)createAudienceNoticeReportParams:(id)arg1;
- (void)noticeQRCodePreviewViewControllerNoticeStatusChanged:(id)arg1;
- (void)onLiveLivingViewMoreNoticeItemClick:(id)arg1;
- (void)onLiveLivingViewMainItemClick:(id)arg1;
- (void)onLiveNoticeViewMoreNoticesButtonClicked:(id)arg1;
- (void)onLiveNoticeViewMainNoticeButtonClicked:(id)arg1;
- (void)onLiveNoticeViewActionButtonClicked:(id)arg1;
- (void)onClickLiveNoticeView:(id)arg1;
- (void)onClickNeedPayLiveNoticeView:(id)arg1;
- (void)onClickFreeLiveNoticeView:(id)arg1;
- (void)onClickLiveNoticeActionButton:(id)arg1;
- (void)onClickLiveNoticeViewActionButton:(id)arg1;
- (void)showCouponPageSheet:(id)arg1;
- (void)createAndShowLiveNoticeQRCodeWithInfo:(id)arg1;
- (void)openMoreNoticeListViewControllerWithNoticeList:(id)arg1 targetNoticeId:(id)arg2;
- (void)checkAndOpenNoticesAutomatically;
- (void)openConcertTicketContainerVCWithNotice:(id)arg1;
- (void)onLiveNoticeReserveStateChanged:(unsigned long long)arg1 notice:(id)arg2;
- (void)onMemberShipZoneViewModelFetchedForHeader:(_Bool)arg1;
- (void)onViewWillDisappearForHeader;
- (void)onViewDidLoadForHeader;
- (void)viewControllerDidCancelCreateLiveNotice:(id)arg1;
- (void)viewController:(id)arg1 didFinishCreateLiveNoticeWithInfo:(id)arg2;
- (void)onCreateLiveNoticeWithInfo:(id)arg1;
- (void)onCreateLiveNoticeWithReporter:(id)arg1;
- (void)realStartLive;
- (void)onPostLive;
- (void)onPostLiveOrNoticeSheet;
- (void)onCreateLivePrepareComplete:(int)arg1 errStr:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


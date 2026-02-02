//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveBuyTicketHandle, MMFinderLiveNoticeInfoViewItem, MMFinderLiveNoticeListViewModel, MMUIButton, NSIndexPath, NSString, UILabel, UITableView;

@interface MMFinderLiveNoticeListViewController
{
    CDUnknownBlockType _onReserved;
    CDUnknownBlockType _onRequireBecomeMemberBeforeReserveNotice;
    CDUnknownBlockType _onClickCreateNotice;
    unsigned long long _overrideOrientationMask;
    CDUnknownBlockType _onRequireRotatePortrait;
    CDUnknownBlockType _onRequireRecoverOrientation;
    MMFinderLiveNoticeListViewModel *_viewModel;
    MMFinderLiveNoticeInfoViewItem *_targetInfoViewItem;
    NSIndexPath *_targetInfoIndexPath;
    UITableView *_tableView;
    UILabel *_titleLabel;
    MMUIButton *_operateAllButton;
    MMFinderLiveBuyTicketHandle *_ticketHandle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveBuyTicketHandle *ticketHandle; // @synthesize ticketHandle=_ticketHandle;
@property(retain, nonatomic) MMUIButton *operateAllButton; // @synthesize operateAllButton=_operateAllButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSIndexPath *targetInfoIndexPath; // @synthesize targetInfoIndexPath=_targetInfoIndexPath;
@property(retain, nonatomic) MMFinderLiveNoticeInfoViewItem *targetInfoViewItem; // @synthesize targetInfoViewItem=_targetInfoViewItem;
@property(retain, nonatomic) MMFinderLiveNoticeListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType onRequireRecoverOrientation; // @synthesize onRequireRecoverOrientation=_onRequireRecoverOrientation;
@property(copy, nonatomic) CDUnknownBlockType onRequireRotatePortrait; // @synthesize onRequireRotatePortrait=_onRequireRotatePortrait;
@property(nonatomic) unsigned long long overrideOrientationMask; // @synthesize overrideOrientationMask=_overrideOrientationMask;
@property(copy, nonatomic) CDUnknownBlockType onClickCreateNotice; // @synthesize onClickCreateNotice=_onClickCreateNotice;
@property(copy, nonatomic) CDUnknownBlockType onRequireBecomeMemberBeforeReserveNotice; // @synthesize onRequireBecomeMemberBeforeReserveNotice=_onRequireBecomeMemberBeforeReserveNotice;
@property(copy, nonatomic) CDUnknownBlockType onReserved; // @synthesize onReserved=_onReserved;
- (void)didFinishModLiveNoticeWithInfo:(id)arg1;
- (void)noticeQRCodePreviewViewControllerNoticeStatusChanged:(id)arg1;
- (void)noticeQRCodePreviewViewControllerNoticeTopChanged:(id)arg1 noticeInfo:(id)arg2;
- (void)noticeQRCodePreviewViewControllerDidRevokeNotice:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)operateAllButtonClicked:(id)arg1;
- (void)closeButtonClicked:(id)arg1;
- (void)presentConcertTicketForNoticeInfo:(id)arg1;
- (void)checkAndPresentConcertTicketForNoticeInfo:(id)arg1;
- (void)reserveNoticeInfoForConcert:(id)arg1;
- (void)actionForReserveNoticeInfo:(id)arg1;
- (void)closeTicketHandle:(_Bool)arg1;
- (void)onClickNeedPayLiveNoticeView:(id)arg1;
- (void)onClickFreeLiveNoticeView:(id)arg1;
- (void)noticeInfoDidChangeReservation:(id)arg1;
- (void)noticeInfoCellDidChangeReservation:(id)arg1;
- (void)noticeInfoCellDidViewNotice:(id)arg1;
- (void)reloadTopStatusInNoticeListViewModel:(id)arg1;
- (void)reloadReserveStatusInNoticeListViewModel:(id)arg1;
- (void)batchUpdateDataWithRemovedIndexes:(id)arg1 insertedIndexes:(id)arg2 updatedIndexes:(id)arg3 inNoticeListViewModel:(id)arg4;
- (void)reloadDataInNoticeListViewModel:(id)arg1;
- (void)cancelReservingAllNotices;
- (void)reserveAllNotices;
- (void)showConfirmAlertForCancellingReserveAllNotices;
- (void)cancelReservingNoticeInfo:(id)arg1;
- (void)reserveNoticeInfo:(id)arg1;
- (void)showConfirmAlertForCancellingReserveNoticeInfo:(id)arg1;
- (void)updateTopViews;
- (void)loadTopViews;
- (void)loadTableView;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (unsigned long long)providedInterfaceOrientationMaskInIphone;
- (unsigned long long)supportedInterfaceOrientations;
- (double)getMaxHeight;
- (_Bool)needCloseOnOrientationChanged;
- (void)viewDidLoad;
- (id)init;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


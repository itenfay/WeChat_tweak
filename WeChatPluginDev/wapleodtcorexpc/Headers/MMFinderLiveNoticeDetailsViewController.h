//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveNoticeInfo, ForwardMessageLogicController, MMFinderLiveBuyTicketHandle, MMFinderLiveCancelNoticeView, MMFinderLiveCreateNoticeReporter, MMFinderLiveNoticeDetailsPreviewModel, MMFinderLiveNoticeDetailsReservationParameters, MMFinderLiveNoticeDetailsView, MMFinderLiveNoticePosterModel, MMLiveIconButton, MMLiveVerticalTextButtonView, MMScrollActionSheet, MMUIButton, NSString, UIBarButtonItem, UIView, WCFinderContact, WCFinderCreateLiveViewModel, WCFinderLiveAudienceNoticeReporter;
@protocol MMFinderLiveNoticeDetailsViewControllerDelegate;

@interface MMFinderLiveNoticeDetailsViewController
{
    id <MMFinderLiveNoticeDetailsViewControllerDelegate> _delegate;
    FinderLiveNoticeInfo *_noticeInfo;
    unsigned long long _role;
    WCFinderContact *_anchorContact;
    MMFinderLiveNoticeDetailsReservationParameters *_reservationParams;
    MMFinderLiveNoticePosterModel *_posterModel;
    NSString *_selectedStyleId;
    unsigned long long _state;
    UIView *_editorLandingStateCommandsContainer;
    MMLiveVerticalTextButtonView *_editorEnterEditingButton;
    MMLiveVerticalTextButtonView *_editorSaveImageButton;
    MMLiveVerticalTextButtonView *_editorShareButton;
    UIBarButtonItem *_editorRevokeNoticeNavigationBarItem;
    UIView *_editingStateCommandsContainer;
    MMUIButton *_editingCommitButton;
    MMUIButton *_editingAdvanceStyleButton;
    UIView *_readerStateCommandsContainer;
    MMLiveIconButton *_readerReserveButton;
    MMUIButton *_readerCouponButton;
    MMUIButton *_readerShareButton;
    MMFinderLiveNoticeDetailsView *_noticeDetailsView;
    MMScrollActionSheet *_shareActionSheet;
    ForwardMessageLogicController *_forwardLogic;
    MMFinderLiveCancelNoticeView *_cancelNoticeView;
    MMFinderLiveBuyTicketHandle *_ticketHandle;
    WCFinderLiveAudienceNoticeReporter *_reservationReporter;
    MMUIButton *_columnButton;
    MMFinderLiveNoticeDetailsPreviewModel *_previewModel;
    WCFinderCreateLiveViewModel *_createLiveVM;
    MMFinderLiveCreateNoticeReporter *_noticeCreationReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveCreateNoticeReporter *noticeCreationReporter; // @synthesize noticeCreationReporter=_noticeCreationReporter;
@property(retain, nonatomic) WCFinderCreateLiveViewModel *createLiveVM; // @synthesize createLiveVM=_createLiveVM;
@property(retain, nonatomic) MMFinderLiveNoticeDetailsPreviewModel *previewModel; // @synthesize previewModel=_previewModel;
@property(retain, nonatomic) MMUIButton *columnButton; // @synthesize columnButton=_columnButton;
@property(retain, nonatomic) WCFinderLiveAudienceNoticeReporter *reservationReporter; // @synthesize reservationReporter=_reservationReporter;
@property(retain, nonatomic) MMFinderLiveBuyTicketHandle *ticketHandle; // @synthesize ticketHandle=_ticketHandle;
@property(retain, nonatomic) MMFinderLiveCancelNoticeView *cancelNoticeView; // @synthesize cancelNoticeView=_cancelNoticeView;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) MMScrollActionSheet *shareActionSheet; // @synthesize shareActionSheet=_shareActionSheet;
@property(retain, nonatomic) MMFinderLiveNoticeDetailsView *noticeDetailsView; // @synthesize noticeDetailsView=_noticeDetailsView;
@property(retain, nonatomic) MMUIButton *readerShareButton; // @synthesize readerShareButton=_readerShareButton;
@property(retain, nonatomic) MMUIButton *readerCouponButton; // @synthesize readerCouponButton=_readerCouponButton;
@property(retain, nonatomic) MMLiveIconButton *readerReserveButton; // @synthesize readerReserveButton=_readerReserveButton;
@property(retain, nonatomic) UIView *readerStateCommandsContainer; // @synthesize readerStateCommandsContainer=_readerStateCommandsContainer;
@property(retain, nonatomic) MMUIButton *editingAdvanceStyleButton; // @synthesize editingAdvanceStyleButton=_editingAdvanceStyleButton;
@property(retain, nonatomic) MMUIButton *editingCommitButton; // @synthesize editingCommitButton=_editingCommitButton;
@property(retain, nonatomic) UIView *editingStateCommandsContainer; // @synthesize editingStateCommandsContainer=_editingStateCommandsContainer;
@property(retain, nonatomic) UIBarButtonItem *editorRevokeNoticeNavigationBarItem; // @synthesize editorRevokeNoticeNavigationBarItem=_editorRevokeNoticeNavigationBarItem;
@property(retain, nonatomic) MMLiveVerticalTextButtonView *editorShareButton; // @synthesize editorShareButton=_editorShareButton;
@property(retain, nonatomic) MMLiveVerticalTextButtonView *editorSaveImageButton; // @synthesize editorSaveImageButton=_editorSaveImageButton;
@property(retain, nonatomic) MMLiveVerticalTextButtonView *editorEnterEditingButton; // @synthesize editorEnterEditingButton=_editorEnterEditingButton;
@property(retain, nonatomic) UIView *editorLandingStateCommandsContainer; // @synthesize editorLandingStateCommandsContainer=_editorLandingStateCommandsContainer;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *selectedStyleId; // @synthesize selectedStyleId=_selectedStyleId;
@property(retain, nonatomic) MMFinderLiveNoticePosterModel *posterModel; // @synthesize posterModel=_posterModel;
@property(retain, nonatomic) MMFinderLiveNoticeDetailsReservationParameters *reservationParams; // @synthesize reservationParams=_reservationParams;
@property(retain, nonatomic) WCFinderContact *anchorContact; // @synthesize anchorContact=_anchorContact;
@property(nonatomic) unsigned long long role; // @synthesize role=_role;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
@property(nonatomic) __weak id <MMFinderLiveNoticeDetailsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFinishModLiveNoticeWithInfo:(id)arg1;
- (void)changeNotice;
- (void)setupChangeNoticeActionsheet:(id)arg1;
- (void)reportColumnButtonAction:(_Bool)arg1;
- (void)reloadData;
- (void)openWebViewController:(id)arg1 fromNav:(id)arg2 closeCompletion:(CDUnknownBlockType)arg3;
- (void)handleLiveNoticeAddColumn:(int)arg1;
- (void)modLiveNoticeAddColumnWithNotice:(id)arg1 opType:(int)arg2;
- (void)handleColumnOperation:(_Bool)arg1;
- (_Bool)columnButtonAvailable;
- (void)modLiveNoticeTriggerStateWithNotice:(id)arg1;
- (void)modLiveNoticeTopStateWithNotice:(id)arg1;
- (id)baseAudienceNoticeReportParams:(id)arg1;
- (void)cancelReserveNoticeInfoEx:(id)arg1;
- (void)showCancelReservationActionSheet:(id)arg1;
- (void)reserveNoticeInfoEx:(id)arg1;
- (void)handlePaidLiveNoticeReservation:(id)arg1;
- (void)handleFreeLiveNoticeReservation:(id)arg1;
- (void)clearPreviewBackgroundImageWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setPreviewBackgroundImage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)revertPosterChangesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)commitPosterChangesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)createNoticeWithCompletion:(CDUnknownBlockType)arg1;
- (void)addToFavorites;
- (void)shareToMoment;
- (void)shareToChat:(id)arg1;
- (void)didRevokeNoticeWithResult:(_Bool)arg1 errorMessage:(id)arg2;
- (void)revokeNotice:(id)arg1;
- (void)handleRevokeNotice;
- (void)initializeShareActionSheet;
- (void)updateReaderReserveButton;
- (void)updateReaderCouponButton;
- (void)initializeComponents;
- (void)onLiveNoticeReserveStateChanged:(id)arg1 info:(id)arg2 error:(id)arg3;
- (void)onModReminderViewCompleteWithLiveNoticeInfo:(id)arg1 selectType:(int)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onLiveNoticeDetailsViewBackgroundImageChangeRequested:(id)arg1;
- (void)onColumnButtonTapped;
- (void)onBackButtonTapped;
- (void)onReserveButtonTapped;
- (void)onEditingCommitButtonTapped;
- (void)onEnterEditingButtonTapped;
- (void)onSaveImageButtonTapped;
- (void)onAdvanceStyleButtonTapped;
- (void)onShareButtonTapped;
- (void)onCouponButtonTapped;
- (void)onMoreButtonTapped;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (id)navigationBarBackgroundColor;
- (void)updateWithAnchorFinderContact:(id)arg1 noticeInfo:(id)arg2 reservationParams:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)updateWithAnchorFinderContact:(id)arg1 previewModel:(id)arg2;
- (long long)noticeSceneForReport;
- (id)initWithRole:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


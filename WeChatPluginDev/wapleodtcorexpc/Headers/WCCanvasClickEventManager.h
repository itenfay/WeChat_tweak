//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LocationRetriever, NSString, WCAdAppointmentLogic, WCAdCombineFollowLogic, WCAdConfirmHalfScreenAdapter, WCAdDetermineHalfScreenView, WCAdFinderFollowLogic, WCAdFinderLiveNoticePolymericLogic, WCAdQuicklyAddBrandLogic, WCCanvasComponentItem, WCCanvasDynamicDataLoader;
@protocol WCCanvasClickEventManagerDelegate, WCCanvasComponentDelegate;

@interface WCCanvasClickEventManager
{
    _Bool _qrCodeProcessing;
    WCCanvasComponentItem *_componentItem;
    id <WCCanvasClickEventManagerDelegate> _delegate;
    id <WCCanvasComponentDelegate> _canvasDelegate;
    WCCanvasDynamicDataLoader *_dataLoader;
    LocationRetriever *_locationRetriever;
    WCAdDetermineHalfScreenView *_determineHalfScreenView;
    unsigned long long _clickSource;
    WCAdQuicklyAddBrandLogic *_addBrandLogic;
    WCAdAppointmentLogic *_appointmentLogic;
    WCAdFinderFollowLogic *_adFinderFollowLogic;
    WCAdFinderLiveNoticePolymericLogic *_finderLiveNoticeLogic;
    WCAdCombineFollowLogic *_combineFollowLogic;
    WCAdConfirmHalfScreenAdapter *_phoneNumAdapter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdConfirmHalfScreenAdapter *phoneNumAdapter; // @synthesize phoneNumAdapter=_phoneNumAdapter;
@property(retain, nonatomic) WCAdCombineFollowLogic *combineFollowLogic; // @synthesize combineFollowLogic=_combineFollowLogic;
@property(retain, nonatomic) WCAdFinderLiveNoticePolymericLogic *finderLiveNoticeLogic; // @synthesize finderLiveNoticeLogic=_finderLiveNoticeLogic;
@property(retain, nonatomic) WCAdFinderFollowLogic *adFinderFollowLogic; // @synthesize adFinderFollowLogic=_adFinderFollowLogic;
@property(retain, nonatomic) WCAdAppointmentLogic *appointmentLogic; // @synthesize appointmentLogic=_appointmentLogic;
@property(retain, nonatomic) WCAdQuicklyAddBrandLogic *addBrandLogic; // @synthesize addBrandLogic=_addBrandLogic;
@property(nonatomic) unsigned long long clickSource; // @synthesize clickSource=_clickSource;
@property(retain, nonatomic) WCAdDetermineHalfScreenView *determineHalfScreenView; // @synthesize determineHalfScreenView=_determineHalfScreenView;
@property(retain, nonatomic) LocationRetriever *locationRetriever; // @synthesize locationRetriever=_locationRetriever;
@property(nonatomic) _Bool qrCodeProcessing; // @synthesize qrCodeProcessing=_qrCodeProcessing;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <WCCanvasComponentDelegate> canvasDelegate; // @synthesize canvasDelegate=_canvasDelegate;
@property(nonatomic) __weak id <WCCanvasClickEventManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCCanvasComponentItem *componentItem; // @synthesize componentItem=_componentItem;
- (void)doNextAction:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationCallbackTimeOut:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)reportLocationAuthResultWithName:(id)arg1 status:(id)arg2;
- (void)retrieveLocation;
- (void)onDetermineViewDidClose:(_Bool)arg1;
- (void)onDetermineViewButtonClickedWithType:(long long)arg1 determineInfo:(id)arg2;
- (void)showLocationPermissionView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)doJumpStatePublish;
- (void)doCombineFollow;
- (void)tryToQueryCombineFollowStatus;
- (void)onFinderLiveNoticePolymericJumpToProfile:(id)arg1;
- (void)onFinderLiveNoticePolymericStatusUpdatedWith:(int)arg1;
- (void)doFinderLiveNoticePolymeric;
- (void)tryToQueryFinderLiveNoticePolymericStatus;
- (void)onFinderFollowingStateChanged:(_Bool)arg1 byUser:(_Bool)arg2;
- (void)doJumpFinderProfileByFollowing;
- (void)doJumpFinderFollow;
- (void)tryToQueryFinderFollowStatus;
- (void)confirmAdapterClosedWithResult:(long long)arg1 extInfo:(id)arg2;
- (void)showAppointmentPhoneNumberRequestView:(id)arg1;
- (int)fetchDestAppointmentOpType;
- (void)onAppointmentUpdatingStatus:(int)arg1;
- (void)onAppointmentSubmitForType:(int)arg1 isSuccess:(_Bool)arg2;
- (void)doAppointment;
- (void)tryToQueryAppointmentStatus;
- (void)doOpenCustomerService;
- (void)doJumpEmotionStore;
- (_Bool)isCanvasInHalfScreenMode;
- (id)getUxInfoWithShared:(_Bool)arg1;
- (id)getNavigationController;
- (id)getViewController;
- (void)doJumpFinderFeed;
- (void)tryToQueryRedPackCoverUrlWithAutoJump:(_Bool)arg1;
- (void)tryToUpdateQuicklyAddBrandStatus;
- (_Bool)shouldOnlyShowBrandInfo;
- (void)doJumpFinderProfileWithUsername:(id)arg1;
- (void)doFinderLiveNoticeReserve;
- (void)doOnGetCouponSuccess;
- (void)onGetCouponWithResult:(long long)arg1 errMsg:(id)arg2;
- (void)doGetCoupon;
- (id)getAddBrandNavigationController;
- (void)doAdChannelReport:(id)arg1;
- (void)hideLoading;
- (void)showLoadingAutoHideAfter:(double)arg1;
- (void)showLoading;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)onGetRedPacketCoverUrlResult:(id)arg1 autoJump:(_Bool)arg2;
- (void)onUpdateProfileUsername:(id)arg1;
- (void)onUpdateQrCode:(id)arg1 componentId:(id)arg2 snsId:(id)arg3;
- (void)onGetSmartPhoneNumber:(id)arg1;
- (void)onFavProductReturn:(unsigned int)arg1 errMsg:(id)arg2;
- (void)onCanvasServerDataReturn:(id)arg1 errorCode:(int)arg2 forLoadParams:(id)arg3;
- (void)onUxCanvasDynamicXMLReturn:(id)arg1 error:(int)arg2 forCanvasId:(id)arg3;
- (void)doQrScanBegin:(id)arg1;
- (void)loadAndScanQrCodeImage;
- (void)setQrCodeProcessFinished;
- (void)setQrCodeProcessingAutoFinishAfter:(double)arg1;
- (void)doJumpPersonalProfile:(id)arg1;
- (void)doQuicklyAddBrandJump:(id)arg1 needJumpCompatiblePage:(_Bool)arg2;
- (void)doScanGoodJump:(id)arg1;
- (void)updateQrCodeUrlFromServer:(id)arg1;
- (void)getLocationForQrCodeUpdate;
- (void)setQrCodeScanProcessing;
- (void)doQrCodeScan;
- (_Bool)doPhoneCallJump;
- (_Bool)doSmartPhoneJump:(id)arg1;
- (_Bool)doProductActionJump;
- (_Bool)doWaBizJump;
- (_Bool)doLocalJump;
- (_Bool)doWeAppJump;
- (_Bool)doCanvasJump;
- (_Bool)doGameCenterJump;
- (id)fetchRelatedComponent;
- (void)onClickEvent;
- (void)onClickEventWithSource:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithComponentItem:(id)arg1 delegate:(id)arg2 canvasDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


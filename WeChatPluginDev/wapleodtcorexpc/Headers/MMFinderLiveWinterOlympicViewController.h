//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveNoticeInfo, MMFinderLiveActivityTask, MMFinderLiveActivityTaskId, MMFinderLiveOlympicsReserveConfirmView, MMFinderLiveWinterOlympicOperationView, MMFinderLiveWinterOlympicView, NSString, WCUIAlertView;

@interface MMFinderLiveWinterOlympicViewController
{
    _Bool _shouldForcePortrait;
    MMFinderLiveOlympicsReserveConfirmView *_reserveConfirmView;
    FinderLiveNoticeInfo *_liveNoticeInfo;
    WCUIAlertView *_currAlertView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCUIAlertView *currAlertView; // @synthesize currAlertView=_currAlertView;
@property(retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo; // @synthesize liveNoticeInfo=_liveNoticeInfo;
@property(retain, nonatomic) MMFinderLiveOlympicsReserveConfirmView *reserveConfirmView; // @synthesize reserveConfirmView=_reserveConfirmView;
@property(readonly, nonatomic) _Bool shouldForcePortrait; // @synthesize shouldForcePortrait=_shouldForcePortrait;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onCertificateHidden;
- (void)onCertificateShowing;
- (void)onMMFinderLiveWinterOlympicOperationViewCertViewClose:(id)arg1;
- (void)onLiveWinterOlympicLogicTorchInfoUpdated:(id)arg1;
- (void)onLiveTaskLandScapeEnabledChanged:(id)arg1;
@property(readonly, nonatomic) MMFinderLiveWinterOlympicOperationView *winterOlympicOperationView;
@property(readonly, nonatomic) MMFinderLiveWinterOlympicView *winterOlympicsLiveView;
@property(readonly, nonatomic) MMFinderLiveActivityTaskId *activityTaskId;
@property(readonly, nonatomic) MMFinderLiveActivityTask *activityTask;
- (id)getPollingFetchRequestBufferModelForCmdIDUpdateBulletScreen;
- (void)showPrivateJoinBlockView;
- (void)onShowForbidLiveViewWithError:(id)arg1;
- (void)onShowErrorPage:(id)arg1;
- (void)onKickedOut;
- (void)superClose;
- (void)close;
- (id)createOperationViewWithTaskId:(id)arg1;
- (void)initLiveLogic;
- (void)onShowToastFromAppMsg:(id)arg1;
- (void)onShowAlertFromAppMsg:(id)arg1;
- (_Bool)showReserveConfirmView:(CDUnknownBlockType)arg1;
- (void)fetchReserveInfo;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


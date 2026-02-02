//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FTSVoiceSearchBarController, MFBackupBtn, MFBannerBtn, MFMigrationBtn, MFMusicPlayBtn, MFPushBannerLogic, MFPushSystemMsgLogic, MFRoamBtn, MFRoamRemindBtn, MFWebMMBtn, MFWebViewVCKeepHoldBtn, NSMutableArray, NSString;
@protocol MainFrameHeaderDelegate;

@interface MainFrameHeaderLogic
{
    FTSVoiceSearchBarController *m_searchBar;
    NSMutableArray *m_bannerAry;
    _Bool m_bWebWXLogined;
    _Bool m_bBakChatStarted;
    MFWebMMBtn *m_webMMBtn;
    MFMusicPlayBtn *m_musicPlayBtn;
    MFWebViewVCKeepHoldBtn *m_webViewRecoverBtn;
    MFBackupBtn *m_backupBtn;
    MFMigrationBtn *m_migrationBtn;
    MFRoamBtn *m_roamBtn;
    MFRoamRemindBtn *m_roamRemindBtn;
    MFBannerBtn *m_contactVerifyBtn;
    MFBannerBtn *m_MFFavDetailBtn;
    MFBannerBtn *m_strongNotificationBtn;
    MFBannerBtn *m_exptDebugBtn;
    MFBannerBtn *m_brandDebugBtn;
    MFPushBannerLogic *m_pushBannerLogic;
    MFPushSystemMsgLogic *m_pushSystemMsgLogic;
    id <MainFrameHeaderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MainFrameHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FTSVoiceSearchBarController *searchBar; // @synthesize searchBar=m_searchBar;
- (void)cancelExptDebug;
- (void)showCloseExptDebugDialog;
- (void)addExptDebugBanner:(id)arg1;
- (void)onStartMonitorKV:(id)arg1;
- (void)onGameViewClosed;
- (void)onTerminateContactVerify;
- (void)onStartContactVerify;
- (void)showPrivacyVC;
- (void)initContactVerifyButton;
- (void)onClientMigrationTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (void)onClientMigrationCurrentTransferSpeed:(float)arg1;
- (void)onClientMigrationCurrentReceiveSize:(unsigned long long)arg1 totalSize:(unsigned long long)arg2;
- (void)onClientMigrationNotifySessionCurrent:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onClientMigrationNotifyCode:(unsigned long long)arg1;
- (void)onTerminateMigration;
- (void)onStartMigration;
- (void)showMigrationViewController;
- (void)initMigrationButton;
- (void)onBackupTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (void)onProgressCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onBackupNotifyCode:(unsigned long long)arg1;
- (void)onTerminateBackup;
- (void)onStartBackup;
- (void)showBackupViewController;
- (void)initBackupButton;
- (void)dismissPushSystemMsg;
- (void)showPushSystemMsg;
- (void)onHidePushBanner;
- (void)onShowPushBanner;
- (void)openContactInfo:(id)arg1;
- (void)PushViewController:(id)arg1;
- (void)PopViewController;
- (void)initPushBanner;
- (void)showReadingFavDetail;
- (void)showConversionOnTop:(_Bool)arg1;
- (void)showReadingWebview;
- (void)onKeepHoldWebViewVCForNewMainFrameBannerStatusChangedIsAddKeep:(_Bool)arg1;
- (void)delayHiddenMusicPlayBannerIfPlayerIdle:(id)arg1;
- (void)reloadMusicBanner;
- (void)updateMusicPlayBanner:(id)arg1;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)showCancelMusicPlay;
- (void)processArticleReadWebview:(_Bool)arg1;
- (void)processMusicPlayBtn:(_Bool)arg1;
- (void)initMusicPlayBtn;
- (void)onLoginWeb;
- (void)onLogoutWeb;
- (void)showLogoutWebOnline;
- (void)initWebMMBtn;
- (void)removeBannerBtnWithoutAnim:(id)arg1;
- (void)removeBannerBtn:(id)arg1;
- (void)addBannerBtn:(id)arg1 atIndex:(unsigned int)arg2 editable:(_Bool)arg3 withAnim:(_Bool)arg4;
- (void)addBannerBtn:(id)arg1 atIndex:(unsigned int)arg2 withAnim:(_Bool)arg3;
- (void)addBannerBtn:(id)arg1 withAnim:(_Bool)arg2;
- (void)dismissSystemMessage;
- (double)bannerTotalHeight;
- (void)deleteBanner:(unsigned long long)arg1;
- (void)trigBanner:(unsigned long long)arg1;
- (_Bool)cellEditable:(unsigned long long)arg1;
- (id)getBanner:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long bannerCount;
- (void)initHeader;
- (void)unRegisterExt;
- (void)registerExt;
- (void)dealloc;
- (id)initWithViewControllerForSearch:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


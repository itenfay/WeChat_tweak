//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCircleProgressView, MMProgressView, MMUIActivityIndicatorView, MMUILabel, MMUINavigationBar, NSString, RichTextView, UIButton, UIImageView, UILabel, UINavigationItem, UIScrollView, UIView, WXGDotDotDotLabel;
@protocol WXGMigrationClientEntryViewControllerDelegate;

@interface WXGMigrationClientEntryViewController
{
    UIButton *m_leftTopCornerButton;
    UIImageView *m_iconImageView;
    UIView *m_imageBackgroundView;
    MMUIActivityIndicatorView *m_indicatorView;
    NSString *m_lastIconName;
    _Bool m_lastActivity;
    MMUILabel *m_tipsLabel;
    MMUILabel *m_smallTipsLabel;
    UIScrollView *m_smallTipsHelpView;
    NSString *m_lastSmallTipString;
    MMUILabel *m_titleInGBPLable;
    MMCircleProgressView *m_circularProgressView;
    RichTextView *m_greyTextView;
    UIButton *m_greenButton;
    UIButton *m_greyButton;
    MMUILabel *m_wifiTipLabel;
    UIView *m_btnSeperatorView;
    unsigned long long m_notifyCode;
    unsigned long long m_childNotifyCode;
    WXGDotDotDotLabel *m_dotDotDotLabel;
    MMProgressView *m_progressView;
    MMUILabel *m_progressLabel;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    unsigned long long m_currentProcessCount;
    unsigned long long m_totalProcessCount;
    NSString *m_speedString;
    unsigned long long m_speedCount;
    unsigned long long m_currentRecvSize;
    unsigned long long m_totalSize;
    unsigned long long m_currentShowAlertViewTag;
    _Bool m_bUserCancelImport;
    UILabel *m_debugInfoLabel;
    float _migrationProgress;
    id <WXGMigrationClientEntryViewControllerDelegate> _delegate;
    UIScrollView *_sheetView;
    UINavigationItem *_customNavigationItem;
    MMUINavigationBar *_customNavigationBar;
    UIView *_backgroundView;
    NSString *_speedString;
    NSString *_leftTimeString;
}

- (void).cxx_destruct;
@property(nonatomic) float migrationProgress; // @synthesize migrationProgress=_migrationProgress;
@property(retain, nonatomic) NSString *leftTimeString; // @synthesize leftTimeString=_leftTimeString;
@property(retain, nonatomic) NSString *speedString; // @synthesize speedString=_speedString;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMUINavigationBar *customNavigationBar; // @synthesize customNavigationBar=_customNavigationBar;
@property(retain, nonatomic) UINavigationItem *customNavigationItem; // @synthesize customNavigationItem=_customNavigationItem;
@property(retain, nonatomic) UIScrollView *sheetView; // @synthesize sheetView=_sheetView;
@property(nonatomic) __weak id <WXGMigrationClientEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getConnectRemindView;
- (void)jumpToFeedback;
- (void)jumpToBuildHostspot;
- (void)jumpToPrivacySetting;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onMigrationAllData;
- (void)onMigrationNewImport;
- (void)onAlertPhoneSizeNotEnough;
- (void)onAlertNowShouldRecoverData;
- (void)onReScanCode;
- (void)onShowBuildHotspotTip;
- (void)onShowContinueToImport;
- (void)onPauseMigration;
- (void)onCancelMigration;
- (void)onStopImport;
- (void)onCancelImport;
- (void)onStartImport;
- (void)onCloseView;
- (void)onMinimizeView;
- (void)circleProgressViewDidTapped:(id)arg1;
- (void)onClientMigrationTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (void)onClientProcessCurrentProgress:(float)arg1;
- (void)onClientMigrationCurrentTransferSpeed:(float)arg1;
- (void)onClientMigrationCurrentReceiveSize:(unsigned long long)arg1 totalSize:(unsigned long long)arg2;
- (void)onClientMigrationNotifySessionCurrent:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onClientMigrationNotifyProgressCurrent:(unsigned long long)arg1 totalProgress:(unsigned long long)arg2;
- (void)onClientMigrationNotifyCode:(unsigned long long)arg1;
- (void)onClientMigrationAlertCode:(unsigned long long)arg1;
- (void)addProgressView;
- (void)p_addGreyButton;
- (void)p_addGreenButton;
- (void)p_addSmallTipsLabel;
- (void)p_addTipsLabel;
- (void)p_addIconImageView;
- (void)p_addLeftCornerButton;
- (void)p_setupView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)unregisterAllExtension;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


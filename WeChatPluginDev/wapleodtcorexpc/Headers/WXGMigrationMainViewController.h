//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CTRichTextView, MMProgressView, MMUIActivityIndicatorView, MMUILabel, MMUINavigationBar, NSString, UIButton, UIImage, UIImageView, UILabel, UINavigationItem, UIScrollView, UIView;
@protocol WXGMigrationMainViewControllerDelegate;

@interface WXGMigrationMainViewController
{
    UIImageView *m_iconImageView;
    UIImage *m_qrcodeImage;
    int m_retryGetQRCodeTimes;
    UIView *m_imageBackgroundView;
    MMUIActivityIndicatorView *m_qrCodeLoadingView;
    MMUIActivityIndicatorView *m_indicatorView;
    NSString *m_lastIconName;
    _Bool m_lastActivity;
    UILabel *m_tipsLabel;
    UILabel *m_statusLabel;
    UIButton *m_greenButton;
    UIButton *m_greyButton;
    UIView *m_btnSeperatorView;
    CTRichTextView *m_backupButton;
    UIButton *m_backupButtonTmp;
    unsigned long long m_notifyCode;
    unsigned long long m_childNotifyCode;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    NSString *m_speedString;
    unsigned long long m_speedCount;
    MMProgressView *m_progressView;
    MMUILabel *m_progressLabel;
    _Bool m_bEnable;
    _Bool m_bPressAllActionBtn;
    float _migrationProgress;
    id <WXGMigrationMainViewControllerDelegate> _delegate;
    UIScrollView *_sheetView;
    UINavigationItem *_customNavigationItem;
    MMUINavigationBar *_customNavigationBar;
    UIView *_backgroundView;
    MMUILabel *_descriptionLabel;
    MMUILabel *_loadingLabel;
    MMUIActivityIndicatorView *_dataLoadingIndicator;
    NSString *_speedString;
    NSString *_leftTimeString;
}

- (void).cxx_destruct;
@property(nonatomic) float migrationProgress; // @synthesize migrationProgress=_migrationProgress;
@property(retain, nonatomic) NSString *leftTimeString; // @synthesize leftTimeString=_leftTimeString;
@property(retain, nonatomic) NSString *speedString; // @synthesize speedString=_speedString;
@property(retain, nonatomic) MMUIActivityIndicatorView *dataLoadingIndicator; // @synthesize dataLoadingIndicator=_dataLoadingIndicator;
@property(retain, nonatomic) MMUILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) MMUILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMUINavigationBar *customNavigationBar; // @synthesize customNavigationBar=_customNavigationBar;
@property(retain, nonatomic) UINavigationItem *customNavigationItem; // @synthesize customNavigationItem=_customNavigationItem;
@property(retain, nonatomic) UIScrollView *sheetView; // @synthesize sheetView=_sheetView;
@property(nonatomic) __weak id <WXGMigrationMainViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)checkBatteryEnough;
- (void)doMigrationAll;
- (void)onChatLogSession:(id)arg1 selectSession:(id)arg2 selectAllTime:(_Bool)arg3 selectAllSession:(_Bool)arg4 selectTextOnly:(_Bool)arg5 minTime:(id)arg6 selectStartTime:(id)arg7 selectEndTime:(id)arg8;
- (void)onCancelSelectSession;
- (void)onChatLogDataLoadFinished;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onMigrationTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (void)onMigrationCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onMigrationServerTransferSpeed:(float)arg1;
- (void)onMigrationServerAlertCode:(unsigned long long)arg1;
- (void)onMigrationServerNotifyCode:(unsigned long long)arg1;
- (void)onMigrationServerGetQRCodeImg:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)p_makeQRCodeImageFinishWithIsFailure:(_Bool)arg1;
- (void)p_makeQRCodeLoadingState;
- (void)p_makeQRCodeState;
- (void)onAlertCancelQuickMigrationAndTimeSelect;
- (void)onAlertCancelQuickMigration;
- (void)onAlertCancelTimeSelect;
- (void)onShowSelectSessionView;
- (void)onMigrationPortionButtonPress;
- (void)onMigrationAllButtonPress;
- (void)onActionButtonPress;
- (void)onPauseMigration;
- (void)onFinishAndCloseView;
- (void)onPressCancelWhenTransfer;
- (void)onPressCancelBtn;
- (void)onMinimizeView;
- (void)makeMainView;
- (void)p_makeGreyButton;
- (void)p_makeGreenButton;
- (void)addProgressView;
- (void)p_makeStatusTipLabel;
- (void)p_makeTipsLabel;
- (void)p_makeIconView;
- (void)p_makeNavigationItem;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
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


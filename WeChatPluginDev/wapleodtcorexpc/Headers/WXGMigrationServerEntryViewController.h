//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, MMUILabel, NSString, UIButton, UIImageView, UIView, WXGDotDotDotLabel;
@protocol WXGMigrationServerEntryViewControllerDelegate;

@interface WXGMigrationServerEntryViewController
{
    UIView *m_backgroundView;
    UIButton *m_leftTopCornerButton;
    UIImageView *m_iconImageView;
    MMUIActivityIndicatorView *m_QRCLoadingView;
    MMUILabel *m_tipsLabel;
    MMUILabel *m_smallTipsLabel;
    UIButton *m_greenButton;
    unsigned long long m_notifyCode;
    unsigned long long m_childNotifyCode;
    WXGDotDotDotLabel *m_dotDotDotLabel;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    NSString *m_speedString;
    int m_retryGetQRCodeTimes;
    id <WXGMigrationServerEntryViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WXGMigrationServerEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)p_refreshQRCode;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onAlertCancelQuickMigrationAndTimeSelect;
- (void)onAlertCancelQuickMigration;
- (void)onAlertCancelTimeSelect;
- (void)onCloseView;
- (void)onMinimizeView;
- (void)onMigrationServerGetQRCodeImg:(id)arg1;
- (void)onMigrationServerTransferSpeed:(float)arg1;
- (void)onMigrationCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onMigrationServerAlertCode:(unsigned long long)arg1;
- (void)onMigrationServerNotifyCode:(unsigned long long)arg1;
- (void)p_addGreenButton;
- (void)p_addSmallTipsLabel;
- (void)p_addTipsLabel;
- (void)p_resetIconImageViewWithImage:(id)arg1;
- (void)p_addIconImageView;
- (void)p_addLeftCornerButton;
- (void)p_addBlurEffectForView;
- (void)p_setupView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


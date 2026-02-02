//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, MMUILabel, NSString, UIImage, UIImageView, UILabel;

@interface WXGMigrationServerViewController
{
    UIImageView *m_qrCodeImageView;
    UILabel *m_qrCodeTipLabel;
    MMUIActivityIndicatorView *m_qrCodeLoadingView;
    UIImage *m_qrcodeImage;
    int m_retryGetQRCodeTimes;
    _Bool _isMigrationAllAndNeedWaitLoad;
    _Bool _isSessionDataLoadFinish;
    MMUIActivityIndicatorView *_dataLoadingIndicator;
    MMUILabel *_descriptionLabel;
    MMUILabel *_loadingLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) MMUILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *dataLoadingIndicator; // @synthesize dataLoadingIndicator=_dataLoadingIndicator;
@property(nonatomic) _Bool isSessionDataLoadFinish; // @synthesize isSessionDataLoadFinish=_isSessionDataLoadFinish;
@property(nonatomic) _Bool isMigrationAllAndNeedWaitLoad; // @synthesize isMigrationAllAndNeedWaitLoad=_isMigrationAllAndNeedWaitLoad;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onMigrationServerCloseEntryView;
- (void)onMigrationServerAlertCode:(unsigned long long)arg1;
- (void)onMigrationServerNotifyCode:(unsigned long long)arg1;
- (void)onMigrationServerGetQRCodeImg:(id)arg1;
- (void)onLoadingCurrentSession:(unsigned long long)arg1 totalSessionCount:(unsigned long long)arg2;
- (void)onChatLogDataLoadFinished;
- (void)resetLoadingTip:(id)arg1;
- (void)p_removeLoadingDataState;
- (void)p_makeLoadingDataState;
- (void)loadSessionArrayFinishAndShowQRCode;
- (void)p_setQRCodeTipLabelWithText:(id)arg1;
- (void)p_makeQRCodeImageFailureFinishState;
- (void)p_makeQRCodeImageFinishState:(id)arg1 withText:(id)arg2;
- (void)p_makeQRCodeLoadingState;
- (void)p_makeQRCodeState;
- (void)onPressLeftNavigationButton;
- (void)registerLoadSessionExtension;
- (void)refreshView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


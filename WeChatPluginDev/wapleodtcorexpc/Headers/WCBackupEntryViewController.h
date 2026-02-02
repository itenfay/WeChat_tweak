//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CTRichTextView, MMUIActivityIndicatorView, MMUILabel, MMUINavigationBar, NSString, UIButton, UIImageView, UILabel, UINavigationItem, UIScrollView, UIView, WXGDotDotDotLabel;
@protocol WCBackupEntryViewControllerDelegate;

@interface WCBackupEntryViewController
{
    UIScrollView *m_scrollView;
    UIButton *m_leftTopCornerButton;
    UIView *m_imageBackgroundView;
    UIImageView *m_iconImageView;
    MMUIActivityIndicatorView *m_indicatorView;
    NSString *m_lastIconName;
    _Bool m_lastActivity;
    NSString *m_lastNavigationTitle;
    MMUILabel *m_tipsLabel;
    MMUILabel *m_smallTipsLabel;
    CTRichTextView *m_smallTipsHelpLabel;
    WXGDotDotDotLabel *m_dotDotDotLabel;
    MMUILabel *m_wifiTipLabel;
    CTRichTextView *m_helpTipsLabel;
    UIButton *m_greenButton;
    UIView *m_btnSeperatorView;
    UIButton *m_greyButton;
    UILabel *m_debugInfoLabel;
    unsigned long long m_notifyCode;
    unsigned long long m_childrenCode;
    unsigned long long m_curSessionCnt;
    unsigned long long m_totalSessionCnt;
    _Bool _bCanShowDisconnect;
    _Bool _bSelectAllSession;
    _Bool _bGetStartConfirm;
    id <WCBackupEntryViewControllerDelegate> _delegate;
    unsigned long long _curShowAlertTag;
    NSString *_speedString;
    NSString *_leftTimeString;
    unsigned long long _speedCount;
    UINavigationItem *_customNavigationItem;
    UIScrollView *_sheetView;
    MMUINavigationBar *_customNavigationBar;
    UIView *_backgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMUINavigationBar *customNavigationBar; // @synthesize customNavigationBar=_customNavigationBar;
@property(retain, nonatomic) UIScrollView *sheetView; // @synthesize sheetView=_sheetView;
@property(retain, nonatomic) UINavigationItem *customNavigationItem; // @synthesize customNavigationItem=_customNavigationItem;
@property(nonatomic) unsigned long long speedCount; // @synthesize speedCount=_speedCount;
@property(retain, nonatomic) NSString *leftTimeString; // @synthesize leftTimeString=_leftTimeString;
@property(retain, nonatomic) NSString *speedString; // @synthesize speedString=_speedString;
@property(nonatomic) unsigned long long curShowAlertTag; // @synthesize curShowAlertTag=_curShowAlertTag;
@property(nonatomic) _Bool bGetStartConfirm; // @synthesize bGetStartConfirm=_bGetStartConfirm;
@property(nonatomic) _Bool bSelectAllSession; // @synthesize bSelectAllSession=_bSelectAllSession;
@property(nonatomic) _Bool bCanShowDisconnect; // @synthesize bCanShowDisconnect=_bCanShowDisconnect;
@property(nonatomic) __weak id <WCBackupEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onChatLogDataLoadFinished;
- (void)onBackupAlertCode:(unsigned long long)arg1;
- (void)onBackupTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (void)onProgressCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onBackupNotifyCode:(unsigned long long)arg1;
- (void)onCancelSelectSession;
- (void)onChatLogSession:(id)arg1 selectSession:(id)arg2 selectAllTime:(_Bool)arg3 selectAllSession:(_Bool)arg4 selectTextOnly:(_Bool)arg5 minTime:(id)arg6 selectStartTime:(id)arg7 selectEndTime:(id)arg8;
- (_Bool)p_checkSessionData;
- (_Bool)p_checkBatteryEnough;
- (void)onAlertShowEnergyIsNotEnough;
- (void)onAlertShowMigratedCostTime;
- (void)onAlertShowNoSession;
- (void)onAlertNowShouldRecoverData;
- (void)onCancelRecoverTransfer;
- (void)onCancelBackup;
- (void)onCancelImport;
- (void)onStopImport;
- (void)onStartImport;
- (void)onConfirmAndStart;
- (void)onShowSelectSessionViewController;
- (void)onBackupAllSession;
- (void)onSendCancelAndCloseView;
- (void)onCloseView;
- (void)onMinimizeView;
- (void)addSmallTipsLabel;
- (void)addTipsLabel;
- (void)addGreyButton;
- (void)addGreenButton;
- (void)addIconImageView;
- (void)addLeftCornerButton;
- (void)setupView;
- (void)addBlurEffectForView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


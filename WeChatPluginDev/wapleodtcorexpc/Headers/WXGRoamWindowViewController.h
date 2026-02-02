//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AffRoamTransferStats, MMProgressView, MMTimer, MMUIActivityIndicatorView, MMUILabel, MMUINavigationBar, NSString, UIButton, UIImageView, UILabel, UINavigationItem, UIScrollView, UIView;

@interface WXGRoamWindowViewController
{
    unsigned long long m_notifyCode;
    UIScrollView *m_smallTipsHelpView;
    UIView *m_imageBackgroundView;
    UIImageView *m_iconImageView;
    MMUILabel *m_tipsLabel;
    MMUILabel *m_smallTipsLabel;
    MMUILabel *m_detailTipsLabel;
    UIButton *m_greenButton;
    UIButton *m_greyButton;
    MMProgressView *m_progressView;
    MMUILabel *m_progressLabel;
    MMUIActivityIndicatorView *m_indicatorView;
    _Bool m_lastActivity;
    _Bool m_prepareToStart;
    unsigned long long m_curSessionCnt;
    unsigned long long m_totalSessionCnt;
    _Bool m_isBackup;
    float _backupProgress;
    UIView *_backgroundView;
    UIScrollView *_sheetView;
    UINavigationItem *_customNavigationItem;
    MMUINavigationBar *_customNavigationBar;
    UIView *_autoBackupView;
    UILabel *_autoBackupLabel;
    UIView *_recoverView;
    MMTimer *_transferTimer;
    AffRoamTransferStats *_curStat;
    NSString *_speedString;
    NSString *_leftTimeString;
    unsigned long long _curSpeed;
    unsigned long long _speedCount;
    unsigned long long _chatLogSize;
    unsigned long long _selectedSize;
    unsigned long long _transferSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long transferSize; // @synthesize transferSize=_transferSize;
@property(nonatomic) unsigned long long selectedSize; // @synthesize selectedSize=_selectedSize;
@property(nonatomic) unsigned long long chatLogSize; // @synthesize chatLogSize=_chatLogSize;
@property(nonatomic) unsigned long long speedCount; // @synthesize speedCount=_speedCount;
@property(nonatomic) unsigned long long curSpeed; // @synthesize curSpeed=_curSpeed;
@property(nonatomic) float backupProgress; // @synthesize backupProgress=_backupProgress;
@property(retain, nonatomic) NSString *leftTimeString; // @synthesize leftTimeString=_leftTimeString;
@property(retain, nonatomic) NSString *speedString; // @synthesize speedString=_speedString;
@property(retain, nonatomic) AffRoamTransferStats *curStat; // @synthesize curStat=_curStat;
@property(retain, nonatomic) MMTimer *transferTimer; // @synthesize transferTimer=_transferTimer;
@property(retain, nonatomic) UIView *recoverView; // @synthesize recoverView=_recoverView;
@property(retain, nonatomic) UILabel *autoBackupLabel; // @synthesize autoBackupLabel=_autoBackupLabel;
@property(retain, nonatomic) UIView *autoBackupView; // @synthesize autoBackupView=_autoBackupView;
@property(retain, nonatomic) MMUINavigationBar *customNavigationBar; // @synthesize customNavigationBar=_customNavigationBar;
@property(retain, nonatomic) UINavigationItem *customNavigationItem; // @synthesize customNavigationItem=_customNavigationItem;
@property(retain, nonatomic) UIScrollView *sheetView; // @synthesize sheetView=_sheetView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)onRoamOutBoxServiceFinishCreateBackupMenu:(_Bool)arg1 dirURL:(id)arg2 deviceId:(id)arg3;
- (void)onRoamBackupPackageServiceStopFinishRet:(int)arg1;
- (void)onRoamBackupPackageServiceGetChatLogSize:(unsigned long long)arg1;
- (void)onRoamBackupPackageServiceTaskProgressEvent:(unsigned long long)arg1 current:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onRoamBackupPackageServiceTaskTransferStatsChanged:(unsigned long long)arg1 stats:(id)arg2;
- (void)onRoamBackupPackageServiceNotifyCode:(unsigned long long)arg1 notifyCode:(unsigned long long)arg2;
- (void)analysisStat:(id)arg1;
- (void)onGetTransferStat;
- (void)onReGetConv;
- (void)onResume;
- (void)onPause;
- (void)onPressEndBtn;
- (void)onDisconnect;
- (void)onMinimizeView;
- (void)onPressCancelBtn;
- (void)onCancelDisconnectStart;
- (void)onCancelPrepare;
- (void)onCloseView;
- (void)onManagerDevice;
- (void)onSelectPartRestore;
- (void)onCancelUsingState;
- (void)onTapStop;
- (void)onRetryRestore;
- (void)onRetry;
- (void)onSelectAllRestore;
- (void)onSelectPart;
- (void)onSelectAll;
- (void)onPermission;
- (id)getConnectRemindView;
- (void)addProgressView;
- (void)addGreyButton;
- (void)addGreenButton;
- (void)addSmallTipsLabel;
- (void)addTipsLabel;
- (void)addIconImageView;
- (void)addNavigationBarInfo;
- (void)setupView;
- (void)viewWillAppear:(_Bool)arg1;
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


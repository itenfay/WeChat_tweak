//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMProgressView, MMUIActivityIndicatorView, MMUILabel, NSString, UIButton, UIImageView, UILabel, UIScrollView, UIView, WXGRoamBackupPackageDetailCell;

@interface WXGRoamBackupPackageDetailViewController
{
    MMProgressView *m_progressView;
    MMUILabel *m_progressLabel;
    float _backupProgress;
    UIView *_topView;
    UIView *_topNameView;
    UIView *_secondView;
    UIView *_blockView;
    UIView *_mainView;
    UIButton *_backupButton;
    UILabel *_titleLabel;
    UIView *_runningView;
    UIImageView *_runningArrow;
    UIImageView *_runningIcon;
    UILabel *_runningLabel;
    UILabel *_backupTimeLabel;
    MMUIActivityIndicatorView *_runningIndicator;
    WXGRoamBackupPackageDetailCell *_sizeCell;
    WXGRoamBackupPackageDetailCell *_rangeCell;
    WXGRoamBackupPackageDetailCell *_autobackupCell;
    WXGRoamBackupPackageDetailCell *_viewBackupedCell;
    WXGRoamBackupPackageDetailCell *_deviceCell;
    UIScrollView *_sheetView;
    NSString *_speedString;
    NSString *_leftTimeString;
    unsigned long long _curSpeed;
    unsigned long long _speedCount;
    unsigned long long _transferSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long transferSize; // @synthesize transferSize=_transferSize;
@property(nonatomic) unsigned long long speedCount; // @synthesize speedCount=_speedCount;
@property(nonatomic) unsigned long long curSpeed; // @synthesize curSpeed=_curSpeed;
@property(nonatomic) float backupProgress; // @synthesize backupProgress=_backupProgress;
@property(retain, nonatomic) NSString *leftTimeString; // @synthesize leftTimeString=_leftTimeString;
@property(retain, nonatomic) NSString *speedString; // @synthesize speedString=_speedString;
@property(retain, nonatomic) UIScrollView *sheetView; // @synthesize sheetView=_sheetView;
@property(retain, nonatomic) WXGRoamBackupPackageDetailCell *deviceCell; // @synthesize deviceCell=_deviceCell;
@property(retain, nonatomic) WXGRoamBackupPackageDetailCell *viewBackupedCell; // @synthesize viewBackupedCell=_viewBackupedCell;
@property(retain, nonatomic) WXGRoamBackupPackageDetailCell *autobackupCell; // @synthesize autobackupCell=_autobackupCell;
@property(retain, nonatomic) WXGRoamBackupPackageDetailCell *rangeCell; // @synthesize rangeCell=_rangeCell;
@property(retain, nonatomic) WXGRoamBackupPackageDetailCell *sizeCell; // @synthesize sizeCell=_sizeCell;
@property(retain, nonatomic) MMUIActivityIndicatorView *runningIndicator; // @synthesize runningIndicator=_runningIndicator;
@property(retain, nonatomic) UILabel *backupTimeLabel; // @synthesize backupTimeLabel=_backupTimeLabel;
@property(retain, nonatomic) UILabel *runningLabel; // @synthesize runningLabel=_runningLabel;
@property(retain, nonatomic) UIImageView *runningIcon; // @synthesize runningIcon=_runningIcon;
@property(retain, nonatomic) UIImageView *runningArrow; // @synthesize runningArrow=_runningArrow;
@property(retain, nonatomic) UIView *runningView; // @synthesize runningView=_runningView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *backupButton; // @synthesize backupButton=_backupButton;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) UIView *blockView; // @synthesize blockView=_blockView;
@property(retain, nonatomic) UIView *secondView; // @synthesize secondView=_secondView;
@property(retain, nonatomic) UIView *topNameView; // @synthesize topNameView=_topNameView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
- (void)onILinkDeviceUpdate:(id)arg1;
- (void)onRoamBackupPackageServiceFinishUpdatePackages:(int)arg1;
- (void)onRoamBackupPackageServiceDeleteBackupRet:(int)arg1;
- (void)onRoamBackupPackageServiceStartUpdatePackages;
- (void)onRoamBackupPackageServiceFinishDeletePackages:(int)arg1;
- (void)onRoamBackupPackageServiceTaskProgressEvent:(unsigned long long)arg1 current:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onRoamBackupPackageServiceTaskTransferStatsChanged:(unsigned long long)arg1 stats:(id)arg2;
- (void)onRoamBackupPackageServiceNotifyCode:(unsigned long long)arg1 notifyCode:(unsigned long long)arg2;
- (void)analysisStat:(id)arg1;
- (void)onDetail;
- (void)setupNavBar;
- (void)updateView;
- (void)updateSize;
- (void)addProgressView;
- (void)updateBackupView;
- (void)getTransferStats;
- (_Bool)isNeedToShowToast:(_Bool)arg1;
- (void)updateDeviceView;
- (void)setupSecondView;
- (void)setupTopOtherView;
- (void)setupTopNameView;
- (void)setupTopView;
- (void)setupViews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillPop:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


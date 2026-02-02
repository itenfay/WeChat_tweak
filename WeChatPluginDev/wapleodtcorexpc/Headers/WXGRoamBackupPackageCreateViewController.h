//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView, UILabel, UIScrollView, UISwitch, UIView, WXGRoamBackupPackageDetailCell;

@interface WXGRoamBackupPackageCreateViewController
{
    double m_cellHeight;
    _Bool _bTapCreateToSendNotify;
    _Bool _bTapToAddDevice;
    _Bool _bNeedBind;
    UIScrollView *_sheetView;
    UIView *_deviceView;
    UILabel *_deviceLable;
    UIImageView *_deviceIcon;
    UILabel *_sizeLabel;
    UIView *_rangeView;
    UILabel *_rangeMainLabel;
    UIView *_rangeChooseView;
    UIView *_rangeExtraView;
    UIView *_autoBackupView;
    UIView *_autoBackupExtraView;
    WXGRoamBackupPackageDetailCell *_autoBackupCell;
    UILabel *_tipsLabel;
    UISwitch *_lowPowerBtn;
    UISwitch *_autoBackupBtn;
    UISwitch *_mobileNetBtn;
    double _deviceTitleWidth;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bNeedBind; // @synthesize bNeedBind=_bNeedBind;
@property(nonatomic) _Bool bTapToAddDevice; // @synthesize bTapToAddDevice=_bTapToAddDevice;
@property(nonatomic) _Bool bTapCreateToSendNotify; // @synthesize bTapCreateToSendNotify=_bTapCreateToSendNotify;
@property(nonatomic) double deviceTitleWidth; // @synthesize deviceTitleWidth=_deviceTitleWidth;
@property(retain, nonatomic) UISwitch *mobileNetBtn; // @synthesize mobileNetBtn=_mobileNetBtn;
@property(retain, nonatomic) UISwitch *autoBackupBtn; // @synthesize autoBackupBtn=_autoBackupBtn;
@property(retain, nonatomic) UISwitch *lowPowerBtn; // @synthesize lowPowerBtn=_lowPowerBtn;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) WXGRoamBackupPackageDetailCell *autoBackupCell; // @synthesize autoBackupCell=_autoBackupCell;
@property(retain, nonatomic) UIView *autoBackupExtraView; // @synthesize autoBackupExtraView=_autoBackupExtraView;
@property(retain, nonatomic) UIView *autoBackupView; // @synthesize autoBackupView=_autoBackupView;
@property(retain, nonatomic) UIView *rangeExtraView; // @synthesize rangeExtraView=_rangeExtraView;
@property(retain, nonatomic) UIView *rangeChooseView; // @synthesize rangeChooseView=_rangeChooseView;
@property(retain, nonatomic) UILabel *rangeMainLabel; // @synthesize rangeMainLabel=_rangeMainLabel;
@property(retain, nonatomic) UIView *rangeView; // @synthesize rangeView=_rangeView;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UIImageView *deviceIcon; // @synthesize deviceIcon=_deviceIcon;
@property(retain, nonatomic) UILabel *deviceLable; // @synthesize deviceLable=_deviceLable;
@property(retain, nonatomic) UIView *deviceView; // @synthesize deviceView=_deviceView;
@property(retain, nonatomic) UIScrollView *sheetView; // @synthesize sheetView=_sheetView;
- (void)onRoamBackupPackageServiceFinishedCulculateCurrentModel;
- (void)onRoamBackupPackageServiceCreateViewModelChange;
- (void)onRoamBackupPackageServiceDeviceAddComplete;
- (void)onRoamBackupPackageServiceFinishCreatePackages:(int)arg1;
- (void)onRoamBackupPackageServiceBindTicketComplete:(_Bool)arg1;
- (void)createPackageInner;
- (void)createBackupPackage;
- (void)switchAutoBackup;
- (void)switchLowPower;
- (void)switchMobileNet;
- (void)onCancel;
- (void)setupNavBar;
- (void)setupRangeExtraView;
- (void)updateViews;
- (void)updateDefaultData;
- (void)setupViews;
- (void)getDefaultData;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


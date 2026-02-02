//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UILabel, UISwitch, UIView;

@interface WXGRoamHalfScreenView
{
    MMUILabel *m_titleLabel;
    MMUILabel *m_subTitleLabel;
    _Bool _isCloseDetail;
    _Bool _isEnterFromList;
    _Bool _enterIsAutoBackup;
    _Bool _enterIsLowPowerBackup;
    UIView *_autoBackupView;
    UIView *_autoBackupExtraView;
    UILabel *_autoTitle;
    UILabel *_autoPauseTips;
    UISwitch *_lowPowerBtn;
    UISwitch *_autoBackupBtn;
    UISwitch *_mobileNetBtn;
    double _cellHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) _Bool enterIsLowPowerBackup; // @synthesize enterIsLowPowerBackup=_enterIsLowPowerBackup;
@property(nonatomic) _Bool enterIsAutoBackup; // @synthesize enterIsAutoBackup=_enterIsAutoBackup;
@property(retain, nonatomic) UISwitch *mobileNetBtn; // @synthesize mobileNetBtn=_mobileNetBtn;
@property(retain, nonatomic) UISwitch *autoBackupBtn; // @synthesize autoBackupBtn=_autoBackupBtn;
@property(retain, nonatomic) UISwitch *lowPowerBtn; // @synthesize lowPowerBtn=_lowPowerBtn;
@property(retain, nonatomic) UILabel *autoPauseTips; // @synthesize autoPauseTips=_autoPauseTips;
@property(retain, nonatomic) UILabel *autoTitle; // @synthesize autoTitle=_autoTitle;
@property(retain, nonatomic) UIView *autoBackupExtraView; // @synthesize autoBackupExtraView=_autoBackupExtraView;
@property(retain, nonatomic) UIView *autoBackupView; // @synthesize autoBackupView=_autoBackupView;
@property(nonatomic) _Bool isEnterFromList; // @synthesize isEnterFromList=_isEnterFromList;
@property(nonatomic) _Bool isCloseDetail; // @synthesize isCloseDetail=_isCloseDetail;
- (void)switchLowPower;
- (void)switchMobileNet;
- (void)switchAutoBackup;
- (void)updateAutoView;
- (void)setupAutoView;
- (id)getDeviceName;
- (void)setupAutoBackupView;
- (void)pageSheetWillClose:(_Bool)arg1;
- (id)init;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NSURL, UIButton, UIImageView, UILabel, UIScrollView;

@interface WXGRoamBackupPackageTipsViewController
{
    UILabel *_titleLabel;
    UIImageView *_mainIcon;
    UIButton *_bottomButton;
    UIScrollView *_sheetView;
    NSURL *_dirURL;
    NSString *_deviceId;
    unsigned long long _enterScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSURL *dirURL; // @synthesize dirURL=_dirURL;
@property(retain, nonatomic) UIScrollView *sheetView; // @synthesize sheetView=_sheetView;
@property(retain, nonatomic) UIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(retain, nonatomic) UIImageView *mainIcon; // @synthesize mainIcon=_mainIcon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)onRoamOutBoxServiceFinishCreateBackupMenu:(_Bool)arg1 dirURL:(id)arg2 deviceId:(id)arg3;
- (void)onRoamBackupPackageServiceBindTicketComplete:(_Bool)arg1;
- (void)onOnlineInfoUpdated;
- (void)onLoginWeb;
- (void)onStartRegisterComputer;
- (void)onOutBoxSelectSuccess;
- (void)onShowOutBoxCheckPermission;
- (void)onShowOutBoxSelect;
- (void)onScan;
- (void)onCancel;
- (void)setupComputerRegisterTipsViewWithName:(id)arg1;
- (void)setupSubViewWith:(id)arg1;
- (void)setupDotTipsView;
- (void)initViewWithLeftNavStyle:(unsigned long long)arg1 IconName:(id)arg2 iconColor:(id)arg3 title:(id)arg4 subTitle:(id)arg5 buttonType:(unsigned long long)arg6 buttonTitle:(id)arg7 buttonSEL:(SEL)arg8;
- (id)navigationBarBackgroundColor;
- (id)initWithEnterScene:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


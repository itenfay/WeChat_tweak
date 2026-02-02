//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OnlineInfo, UIButton, UIImage, UIImageView, UILabel, UIView;
@protocol OnlineDeviceInfoViewControllerDelegate;

@interface OnlineDeviceInfoViewController
{
    UIImage *_deviceImg;
    UIImageView *_deviceView;
    UIButton *_logoutBtn;
    UILabel *_tipsLabel;
    UILabel *_subLabel;
    UILabel *_descriptionLabel;
    UIButton *_cancelBtn;
    UIButton *_helpBtn;
    _Bool _isManualOpen;
    UIView *m_backgroundView;
    NSString *deviceNameTmp;
    id <OnlineDeviceInfoViewControllerDelegate> _delegate;
    unsigned long long _supportedOrientations;
    OnlineInfo *_onlineClient;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OnlineInfo *onlineClient; // @synthesize onlineClient=_onlineClient;
@property(nonatomic) unsigned long long supportedOrientations; // @synthesize supportedOrientations=_supportedOrientations;
@property(nonatomic) __weak id <OnlineDeviceInfoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onExtDeviceOnlineStatusChanged;
- (void)onTopBarFrameChanged;
- (void)handleLockStatusChangesWithOnlineStatus;
- (void)setupInfoView;
- (id)getDeviceImgWithIsMuted:(_Bool)arg1;
- (void)onCancel;
- (void)onCancelBtnClicked;
- (void)onHelp;
- (void)setupCancelBtn;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)addBlurEffectForView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)onDeviceUnlock;
- (void)onUnlockMac;
- (void)unlockForMac:(id)arg1 isWindowExist:(_Bool)arg2;
- (id)initWithIsManualOpen:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


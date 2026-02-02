//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MultiDeviceManageViewController, NSString, OnlineDeviceInfoViewController;

@interface MMOnlineDeviceStatusMgr
{
    OnlineDeviceInfoViewController *_viewController;
    MultiDeviceManageViewController *_multiDeviceViewController;
}

- (void).cxx_destruct;
- (void)onExtDeviceNotifyUnlockWithMessage:(id)arg1;
- (void)onLogoutWeb;
- (void)showDeviceInfoUnlockView:(id)arg1 name:(id)arg2;
- (void)showDeviceInfoViewWithIsManualOpen:(_Bool)arg1 fromViewController:(id)arg2;
- (void)hideDeviceInfoView;
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


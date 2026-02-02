//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MultiDeviceLoginConfirmInfo, MultiDeviceManageInfo, NSString;

@protocol MultiDeviceCardViewDelegate <NSObject>
- (double)cardViewFullScreenHeight;
- (double)cardViewMaxWidth;

@optional
- (void)onTapManageLogoutButtonWithInfo:(MultiDeviceManageInfo *)arg1;
- (void)onTapKeepAliveCheckboxWithInfo:(MultiDeviceManageInfo *)arg1;
- (void)onTapAutoLoginCheckboxWithInfo:(MultiDeviceManageInfo *)arg1;
- (void)onTapLockButtonWithInfo:(MultiDeviceManageInfo *)arg1;
- (void)onTapSendFileButtonWithInfo:(MultiDeviceManageInfo *)arg1;
- (void)onTapNotificationButtonWithNewState:(_Bool)arg1;
- (void)onTapManageExpandButtonWithInfo:(MultiDeviceManageInfo *)arg1;
- (void)onTapManageHelpButtonWithInfo:(MultiDeviceManageInfo *)arg1;
- (void)onTapCancelLoginButton;
- (void)onTapConfirmLoginButtonWithInfo:(MultiDeviceLoginConfirmInfo *)arg1;
- (void)onJumpProtocolUrl:(NSString *)arg1;
- (void)shouldUpdateRightBarButtonItemWithShow:(_Bool)arg1;
@end


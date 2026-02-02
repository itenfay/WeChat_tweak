//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCAccountOneClickLoginViewControllerDelegate <NSObject>
- (void)onOneClickPlayLiveWithoutLogin;
- (void)onOneClickLoginGoToHelpCenter;
- (void)onOneClickLoginGoToSecurityCenter;
- (void)onOneClickLoginProblem;
- (void)onOneClickLoginSwitchAccount;
- (void)onLoginByQRCodeWithOneClickDisconnect;
- (void)onLoginByQRCode;
- (void)onLoginByQQ;
@end


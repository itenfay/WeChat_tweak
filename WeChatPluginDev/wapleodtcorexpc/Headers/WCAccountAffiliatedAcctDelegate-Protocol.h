//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCAccountBaseViewController;

@protocol WCAccountAffiliatedAcctDelegate <NSObject>
- (_Bool)shouldKeepOldLogic;

@optional
- (void)onLeaveViewController:(WCAccountBaseViewController *)arg1;
- (void)onShowHelpPage;
- (void)end;
- (void)nextToRegister;
- (void)nextToSetPassword;
- (void)nextToH5;
- (void)nextToRegUseNewPhone;
@end


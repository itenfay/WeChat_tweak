//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetPayFunctionSwitchListResponse, NSString;

@protocol WCPayWalletGetFunctionSwitchListCgiDelegate <NSObject>
- (void)onWCPayWalletGetFunctionSwitchListCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayWalletGetFunctionSwitchListCgiResponseOK:(GetPayFunctionSwitchListResponse *)arg1;
@end


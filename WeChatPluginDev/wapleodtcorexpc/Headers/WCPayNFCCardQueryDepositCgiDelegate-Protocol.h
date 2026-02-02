//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class DepositQueryDepositResponse, NSString, WCPayNFCCardQueryDepositCgi;

@protocol WCPayNFCCardQueryDepositCgiDelegate <NSObject>
- (void)onWCPayNFCCardQueryDepositCgiResponseError:(WCPayNFCCardQueryDepositCgi *)arg1 errorMsg:(NSString *)arg2 errorCode:(unsigned int)arg3;
- (void)onWCPayNFCCardQueryDepositCgiResponseOK:(WCPayNFCCardQueryDepositCgi *)arg1 result:(DepositQueryDepositResponse *)arg2;
@end


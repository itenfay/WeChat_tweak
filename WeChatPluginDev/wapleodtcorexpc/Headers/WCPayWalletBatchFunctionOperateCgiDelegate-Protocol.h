//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BatchFunctionOperateResponse, NSString;

@protocol WCPayWalletBatchFunctionOperateCgiDelegate <NSObject>
- (void)onWCPayWalletBatchFunctionOperateCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayWalletBatchFunctionOperateCgiResponseOK:(BatchFunctionOperateResponse *)arg1;
@end


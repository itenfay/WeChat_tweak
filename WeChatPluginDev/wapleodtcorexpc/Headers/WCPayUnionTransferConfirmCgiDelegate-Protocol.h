//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CgiUnionTransferOperationResp, NSString;

@protocol WCPayUnionTransferConfirmCgiDelegate <NSObject>
- (void)onWCPayUnionTransferConfirmCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayUnionTransferConfirmCgiResponseOK:(CgiUnionTransferOperationResp *)arg1;
@end


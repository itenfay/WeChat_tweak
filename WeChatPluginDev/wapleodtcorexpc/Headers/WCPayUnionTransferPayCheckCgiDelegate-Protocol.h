//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CgiUnionTransferPayCheckResp, NSString;

@protocol WCPayUnionTransferPayCheckCgiDelegate <NSObject>
- (void)onWCPayUnionTransferPayCheckCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayUnionTransferPayCheckCgiResponseOK:(CgiUnionTransferPayCheckResp *)arg1;
@end


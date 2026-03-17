//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CgiUnionTransferQueryStatusResp, NSString;

@protocol WCPayUnionTransferQueryCgiDelegate <NSObject>
- (void)onWCPayUnionTransferQueryCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayUnionTransferQueryCgiResponseOK:(CgiUnionTransferQueryStatusResp *)arg1;
@end


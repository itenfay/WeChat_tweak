//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CgiUnionTransferBeforeResp, NSString;

@protocol WCPayUnionTransferBeforeCgiDelegate <NSObject>
- (void)onWCPayUnionTransferBeforeCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayUnionTransferBeforeCgiResponseOK:(CgiUnionTransferBeforeResp *)arg1;
@end


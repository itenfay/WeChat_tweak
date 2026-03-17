//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TransferPhonePayCheckResp;

@protocol WCPayTransferPhonePayCheckCgiDelegate <NSObject>
- (void)onWCPayTransferPhonePayCheckCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhonePayCheckCgiResp:(TransferPhonePayCheckResp *)arg1;
@end


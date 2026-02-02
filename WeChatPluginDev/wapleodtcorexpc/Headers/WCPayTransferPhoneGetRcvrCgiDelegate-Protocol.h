//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TransferPhoneGetRcvrResp;

@protocol WCPayTransferPhoneGetRcvrCgiDelegate <NSObject>
- (void)onWCPayTransferPhoneGetRcvrCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneGetRcvrCgiRcvidInvaild:(TransferPhoneGetRcvrResp *)arg1;
- (void)onWCPayTransferPhoneGetRcvrCgiResp:(TransferPhoneGetRcvrResp *)arg1;
@end


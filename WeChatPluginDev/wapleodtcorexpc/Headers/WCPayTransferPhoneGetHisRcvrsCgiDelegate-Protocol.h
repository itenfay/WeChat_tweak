//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TransferPhoneGetHisRcvrsResp;

@protocol WCPayTransferPhoneGetHisRcvrsCgiDelegate <NSObject>
- (void)onWCPayTransferPhoneGetHisRcvrsCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneGetHisRcvrsCgiResp:(TransferPhoneGetHisRcvrsResp *)arg1;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TransferPhoneCheckNameResp;

@protocol WCPayTransferPhoneCheckNameCgiDelegate <NSObject>
- (void)onWCPayTransferPhoneCheckNameCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneCheckNameCgiResp:(TransferPhoneCheckNameResp *)arg1;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TransferPhoneChangeSwitchResp;

@protocol WCPayTransferPhoneChangeSwitchCgiDelegate <NSObject>
- (void)onWCPayTransferPhoneChangeSwitchCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneChangeSwitchCgiResp:(TransferPhoneChangeSwitchResp *)arg1;
@end


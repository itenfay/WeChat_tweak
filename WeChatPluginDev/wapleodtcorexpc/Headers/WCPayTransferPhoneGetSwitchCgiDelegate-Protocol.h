//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TransferPhoneGetSwitchResp;

@protocol WCPayTransferPhoneGetSwitchCgiDelegate <NSObject>
- (void)onWCPayTransferPhoneGetSwitchCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneGetSwitchCgiResp:(TransferPhoneGetSwitchResp *)arg1;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TransferPhoneSuccPageResp;

@protocol WCPayTransferPhoneSuccPageCgiDelegate <NSObject>
- (void)onWCPayTransferPhoneSuccPageCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneSuccPageCgiResp:(TransferPhoneSuccPageResp *)arg1;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TransferPhoneHomePageResp;

@protocol WCPayTransferPhoneHomePageCgiDelegate <NSObject>
- (void)onWCPayTransferPhoneHomePageCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneHomePageCgiResp:(TransferPhoneHomePageResp *)arg1;
@end


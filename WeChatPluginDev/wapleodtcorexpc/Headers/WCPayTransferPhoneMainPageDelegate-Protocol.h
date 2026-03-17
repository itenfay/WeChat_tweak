//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TransferPhoneGetRcvrResp;

@protocol WCPayTransferPhoneMainPageDelegate <NSObject>
- (void)onWCPayTransferPhoneMainPageActiveTextField;
- (_Bool)onWCPayTransferPhoneMainPageShowCheckName;
- (NSString *)onWCPayTransferPhoneMainPageShowName;
- (TransferPhoneGetRcvrResp *)onWCPayTransferPhoneMainPageGetRcvrResp;
- (void)onWCPayTransferPhoneMainPageToCheckName:(NSString *)arg1;
- (void)onWCPayTransferPhoneMainPageToNext:(unsigned int)arg1 comment:(NSString *)arg2 mode:(unsigned int)arg3;
- (void)onWCPayTransferPhoneMainPageBack;
@end


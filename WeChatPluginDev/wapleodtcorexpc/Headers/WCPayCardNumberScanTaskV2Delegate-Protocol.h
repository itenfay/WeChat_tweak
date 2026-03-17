//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCPayCardNumberScanTaskV2;

@protocol WCPayCardNumberScanTaskV2Delegate <NSObject>
- (void)onWCPayCardNumberScanTaskV2:(WCPayCardNumberScanTaskV2 *)arg1 errorMsg:(NSString *)arg2;
- (void)onWCPayCardNumberScanTaskV2:(WCPayCardNumberScanTaskV2 *)arg1 cardNumber:(NSString *)arg2 seqNum:(unsigned int)arg3 leftTop:(struct CGPoint)arg4 rightTop:(struct CGPoint)arg5 rightBottom:(struct CGPoint)arg6 leftBottom:(struct CGPoint)arg7 scanResult:(NSString *)arg8;
@end


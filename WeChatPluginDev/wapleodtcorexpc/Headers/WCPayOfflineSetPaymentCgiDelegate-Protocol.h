//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class SetPaymentRequest, SetPaymentResponse;

@protocol WCPayOfflineSetPaymentCgiDelegate <NSObject>
- (void)onGetOfflineSetPaymentCgiResp:(SetPaymentResponse *)arg1 request:(SetPaymentRequest *)arg2;
@end


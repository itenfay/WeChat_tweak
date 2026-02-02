//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol WCPayMallRequestPaymentControlLogicDelegate <NSObject>
- (void)mallPaymentLogicDidFailWithResult:(NSDictionary *)arg1;
- (void)mallPaymentLogicDidPaySucc;
@end


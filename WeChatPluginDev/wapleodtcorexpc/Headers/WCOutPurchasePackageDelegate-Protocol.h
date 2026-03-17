//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCOPurchasePackageRequest, WCOPurchasePackageResponse;

@protocol WCOutPurchasePackageDelegate <NSObject>
- (void)PurchasePackageResponse:(int)arg1 Request:(WCOPurchasePackageRequest *)arg2 Response:(WCOPurchasePackageResponse *)arg3;
@end


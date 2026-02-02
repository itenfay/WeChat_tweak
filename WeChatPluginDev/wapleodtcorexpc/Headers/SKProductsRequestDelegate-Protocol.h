//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "SKRequestDelegate-Protocol.h"

@class SKProductsRequest, SKProductsResponse;

@protocol SKProductsRequestDelegate <SKRequestDelegate>
- (void)productsRequest:(SKProductsRequest *)arg1 didReceiveResponse:(SKProductsResponse *)arg2;
@end


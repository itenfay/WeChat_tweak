//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetWCOPackageProductListRequest, GetWCOPackageProductListResponse;

@protocol WCOutPackageProductListDelegate <NSObject>
- (void)PackageProductListResponse:(int)arg1 Request:(GetWCOPackageProductListRequest *)arg2 Response:(GetWCOPackageProductListResponse *)arg3;
@end


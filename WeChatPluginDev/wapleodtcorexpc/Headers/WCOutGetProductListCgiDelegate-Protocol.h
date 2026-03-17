//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetWCOProductListResponse, WCOutGetProductListCgi;

@protocol WCOutGetProductListCgiDelegate <NSObject>
- (void)WCOutGetProductListCgiDidFail:(WCOutGetProductListCgi *)arg1;
- (void)WCOutGetProductListCgi:(WCOutGetProductListCgi *)arg1 successWithResponse:(GetWCOProductListResponse *)arg2;
@end


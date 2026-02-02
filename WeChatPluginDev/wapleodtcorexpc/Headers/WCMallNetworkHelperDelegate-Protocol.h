//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetPayFunctionListRequest, GetPayFunctionListResponse, NSError, PayChargeProxyRequest, PayChargeProxyResponse;

@protocol WCMallNetworkHelperDelegate <NSObject>
- (void)OnCallPayChargeProxy:(PayChargeProxyResponse *)arg1 Request:(PayChargeProxyRequest *)arg2 Error:(NSError *)arg3;
- (void)OnCallBackGetWCMallFunctionList:(GetPayFunctionListResponse *)arg1 Request:(GetPayFunctionListRequest *)arg2 Error:(NSError *)arg3;
@end


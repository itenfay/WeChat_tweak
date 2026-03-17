//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSObject, WCBaseCgi, WCBaseNetworkingError, WXPBGeneratedMessage;

@protocol WCBaseCgiDelegate <NSObject>

@optional
- (void)baseCgi:(WCBaseCgi *)arg1 didFailWithError:(WCBaseNetworkingError *)arg2 response:(WXPBGeneratedMessage *)arg3;
- (void)baseCgi:(WCBaseCgi *)arg1 didGetResponseData:(NSData *)arg2;
- (void)baseCgi:(WCBaseCgi *)arg1 didGetResponse:(WXPBGeneratedMessage *)arg2;
- (NSObject *)userDataForBaseCgi:(WCBaseCgi *)arg1;
@end


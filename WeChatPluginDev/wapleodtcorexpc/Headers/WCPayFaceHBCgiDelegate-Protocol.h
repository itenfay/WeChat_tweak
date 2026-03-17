//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCPayBaseNetworkingError, WCPayFaceHBCgi, WXPBGeneratedMessage;

@protocol WCPayFaceHBCgiDelegate <NSObject>
- (void)didWCPayFaceHBCgi:(WCPayFaceHBCgi *)arg1 Response:(WXPBGeneratedMessage *)arg2 Error:(WCPayBaseNetworkingError *)arg3 Key:(NSString *)arg4;
@end


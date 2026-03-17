//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCBaseCgi, WCBaseNetworkingError;

@protocol WADeviceVoipAuthModCgiDelegate <NSObject>
- (void)didFailToModDeviceAuthStatusWithError:(WCBaseNetworkingError *)arg1 cgi:(WCBaseCgi *)arg2;
- (void)didModDeviceVoipAuthStatus:(WCBaseCgi *)arg1;
@end


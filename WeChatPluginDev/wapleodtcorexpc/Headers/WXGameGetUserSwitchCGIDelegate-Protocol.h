//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetUserSwitchResponse, WCBaseNetworkingError, WXGameGetUserSwitchCGI;

@protocol WXGameGetUserSwitchCGIDelegate <NSObject>
- (void)getUserSwitchCGI:(WXGameGetUserSwitchCGI *)arg1 didFailWithError:(WCBaseNetworkingError *)arg2;
- (void)getUserSwitchCGI:(WXGameGetUserSwitchCGI *)arg1 didGetResponse:(GetUserSwitchResponse *)arg2;
@end


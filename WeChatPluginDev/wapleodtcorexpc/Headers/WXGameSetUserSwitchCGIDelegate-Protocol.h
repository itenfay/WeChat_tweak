//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class SetUserSwitchResponse, WCBaseNetworkingError, WXGameSetUserSwitchCGI;

@protocol WXGameSetUserSwitchCGIDelegate <NSObject>
- (void)setUserSwitchCGI:(WXGameSetUserSwitchCGI *)arg1 didFailWithError:(WCBaseNetworkingError *)arg2;
- (void)setUserSwitchCGI:(WXGameSetUserSwitchCGI *)arg1 didGetResponse:(SetUserSwitchResponse *)arg2;
@end


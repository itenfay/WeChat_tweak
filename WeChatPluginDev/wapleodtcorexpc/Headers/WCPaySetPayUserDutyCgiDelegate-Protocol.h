//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayBaseNetworkingError, WCPaySetPayUserDutyCgiResp;

@protocol WCPaySetPayUserDutyCgiDelegate <NSObject>
- (void)onWCPaySetPayUserDutyCgiError:(WCPayBaseNetworkingError *)arg1;
- (void)onWCPaySetPayUserDutyCgiResp:(WCPaySetPayUserDutyCgiResp *)arg1;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, WCPayJSApiSecureTunnelControlLogic;

@protocol SecureTunnelLogicDelegate <NSObject>
- (void)onSecureTunnelLogicFail:(NSString *)arg1 from:(WCPayJSApiSecureTunnelControlLogic *)arg2;
- (void)onSecureTunnelLogicSuccess:(NSDictionary *)arg1 from:(WCPayJSApiSecureTunnelControlLogic *)arg2;
@end


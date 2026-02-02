//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class HBBusinessCallbackResp, WCPayBaseNetworkingError;

@protocol HBBusinessCallbackCgiDelegate <NSObject>
- (void)onHBBusinessCallbackCgiError:(WCPayBaseNetworkingError *)arg1;
- (void)onHBBusinessCallbackCgiResp:(HBBusinessCallbackResp *)arg1;
@end


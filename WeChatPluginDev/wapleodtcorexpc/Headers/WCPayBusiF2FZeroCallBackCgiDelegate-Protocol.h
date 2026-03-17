//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BusiF2FZeroCallBackResp, WCPayBaseNetworkingError;

@protocol WCPayBusiF2FZeroCallBackCgiDelegate <NSObject>
- (void)onWCPayBusiF2FZeroCallBackCgiError:(WCPayBaseNetworkingError *)arg1;
- (void)onWCPayBusiF2FZeroCallBackCgiResp:(BusiF2FZeroCallBackResp *)arg1;
@end


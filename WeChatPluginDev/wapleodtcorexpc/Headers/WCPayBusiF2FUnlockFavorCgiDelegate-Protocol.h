//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BusiF2FUnlockFavorResp, WCPayBaseNetworkingError;

@protocol WCPayBusiF2FUnlockFavorCgiDelegate <NSObject>
- (void)onWCPayBusiF2FUnlockFavorCgiError:(WCPayBaseNetworkingError *)arg1;
- (void)onWCPayBusiF2FUnlockFavorCgiResp:(BusiF2FUnlockFavorResp *)arg1;
@end


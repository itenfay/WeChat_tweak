//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BusiF2FGetFavorResp, WCPayBaseNetworkingError;

@protocol WCPayBusiF2FGetFavorCgiDelegate <NSObject>
- (void)onWCPayBusiF2FGetFavorCgiError:(WCPayBaseNetworkingError *)arg1;
- (void)onWCPayBusiF2FGetFavorCgiResp:(BusiF2FGetFavorResp *)arg1;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BusiF2FSucPageResp, WCPayBaseNetworkingError;

@protocol WCPayBusiF2FSucPageCgiDelegate <NSObject>
- (void)onWCPayBusiF2FSucPageCgiError:(WCPayBaseNetworkingError *)arg1;
- (void)onWCPayBusiF2FSucPageCgiResp:(BusiF2FSucPageResp *)arg1;
@end


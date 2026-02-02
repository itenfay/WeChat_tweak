//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBusiF2FGetFavorCgiDelegate-Protocol.h"

@class BusiF2FGetFavorResp, WCPayBaseNetworkingError;

@protocol InternalLoadingFavorDelegate <WCPayBusiF2FGetFavorCgiDelegate>
- (void)onInternalLoadingFavor:(BusiF2FGetFavorResp *)arg1;
- (void)onInternalLoadingFavorError:(WCPayBaseNetworkingError *)arg1;
@end


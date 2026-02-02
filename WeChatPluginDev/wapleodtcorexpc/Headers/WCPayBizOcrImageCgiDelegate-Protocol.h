//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BizOcrImageResponse, WCPayBaseNetworkingError;

@protocol WCPayBizOcrImageCgiDelegate <NSObject>
- (void)onWCPayBizOcrImageCgiNetworkError:(WCPayBaseNetworkingError *)arg1;
- (void)onWCPayBizOcrImageCgiResp:(BizOcrImageResponse *)arg1;
@end


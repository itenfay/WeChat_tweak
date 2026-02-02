//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetHbRefundConfigResp, NSString;

@protocol WCPayHongBaoRefundConfigCgiDelegate <NSObject>
- (void)OnHongBaoRefundConfigRepsonseError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnHongBaoRefundConfigRepsonseOK:(GetHbRefundConfigResp *)arg1;
@end


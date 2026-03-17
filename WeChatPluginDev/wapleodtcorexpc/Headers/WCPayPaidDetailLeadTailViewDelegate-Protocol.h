//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class RouteInfo, WCPayPaidDetailLeadTailCmdData;

@protocol WCPayPaidDetailLeadTailViewDelegate <NSObject>
- (void)onLeadTailViewClickWithCmdData:(WCPayPaidDetailLeadTailCmdData *)arg1;
- (void)onLeadTailViewClickWithRouteInfo:(RouteInfo *)arg1;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayBindCardInfo, WCPaySelectPayWayView;

@protocol WCPaySelectPayWayViewDelegate <NSObject>
- (void)selectPayWayView:(WCPaySelectPayWayView *)arg1 didSelectCard:(WCPayBindCardInfo *)arg2;

@optional
- (void)selectPayWayViewDidSelectAddNewCard:(WCPaySelectPayWayView *)arg1;
@end


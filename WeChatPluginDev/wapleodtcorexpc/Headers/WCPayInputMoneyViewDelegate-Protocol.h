//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCPayInputMoneyView;

@protocol WCPayInputMoneyViewDelegate <NSObject>

@optional
- (void)wcpayInputMoneyView:(WCPayInputMoneyView *)arg1 didChangeAmount:(NSString *)arg2;
@end


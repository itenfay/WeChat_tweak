//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCPayLQTOrderConfirmViewDelegate <NSObject>
- (void)onOrderConfirmViewPayWithEnPwd:(NSString *)arg1;
- (void)onOrderConfirmViewClose;
- (void)onOrderConfirmViewCancel;
@end


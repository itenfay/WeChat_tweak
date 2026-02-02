//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCPayGPMoneyInputViewControllerDelegate <NSObject>
- (void)onWCPayGPMoneyInputViewControllerConfirmWithMoney:(unsigned long long)arg1 payReason:(NSString *)arg2;
- (void)onWCPayGPMoneyInputViewControllerBack;
@end


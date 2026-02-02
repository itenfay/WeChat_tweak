//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayControlData, WCPayPayPwdViewController;

@protocol WCPayPayPwdViewControllerDelegate <NSObject>
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;

@optional
- (void)VerifyPayPwdNext:(WCPayControlData *)arg1 vc:(WCPayPayPwdViewController *)arg2;
- (void)RepeatInputPayPwd:(WCPayControlData *)arg1;
- (void)SetPayPwdNext:(WCPayControlData *)arg1;
- (void)VerifyPayPwdNext:(WCPayControlData *)arg1;
@end


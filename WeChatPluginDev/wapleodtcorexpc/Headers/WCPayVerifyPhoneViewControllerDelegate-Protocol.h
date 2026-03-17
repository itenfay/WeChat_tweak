//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol WCPayVerifyPhoneViewControllerDelegate <NSObject>
- (NSArray *)onWCPayVerifyPhoneViewControllerBannedArea;
- (void)onWCPayVerifyPhoneViewControllerGetVerifyCode:(NSString *)arg1 Phone:(NSString *)arg2 retry:(_Bool)arg3;
- (void)onWCPayVerifyPhoneViewControllerNext:(NSString *)arg1 Phone:(NSString *)arg2 verifyCode:(NSString *)arg3;
- (void)onWCPayVerifyPhoneViewControllerBack;
@end


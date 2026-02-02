//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCPayBizF2FConfirmViewControllerDelegate <NSObject>

@optional
- (NSString *)onWCPayBizF2FConfirmViewControllerSign;
- (NSString *)onWCPayBizF2FConfirmViewControllerDesc;
- (NSString *)onWCPayBizF2FConfirmViewControllerTitle;
- (void)onWCPayBizF2FConfirmViewControllerConfirm:(unsigned long long)arg1 sign:(NSString *)arg2;
- (void)onWCPayBizF2FConfirmViewControllerBack;
- (void)onWCPayBizF2FConfirmViewControllerClickBackButton;
@end


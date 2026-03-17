//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, UIViewController;

@protocol UPWebPayDelegate <NSObject>
- (void)onPayCancel:(UIViewController *)arg1;
- (void)onWebPayResult:(NSDictionary *)arg1;
- (_Bool)onSDKPay:(UIViewController *)arg1;
@end


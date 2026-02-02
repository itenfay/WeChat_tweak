//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;

@protocol IWAPrivacyConfirmService <NSObject>
+ (_Bool)isNeedOverseaPrivacyConfirm;
+ (_Bool)isNeedPrivacyConfirm;
- (void)requestOverseaPrivacyWithCompletion:(void (^)(_Bool, NSString *))arg1;
- (void)requestPrivacyConfirmrequirement:(NSString *)arg1 viewController:(UIViewController *)arg2 completion:(void (^)(_Bool, NSString *))arg3;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController;

@protocol MultiDeviceLoginLogicDelegate <NSObject>
- (void)onCancelLogin;
- (void)onConfirmLoginFailed;
- (void)onConfirmLoginSucceeded;
- (MMUIViewController *)viewController;
@end


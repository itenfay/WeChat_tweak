//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMLimitedModeAuthorizeRequestViewControllerLogicDelegate <NSObject>

@optional
- (void)onAuthorizeRequestVerifyCancel;
- (void)onAuthorizeRequestForwardMessageSendSuccess;
- (void)onAuthorizeRequestVerifyPasswordSuccessAndAnimationEndedWithTicket:(NSString *)arg1;
- (void)onAuthorizeRequestVerifyPasswordSuccessTicket:(NSString *)arg1;
@end


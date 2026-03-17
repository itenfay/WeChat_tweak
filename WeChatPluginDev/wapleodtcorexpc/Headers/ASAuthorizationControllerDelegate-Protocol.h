//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ASAuthorization, ASAuthorizationController, NSError, NSString;

@protocol ASAuthorizationControllerDelegate <NSObject>

@optional
- (void)authorizationController:(ASAuthorizationController *)arg1 didCompleteWithCustomMethod:(NSString *)arg2;
- (void)authorizationController:(ASAuthorizationController *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)authorizationController:(ASAuthorizationController *)arg1 didCompleteWithAuthorization:(ASAuthorization *)arg2;
@end


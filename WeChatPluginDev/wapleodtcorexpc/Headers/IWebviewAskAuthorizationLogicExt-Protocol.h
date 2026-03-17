//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WebviewAuthorizationInfo;

@protocol IWebviewAskAuthorizationLogicExt

@optional
- (void)OnAskAuthorizationFailure:(NSString *)arg1 ForAuthInfo:(WebviewAuthorizationInfo *)arg2;
- (void)OnAskAuthorizationSuccessForAuthInfo:(WebviewAuthorizationInfo *)arg1;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IMMFacebookMgrExt <NSObject>

@optional
- (void)facebookCheckAccessTokenValidFinished:(_Bool)arg1;
- (void)onExtendTokenFinish:(_Bool)arg1;
- (void)onUnBindFacebookFinish:(unsigned int)arg1;
- (void)onBindFacebookFinish:(unsigned int)arg1;
- (void)onLoginFacebookBegan:(NSString *)arg1;
- (void)onFBDidNotLogin:(_Bool)arg1;
- (void)onFBDidLogin;
@end


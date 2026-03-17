//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class JSAuthorizeConfirmResponse, MMUIViewController, NSString, WAAuthorizeResultInfo, WACgiResponse, WAUserAuthorizeLogic;

@protocol WAAuthorizeDelegate <NSObject>

@optional
- (void)onAuthorizeConfirmEnd:(_Bool)arg1 response:(JSAuthorizeConfirmResponse *)arg2;
- (void)onAuthorizeConfirmDeny:(NSString *)arg1 resultInfo:(WAAuthorizeResultInfo *)arg2;
- (void)onAuthorizeConfirmInconsistent:(NSString *)arg1 resultInfo:(WAAuthorizeResultInfo *)arg2;
- (void)onAuthorizeConfirmAccept:(NSString *)arg1 resultInfo:(WAAuthorizeResultInfo *)arg2;
- (void)onAuthorizeNeedConfirm:(WAUserAuthorizeLogic *)arg1 cgiResponse:(WACgiResponse *)arg2;
- (void)onRequestAuthorizeOK;
- (void)onRequestAuthorizeFail:(NSString *)arg1 errNo:(int)arg2;
- (MMUIViewController *)getCurrentViewController;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetA8KeyResp, GetA8KeyRespVerifyPrefetchInfo, NSArray, NSData, NSDictionary, NSMutableDictionary, NSString;

@protocol WebViewA8KeyLogicDelegate <NSObject>
- (void)saveJSAPIPermissionsInOfflineCache:(NSData *)arg1 url:(NSString *)arg2;
- (void)saveJSAPIPermissions:(NSData *)arg1 url:(NSString *)arg2;
- (void)saveJSAPIAuthInfo:(NSArray *)arg1;
- (void)onJumpToAppStoreControlWithUrl:(NSString *)arg1;
- (void)onJumpToEmoticonDetailViewController:(NSString *)arg1;
- (void)onJumpToViewController:(NSString *)arg1;
- (void)onJumpToSafariWithUrl:(NSString *)arg1;
- (void)onUpdatedPermisson;
- (void)onGetA8Key:(_Bool)arg1 ReqUrl:(NSString *)arg2 Reason:(int)arg3;

@optional
- (void)onSwitchSecCtrlMode:(unsigned int)arg1;
- (void)onReceivedExtractPageFeatureFlagWithUrl:(NSString *)arg1;
- (void)onSwitchToShareTextControl:(NSString *)arg1;
- (void)onGetA8KeyFinishWithRequestUrl:(NSString *)arg1 response:(GetA8KeyResp *)arg2 reason:(int)arg3;
- (_Bool)handleA8keyVerifyPrefetchInfo:(GetA8KeyRespVerifyPrefetchInfo *)arg1 url:(NSString *)arg2;
- (_Bool)needKeepA8KeyResult;
- (unsigned int)a8keyWebviewFontScale;
- (NSDictionary *)getLocalHttpHeadersForA8KeyUrl:(NSString *)arg1;
- (void)onGetA8KeyBeforeGoToUrl:(NSString *)arg1 success:(_Bool)arg2 reason:(int)arg3;
- (void)onGetA8KeyWithRequestUrl:(NSString *)arg1 fullUrl:(NSString *)arg2 header:(NSMutableDictionary *)arg3;
- (void)onShowAutoOAuthViewWithSchemeUrl:(NSString *)arg1 Success:(_Bool)arg2 Wording:(NSString *)arg3 HeadImgUrl:(NSString *)arg4;
- (void)onStartGetA8Key:(NSString *)arg1;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class JSFunctionDef, MMUIViewController, NSArray, NSDictionary, NSString;
@protocol WXCustomWebViewControllerProtocol;

@protocol WebViewJSLogicDelegate <NSObject>
- (void)onPageStateChange:(NSString *)arg1;
- (void)onCopy:(NSString *)arg1;
- (void)kvReportJSCall:(NSString *)arg1 withParam:(NSDictionary *)arg2;
- (NSArray *)getAuthorizedMonitorEvents:(NSString *)arg1;
- (void)processJSAPICall:(NSDictionary *)arg1 funcDef:(JSFunctionDef *)arg2 funcBlock:(void (^)(void))arg3 failHandleBlock:(void (^)(NSDictionary *))arg4 apiPermission:(unsigned char)arg5;
- (_Bool)getJSApiEnvCompatibility:(JSFunctionDef *)arg1;
- (_Bool)getJSApiFrequncyCheckResult:(JSFunctionDef *)arg1;
- (unsigned char)getJSApiPermission:(JSFunctionDef *)arg1;
- (_Bool)isGetingA8Key;
- (_Bool)isBridgedInNewMode;
- (MMUIViewController<WXCustomWebViewControllerProtocol> *)getCurrentWebviewViewController;

@optional
- (NSDictionary *)currentWebviewEnvInfo;
- (NSString *)currentPermissionKeyUrlString;
- (_Bool)isUseAllOneWXJS;
- (_Bool)isDisableRecordHistory;
- (void)handleMonitorMessage:(NSString *)arg1 params:(NSDictionary *)arg2;
- (_Bool)isTempAccessOfJSApiPermitted:(NSString *)arg1;
- (void)onFinishedHandleJSApi;
- (void)onDomReady;
@end


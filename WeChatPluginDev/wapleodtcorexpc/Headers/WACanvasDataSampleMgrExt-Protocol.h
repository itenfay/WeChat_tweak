//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WACanvasDataSampleMgrExt <NSObject>

@optional
- (void)onServiceRequestSample:(NSString *)arg1 EventInfo:(NSString *)arg2 Success:(void (^)(NSDictionary *))arg3 Failure:(void (^)(NSDictionary *))arg4 targetViewId:(int)arg5 isDebugMode:(_Bool)arg6;
- (void)onAfterWebViewLoad:(NSString *)arg1 viewId:(int)arg2;
- (void)onBeforeWAGameExit:(NSString *)arg1;
- (void)onBeforeProfileRedirect:(NSString *)arg1;
- (void)onBeforeQRCodeRecognized:(NSString *)arg1;
@end


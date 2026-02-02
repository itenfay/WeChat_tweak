//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class JSFunctionDef, NSDictionary, NSString, WebViewSanboxSessionTask;

@protocol WebViewSanboxSessionTaskDelegate <NSObject>
- (void)mainThread_fetchCurrentSesessionEvalMainFrameBeginTimeStamp:(unsigned long long *)arg1 endTimeStamp:(unsigned long long *)arg2;
- (void)mainThread_onInvokeJsApiFromContext:(NSString *)arg1 params:(NSDictionary *)arg2 callBackId:(NSString *)arg3 task:(WebViewSanboxSessionTask *)arg4;
- (JSFunctionDef *)mainThread_jsapiDef:(NSString *)arg1;
- (void)mainThread_onSendMessageToSanbox:(NSString *)arg1 task:(WebViewSanboxSessionTask *)arg2;
@end


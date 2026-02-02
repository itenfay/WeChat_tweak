//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSContext, JSVirtualMachine, MMWebOptimJSContextTaskConfig, NSString;

@interface MMWebOptimJSContextTask
{
    NSString *_taskId;
    JSContext *_publicContext;
    JSContext *_devContext;
    JSVirtualMachine *_jsVirtualMachine;
    MMWebOptimJSContextTaskConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebOptimJSContextTaskConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) JSVirtualMachine *jsVirtualMachine; // @synthesize jsVirtualMachine=_jsVirtualMachine;
@property(retain, nonatomic) JSContext *devContext; // @synthesize devContext=_devContext;
@property(retain, nonatomic) JSContext *publicContext; // @synthesize publicContext=_publicContext;
@property(copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callBackInvokeApiResult:(id)arg1 params:(id)arg2;
- (void)callCommCgiResponseResult:(id)arg1 responseStr:(id)arg2;
- (void)callCommCgiErrorEvent:(id)arg1 errorType:(int)arg2 errorCode:(int)arg3 errMsg:(id)arg4;
- (void)onResponseCommCgi:(id)arg1;
- (void)requestCommonCgi:(id)arg1 requestString:(id)arg2;
- (id)contextEvaluateScript:(id)arg1;
- (void)injectMainifestJS;
- (_Bool)injectPublicLib;
- (void)setupAddCachesApiBlock:(id)arg1;
- (void)setupCommCgiApiBlock:(id)arg1;
- (void)setupLogApiBlock:(id)arg1;
- (void)setupReportApiBlock:(id)arg1;
- (void)setupJSErrorHandler:(id)arg1;
- (id)jsContextBridge;
- (void)setupDevContext;
- (void)setupPublicContext;
- (void)internalInit;
- (id)prefetchResArrForUrl:(id)arg1;
- (id)identiferForUrl:(id)arg1;
- (_Bool)isSupportPrefetchForUrl:(id)arg1 extInfo:(id)arg2;
- (void)dealloc;
- (id)initWithConfig:(id)arg1 jvm:(id)arg2;

@end


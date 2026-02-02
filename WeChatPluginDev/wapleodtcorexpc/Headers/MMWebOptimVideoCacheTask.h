//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSContext, JSVirtualMachine, NSMutableDictionary, NSString, VideoPreloadReporter;

@interface MMWebOptimVideoCacheTask
{
    _Bool _isInitSuccess;
    NSString *_taskId;
    JSContext *_publicContext;
    JSContext *_devContext;
    JSVirtualMachine *_jsVirtualMachine;
    VideoPreloadReporter *_reporter;
    NSMutableDictionary *_getVUrlDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *getVUrlDict; // @synthesize getVUrlDict=_getVUrlDict;
@property(retain, nonatomic) VideoPreloadReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) JSVirtualMachine *jsVirtualMachine; // @synthesize jsVirtualMachine=_jsVirtualMachine;
@property(retain, nonatomic) JSContext *devContext; // @synthesize devContext=_devContext;
@property(retain, nonatomic) JSContext *publicContext; // @synthesize publicContext=_publicContext;
@property(copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool isInitSuccess; // @synthesize isInitSuccess=_isInitSuccess;
- (void)OnCdnVideoPreloadCompleted:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callBackInvokeApiResult:(id)arg1 params:(id)arg2;
- (void)callCommCgiResponseResult:(id)arg1 responseStr:(id)arg2 errMsg:(id)arg3;
- (void)callCommCgiErrorEvent:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3;
- (void)onResponseCommCgi:(id)arg1;
- (void)requestCommonCgi:(id)arg1 requestString:(id)arg2;
- (id)contextEvaluateScript:(id)arg1;
- (_Bool)injectManifestJS;
- (_Bool)injectPublicLib;
- (void)setupGetLocalDataBlock:(id)arg1;
- (void)setupSetLocalDataBlock:(id)arg1;
- (void)setupGetNetworkTypeBlock:(id)arg1;
- (void)setupuseSameLayerForVideoBlock:(id)arg1;
- (void)setupGetVideoUrlFromMpUrlBlock:(id)arg1;
- (void)setupCacheVideoBlock:(id)arg1;
- (void)setupUserAgent:(id)arg1;
- (void)setupCommCgiApiBlock:(id)arg1;
- (void)setupLogApiBlock:(id)arg1;
- (void)setupReportApiBlock:(id)arg1;
- (void)setupJSErrorHandler:(id)arg1;
- (id)jsContextBridge;
- (void)setupDevContext;
- (void)setupPublicContext;
- (_Bool)internalInit;
- (_Bool)startGetVideoUrlFromPageUrl:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)startPrefetchWithUrl:(id)arg1 itemShowType:(unsigned int)arg2 withScene:(unsigned int)arg3;
- (id)identiferForUrl:(id)arg1;
- (void)dealloc;
- (id)initWithId:(id)arg1 jvm:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


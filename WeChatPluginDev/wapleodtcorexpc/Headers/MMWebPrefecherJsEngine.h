//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSVirtualMachine, MMPrefetcherMainJSContext, MMWebJsBasePkgInfo, NSDictionary, NSMutableDictionary;

@interface MMWebPrefecherJsEngine
{
    JSVirtualMachine *_jsVM;
    MMPrefetcherMainJSContext *_mainContext;
    MMWebJsBasePkgInfo *_basePkgInfo;
    NSMutableDictionary *_dicModuleKeyJSContexts;
    NSDictionary *_configInfo;
    NSMutableDictionary *_dictClientJsContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dictClientJsContext; // @synthesize dictClientJsContext=_dictClientJsContext;
@property(retain, nonatomic) NSDictionary *configInfo; // @synthesize configInfo=_configInfo;
@property(retain, nonatomic) NSMutableDictionary *dicModuleKeyJSContexts; // @synthesize dicModuleKeyJSContexts=_dicModuleKeyJSContexts;
@property(retain, nonatomic) MMWebJsBasePkgInfo *basePkgInfo; // @synthesize basePkgInfo=_basePkgInfo;
@property(retain, nonatomic) MMPrefetcherMainJSContext *mainContext; // @synthesize mainContext=_mainContext;
@property(retain, nonatomic) JSVirtualMachine *jsVM; // @synthesize jsVM=_jsVM;
- (void)dealloc;
- (void)tryAddClientContext:(id)arg1 config:(id)arg2 bizPkgInfo:(id)arg3;
- (void)dispatchEventWithConfig:(id)arg1 contextType:(id)arg2 event:(id)arg3 extraData:(id)arg4;
- (void)dispatchEventToAdContext:(id)arg1 extraData:(id)arg2;
- (id)invokeWithConfig:(id)arg1 contextType:(id)arg2 func:(id)arg3 params:(id)arg4;
- (id)getClientContextIdWithType:(id)arg1 domian:(id)arg2 path:(id)arg3 appId:(id)arg4;
- (void)setupContext:(id)arg1 metaInfo:(id)arg2 moduleName:(id)arg3 pkgInfo:(id)arg4;
- (void)tryAddPrefetcherClientJsClientContext:(id)arg1 bizPkgInfo:(id)arg2;
- (void)tryAddManifestClientJsClientContext:(id)arg1 bizPkgInfo:(id)arg2;
- (id)prefetchResArrForUrl:(id)arg1 config:(id)arg2 bizPkgInfo:(id)arg3;
- (id)identiferForUrl:(id)arg1 config:(id)arg2 bizPkgInfo:(id)arg3;
- (_Bool)shouldWaitPrefetchNotify:(id)arg1 config:(id)arg2 extInfo:(id)arg3;
- (_Bool)shouldFetchContent:(id)arg1 config:(id)arg2 extInfo:(id)arg3;
- (unsigned int)getFetchPkgType:(id)arg1 config:(id)arg2 extInfo:(id)arg3;
- (_Bool)shouldPrefetch:(id)arg1 config:(id)arg2 extInfo:(id)arg3 bizPkgInfo:(id)arg4;
- (void)initMainContext;
- (id)initWithBasePkgInfo:(id)arg1;

@end


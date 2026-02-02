//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface JSC2CodeCacheMgr
{
    _Bool _shouldSampleLargeReport;
    NSObject<OS_dispatch_queue> *_generatorQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *generatorQueue; // @synthesize generatorQueue=_generatorQueue;
@property(nonatomic) _Bool shouldSampleLargeReport; // @synthesize shouldSampleLargeReport=_shouldSampleLargeReport;
- (void)reportErrorOnCodeCacheValidationWithErrCode:(long long)arg1;
- (void)reportCodeCacheApplySuccessIfNeededWithCodeCacheSource:(id)arg1 codeCacheVersion:(unsigned int)arg2 setupCostTimeInUS:(unsigned int)arg3 evaluateCostTimeInUS:(unsigned int)arg4 strSourceURL:(id)arg5;
- (void)reportCodeCacheGenerateWithScript:(id)arg1 isSuccess:(_Bool)arg2 costTime:(unsigned int)arg3 cacheSize:(unsigned long long)arg4;
- (void)createOrValidateCodeCacheWithUsingCodeCache:(_Bool)arg1 script:(id)arg2 sourceURL:(id)arg3 codeCacheSource:(id)arg4 name:(id)arg5 cachePath:(id)arg6;
- (void)createCodeCacheIfNeededForScript:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)scriptForCacheWrap:(id)arg1 vm:(id)arg2;
- (void)validationCodeCacheForJSScript:(id)arg1 sourceURL:(id)arg2 codeCacheSource:(id)arg3 cachePath:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


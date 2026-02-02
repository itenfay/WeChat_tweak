//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSVirtualMachine, MMClientJsApiHandler, MMPrefetcherClientADJsApiHandler, MMPrefetcherClientJSContextConfig, MMPrefetcherClientJsApiHandler, MMWebJsBasePkgInfo, NSString;

@interface MMPrefetcherClientJSContext
{
    CDUnknownBlockType _callback;
    MMClientJsApiHandler *_clientJsApiHandler;
    MMPrefetcherClientJsApiHandler *_clientPrefetcherJsApiHandler;
    MMPrefetcherClientADJsApiHandler *_clientPrefetcherAdJsApiHandler;
    MMPrefetcherClientJSContextConfig *_config;
    JSVirtualMachine *_jsVM;
    MMWebJsBasePkgInfo *_bizPkgInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebJsBasePkgInfo *bizPkgInfo; // @synthesize bizPkgInfo=_bizPkgInfo;
@property(retain, nonatomic) JSVirtualMachine *jsVM; // @synthesize jsVM=_jsVM;
@property(retain, nonatomic) MMPrefetcherClientJSContextConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) MMPrefetcherClientADJsApiHandler *clientPrefetcherAdJsApiHandler; // @synthesize clientPrefetcherAdJsApiHandler=_clientPrefetcherAdJsApiHandler;
@property(retain, nonatomic) MMPrefetcherClientJsApiHandler *clientPrefetcherJsApiHandler; // @synthesize clientPrefetcherJsApiHandler=_clientPrefetcherJsApiHandler;
@property(retain, nonatomic) MMClientJsApiHandler *clientJsApiHandler; // @synthesize clientJsApiHandler=_clientJsApiHandler;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) NSString *clientContextId;
- (void)internalInit;
- (id)initWithConfig:(id)arg1 jvm:(id)arg2 bizPkgInfo:(id)arg3;

@end


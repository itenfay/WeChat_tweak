//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class JSContext, MBJSCRuntime, NSMutableDictionary, NSThread;

@interface MBJSCJSBridgeImpl : NSObject
{
    MBJSCRuntime *_runtime;
    JSContext *_context;
    void *_jsbridge;
    NSMutableDictionary *_dicHandlers;
    long long _handlerId;
    NSThread *_thread;
    struct HolderBase *_scriptState;
    unsigned long long _extJsApiCallbackId;
    NSMutableDictionary *_extJsApiCallbackResults;
    NSMutableDictionary *_extJsApiAsyncCallbacks;
    NSMutableDictionary *_onEventCallbacksDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *onEventCallbacksDict; // @synthesize onEventCallbacksDict=_onEventCallbacksDict;
@property(retain, nonatomic) NSMutableDictionary *extJsApiAsyncCallbacks; // @synthesize extJsApiAsyncCallbacks=_extJsApiAsyncCallbacks;
@property(retain, nonatomic) NSMutableDictionary *extJsApiCallbackResults; // @synthesize extJsApiCallbackResults=_extJsApiCallbackResults;
@property(nonatomic) unsigned long long extJsApiCallbackId; // @synthesize extJsApiCallbackId=_extJsApiCallbackId;
@property(nonatomic) struct HolderBase *scriptState; // @synthesize scriptState=_scriptState;
@property __weak NSThread *thread; // @synthesize thread=_thread;
@property(nonatomic) long long handlerId; // @synthesize handlerId=_handlerId;
@property(retain, nonatomic) NSMutableDictionary *dicHandlers; // @synthesize dicHandlers=_dicHandlers;
@property(nonatomic) void *jsbridge; // @synthesize jsbridge=_jsbridge;
@property(readonly, nonatomic) __weak JSContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) __weak MBJSCRuntime *runtime; // @synthesize runtime=_runtime;
- (void)endWithResult:(unsigned long long)arg1 result:(id)arg2;
- (void)onEventFinish:(id)arg1 param:(id)arg2;
- (void)on:(id)arg1 callback:(struct OpaqueJSValue *)arg2;
- (id)invoke:(id)arg1 params:(struct OpaqueJSValue *)arg2 callback:(struct OpaqueJSValue *)arg3 privateArgs:(struct OpaqueJSValue *)arg4 exceptionState:(void *)arg5;
- (void)dealloc;
- (void)releaseContext;
- (id)initWithRuntime:(id)arg1;

@end


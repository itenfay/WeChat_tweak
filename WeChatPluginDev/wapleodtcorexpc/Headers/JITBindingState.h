//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class JITRuntime, JSContext;

@interface JITBindingState : NSObject
{
    int _instanceId;
    JSContext *_context;
    struct HolderBase *_scriptState;
    JITRuntime *_runtime;
    struct OpaqueJSValue *_reflectConstructFunc;
    struct OpaqueJSValue *_promiseConstructor;
    void *_instance2idWeakMap;
    struct OpaqueJSValue *_setBindingIdFunc;
    struct OpaqueJSValue *_getBindingIdFunc;
    void *_id2InstanceMap;
    struct OpaqueJSValue *_setBindingObjFunc;
    struct OpaqueJSValue *_getBindingObjFunc;
    struct OpaqueJSValue *_deleteBindingObjFunc;
}

- (void).cxx_destruct;
@property(nonatomic) struct OpaqueJSValue *deleteBindingObjFunc; // @synthesize deleteBindingObjFunc=_deleteBindingObjFunc;
@property(nonatomic) struct OpaqueJSValue *getBindingObjFunc; // @synthesize getBindingObjFunc=_getBindingObjFunc;
@property(nonatomic) struct OpaqueJSValue *setBindingObjFunc; // @synthesize setBindingObjFunc=_setBindingObjFunc;
@property(nonatomic) void *id2InstanceMap; // @synthesize id2InstanceMap=_id2InstanceMap;
@property(nonatomic) struct OpaqueJSValue *getBindingIdFunc; // @synthesize getBindingIdFunc=_getBindingIdFunc;
@property(nonatomic) struct OpaqueJSValue *setBindingIdFunc; // @synthesize setBindingIdFunc=_setBindingIdFunc;
@property(nonatomic) void *instance2idWeakMap; // @synthesize instance2idWeakMap=_instance2idWeakMap;
@property(nonatomic) int instanceId; // @synthesize instanceId=_instanceId;
@property(nonatomic) struct OpaqueJSValue *promiseConstructor; // @synthesize promiseConstructor=_promiseConstructor;
@property(nonatomic) struct OpaqueJSValue *reflectConstructFunc; // @synthesize reflectConstructFunc=_reflectConstructFunc;
@property(nonatomic) __weak JITRuntime *runtime; // @synthesize runtime=_runtime;
@property(nonatomic) struct HolderBase *scriptState; // @synthesize scriptState=_scriptState;
@property(retain, nonatomic) JSContext *context; // @synthesize context=_context;
- (_Bool)isPromise:(struct OpaqueJSValue *)arg1;
- (id)handleBindingCmdCall:(struct OpaqueJSValue *)arg1 funcName:(id)arg2 args:(id)arg3 meta:(id)arg4 extra:(id)arg5;
- (id)handleBindingCmdGet:(struct OpaqueJSValue *)arg1 propName:(id)arg2 meta:(id)arg3 extra:(id)arg4;
- (id)handleBindingCmdSet:(struct OpaqueJSValue *)arg1 propName:(id)arg2 newValue:(id)arg3 meta:(id)arg4 extra:(id)arg5;
- (id)handleBindingCmdDel:(int)arg1 meta:(id)arg2 extra:(id)arg3;
- (id)handleBindingCmdNew:(id)arg1 args:(id)arg2 meta:(id)arg3 extra:(id)arg4;
- (id)handleBindingCmd:(long long)arg1 target:(id)arg2 funcName:(id)arg3 args:(id)arg4 extra:(id)arg5;
- (id)handleJITBindingCall:(id)arg1;
- (void)releaseContext;
- (void)setupContext;
- (void)dealloc;
- (id)initWithRuntime:(id)arg1;
- (id)handlePromise:(struct OpaqueJSValue *)arg1 responseType:(long long)arg2;
- (id)convertNSObjectToJSValue:(id)arg1 responseType:(long long)arg2;
- (id)convertNSObjectToJSValueRecursively:(id)arg1 responseType:(long long)arg2;
- (id)convertJSValueToNSObject:(struct OpaqueJSValue *)arg1 hasNestedBuffer:(_Bool *)arg2 responseType:(long long)arg3;
- (id)convertJSValueToNSObjectRecursively:(struct OpaqueJSValue *)arg1 hasNestedBuffer:(_Bool *)arg2 responseType:(long long)arg3;
- (long long)getResponseTypeFromExtraInfo:(id)arg1;
- (id)getBindingMetaFromWrappedObject:(id)arg1;
- (long long)getBindingTypeFromWrappedObject:(id)arg1;
- (int)getBindingIdFromWrappedObject:(id)arg1;
- (int)getBindingIdFromWrappedObject:(id)arg1 expectedType:(long long)arg2;
- (struct OpaqueJSValue *)constructJsObject:(struct OpaqueJSValue *)arg1 args:(struct OpaqueJSValue *)arg2;
- (struct OpaqueJSValue *)constructJsObjectWithClassName:(const char *)arg1 args:(struct OpaqueJSValue *)arg2;
- (struct OpaqueJSValue *)unpackPromise:(int)arg1;
- (id)packPromise:(struct OpaqueJSValue *)arg1;
- (int)getPromiseId:(id)arg1;
- (struct OpaqueJSValue *)unpackFunction:(int)arg1;
- (id)packFunction:(struct OpaqueJSValue *)arg1;
- (int)getFunctionId:(id)arg1;
- (struct OpaqueJSValue *)unpackBindingObject:(int)arg1;
- (id)packBindingObject:(struct OpaqueJSValue *)arg1;
- (int)getBindingObjectId:(id)arg1;
- (struct OpaqueJSValue *)unpackObject:(int)arg1;
- (id)packObject:(struct OpaqueJSValue *)arg1 type:(long long)arg2 meta:(id)arg3;
- (void)deleteBindingObjById:(int)arg1;
- (void)deleteBindingObj:(struct OpaqueJSValue *)arg1;
- (struct OpaqueJSValue *)getBindingObjFromBindingId:(int)arg1;
- (int)getBindingIdFromBindingObj:(struct OpaqueJSValue *)arg1;
- (id)packWrapperObject:(int)arg1 type:(long long)arg2 meta:(id)arg3;
- (id)packReturnWithErrCode:(long long)arg1 errmsg:(id)arg2;
- (id)packReturnWithOk:(id)arg1 hasNestedBuffers:(_Bool)arg2;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAEJBindingWebSocketTask
{
    NSString *taskId;
    unsigned int workerId;
}

+ (void *)_ptr_to_set_onclose;
+ (void *)_ptr_to_get_onclose;
+ (void *)_ptr_to_set_onerror;
+ (void *)_ptr_to_get_onerror;
+ (void *)_ptr_to_set_onopen;
+ (void *)_ptr_to_get_onopen;
+ (void *)_ptr_to_set_onmessage;
+ (void *)_ptr_to_get_onmessage;
+ (void *)_ptr_to_func_close;
+ (void *)_ptr_to_func_send;
+ (void *)_ptr_to_func_connect;
- (void)onError:(id)arg1 code:(unsigned int)arg2;
- (void)onClose:(id)arg1 code:(unsigned int)arg2;
- (void)onMessageReceived:(id)arg1;
- (void)onHeaderReceived:(id)arg1 profile:(id)arg2;
- (struct OpaqueJSValue *)_func_close:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_send:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_connect:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (void)createWithJSObject:(struct OpaqueJSValue *)arg1 scriptView:(id)arg2;
- (id)initWithContext:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;

@end


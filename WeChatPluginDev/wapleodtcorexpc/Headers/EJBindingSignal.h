//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface EJBindingSignal
{
    struct OpaqueJSValue *_result;
    _Bool _hasData;
}

+ (void *)_ptr_to_func_notify;
+ (void *)_ptr_to_func_wait;
- (struct OpaqueJSValue *)_func_notify:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_wait:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (id)initWithContext:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAEJBindingEvent
{
    NSString *type;
    struct OpaqueJSValue *jsTarget;
    struct OpaqueJSValue *jsTimestamp;
}

+ (void *)_ptr_to_func_stopPropagation;
+ (void *)_ptr_to_func_preventDefault;
+ (void *)_ptr_to_get_timestamp;
+ (void *)_ptr_to_get_type;
+ (void *)_ptr_to_get_currentTarget;
+ (void *)_ptr_to_get_target;
+ (struct OpaqueJSValue *)createJSObjectWithContext:(struct OpaqueJSContext *)arg1 scriptView:(id)arg2 type:(id)arg3 target:(struct OpaqueJSValue *)arg4;
- (struct OpaqueJSValue *)_func_stopPropagation:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_preventDefault:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_get_timestamp:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_type:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_currentTarget:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_target:(struct OpaqueJSContext *)arg1;
- (void)dealloc;

@end


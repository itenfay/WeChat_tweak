//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAEJCanvasGradient;

@interface WAEJBindingCanvasGradient
{
    WAEJCanvasGradient *gradient;
}

+ (void *)_ptr_to_get___type;
+ (void *)_ptr_to_get_instance;
+ (id)gradientFromInstance:(unsigned long long)arg1;
+ (void *)_ptr_to_func_addColorStop;
+ (id)gradientFromJSValue:(struct OpaqueJSValue *)arg1;
+ (struct OpaqueJSValue *)createJSObjectWithContext:(struct OpaqueJSContext *)arg1 scriptView:(id)arg2 gradient:(id)arg3;
- (struct OpaqueJSValue *)_get___type:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_instance:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_func_addColorStop:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (void)dealloc;

@end


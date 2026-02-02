//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAEJBindingWebGLShaderPrecisionFormat
{
    int rangeMin;
    int rangeMax;
    int precision;
}

+ (void *)_ptr_to_get___id;
+ (struct OpaqueJSValue *)createJSObjectWithContext:(struct OpaqueJSContext *)arg1 scriptView:(id)arg2 rangeMin:(int)arg3 rangeMax:(int)arg4 precision:(int)arg5;
+ (void *)_ptr_to_get_precision;
+ (void *)_ptr_to_get_rangeMax;
+ (void *)_ptr_to_get_rangeMin;
- (struct OpaqueJSValue *)_get___id:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_precision:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_rangeMax:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_rangeMin:(struct OpaqueJSContext *)arg1;
- (id)initWithRangeMin:(int)arg1 rangeMax:(int)arg2 precision:(int)arg3;

@end


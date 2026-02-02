//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAEJBindingWebGLActiveInfo
{
    int size;
    unsigned int type;
    NSString *name;
}

+ (struct OpaqueJSValue *)createJSObjectWithContext:(struct OpaqueJSContext *)arg1 scriptView:(id)arg2 size:(int)arg3 type:(unsigned int)arg4 name:(id)arg5;
+ (void *)_ptr_to_get_name;
+ (void *)_ptr_to_get_type;
+ (void *)_ptr_to_get_size;
- (struct OpaqueJSValue *)_get_name:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_type:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_size:(struct OpaqueJSContext *)arg1;
- (void)dealloc;
- (id)initWithSize:(int)arg1 type:(unsigned int)arg2 name:(id)arg3;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAEJBindingFileReader
{
    NSString *encoding;
    unsigned int workerId;
}

+ (void *)_ptr_to_set_onerror;
+ (void *)_ptr_to_get_onerror;
+ (void *)_ptr_to_set_onread;
+ (void *)_ptr_to_get_onread;
+ (id)stringFromByte:(unsigned char)arg1;
+ (id)hexStringFromData:(id)arg1;
+ (struct OpaqueJSValue *)makeReadFileResult:(struct OpaqueJSContext *)arg1 data:(id)arg2 encoding:(id)arg3;
+ (void *)_ptr_to_func_read;
- (void)readFileComplete:(id)arg1 error:(id)arg2;
- (struct OpaqueJSValue *)_func_read:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (id)initWithContext:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;

@end


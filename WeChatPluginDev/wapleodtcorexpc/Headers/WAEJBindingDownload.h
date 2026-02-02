//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAEJBindingDownload
{
    NSString *taskId;
    unsigned int workerId;
}

+ (void *)_ptr_to_set_onfail;
+ (void *)_ptr_to_get_onfail;
+ (void *)_ptr_to_set_onsuccess;
+ (void *)_ptr_to_get_onsuccess;
+ (void *)_ptr_to_set_onprogress;
+ (void *)_ptr_to_get_onprogress;
+ (void *)_ptr_to_set_onheader;
+ (void *)_ptr_to_get_onheader;
+ (void *)_ptr_to_func_abort;
+ (void *)_ptr_to_func_start;
- (void)onDownloadError:(id)arg1 errNo:(id)arg2;
- (void)onDownloadComplete:(id)arg1 filePath:(id)arg2 status:(unsigned long long)arg3 dataLength:(long long)arg4 profile:(id)arg5;
- (void)onHeaderReceived:(id)arg1;
- (void)onProgress:(float)arg1 written:(long long)arg2 total:(long long)arg3;
- (struct OpaqueJSValue *)_func_abort:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_start:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (id)initWithContext:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;

@end


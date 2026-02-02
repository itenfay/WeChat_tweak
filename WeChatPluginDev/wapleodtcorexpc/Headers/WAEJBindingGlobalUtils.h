//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAEJBindingGlobalUtils
{
    NSString *deviceName;
    int audioSession;
    struct OpaqueJSString *jsAllObjectsIdentifier;
    char *_commandString;
    unsigned long long _commandLength;
    _Bool _newInstance;
}

+ (void *)_ptr_to_func_getSystemInfo;
+ (void *)_ptr_to_set_onbindingobjectdestruct;
+ (void *)_ptr_to_get_onbindingobjectdestruct;
+ (void *)_ptr_to_func_createSignal;
+ (void *)_ptr_to_func_decodeUint64Array;
+ (void *)_ptr_to_func_decodeVarintArray;
+ (void *)_ptr_to_func_readFileSync;
+ (void *)_ptr_to_func_batchRender;
+ (void *)_ptr_to_func_getProfileResult;
+ (void *)_ptr_to_func_stopProfile;
+ (void *)_ptr_to_func_startProfile;
+ (void *)_ptr_to_func_decodeArrayBuffer;
+ (void *)_ptr_to_func_encodeArrayBuffer;
+ (void *)_ptr_to_set_audioSession;
+ (void *)_ptr_to_get_audioSession;
+ (void *)_ptr_to_get_otherAudioPlaying;
+ (void *)_ptr_to_set_allowSleepMode;
+ (void *)_ptr_to_get_allowSleepMode;
+ (void *)_ptr_to_get_onLine;
+ (void *)_ptr_to_get_orientation;
+ (void *)_ptr_to_get_appVersion;
+ (void *)_ptr_to_get_language;
+ (void *)_ptr_to_get_platform;
+ (void *)_ptr_to_get_userAgent;
+ (void *)_ptr_to_get_screenHeight;
+ (void *)_ptr_to_get_screenWidth;
+ (void *)_ptr_to_get_devicePixelRatio;
+ (void *)_ptr_to_func_getTextLineHeight;
+ (void *)_ptr_to_func_recordFrame;
+ (void *)_ptr_to_func_performanceNowUs;
+ (void *)_ptr_to_func_performanceNow;
+ (void *)_ptr_to_func_clearInterval;
+ (void *)_ptr_to_func_clearTimeout;
+ (void *)_ptr_to_func_setInterval;
+ (void *)_ptr_to_func_setTimeout;
+ (void *)_ptr_to_func_setPreferredFramesPerSecond;
+ (void *)_ptr_to_func_cancelAnimationFrame;
+ (void *)_ptr_to_func_requestAnimationFrame;
+ (void *)_ptr_to_func_loadFont;
+ (void *)_ptr_to_func_include;
+ (void *)_ptr_to_func_load;
+ (void *)_ptr_to_func_log;
- (struct OpaqueJSValue *)_func_getSystemInfo:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_createSignal:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_decodeUint64Array:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_decodeVarintArray:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_readFileSync:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_batchRender:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (void)triggerDestructBindingObjectEvent:(unsigned long long)arg1;
- (struct OpaqueJSValue *)_func_getProfileResult:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_stopProfile:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_startProfile:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_decodeArrayBuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_encodeArrayBuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (id)stringWithEncodingData:(id)arg1 encoding:(id)arg2;
- (id)dataWithEncodingString:(id)arg1 encoding:(id)arg2;
@property(nonatomic) int audioSession;
- (void)_set_audioSession:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_audioSession:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_otherAudioPlaying:(struct OpaqueJSContext *)arg1;
- (void)_set_allowSleepMode:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_allowSleepMode:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_onLine:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_orientation:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_appVersion:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_language:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_platform:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_userAgent:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_screenHeight:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_screenWidth:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_devicePixelRatio:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_func_getTextLineHeight:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_recordFrame:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_performanceNowUs:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_performanceNow:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_clearInterval:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_clearTimeout:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_setInterval:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_setTimeout:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_setPreferredFramesPerSecond:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_cancelAnimationFrame:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_requestAnimationFrame:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_loadFont:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_include:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_load:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_log:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (id)deviceName;
- (void)prepareGarbageCollection;
- (void)dealloc;
- (void)createWithJSObject:(struct OpaqueJSValue *)arg1 scriptView:(id)arg2;
- (id)initWithContext:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;

@end


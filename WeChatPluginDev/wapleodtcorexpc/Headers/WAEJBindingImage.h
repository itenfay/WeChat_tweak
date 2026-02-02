//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSOperation, NSString, NSThread, WAEJTexture;

@interface WAEJBindingImage
{
    WAEJTexture *texture;
    NSString *path;
    _Bool loading;
    NSOperation *loadCallback;
    _Bool originPixels;
    NSMutableArray *_paths;
    _Bool _newInstance;
    NSThread *_thread;
    double _resize_width;
    double _resize_height;
    double _rescale;
    unsigned int bindingScreenId;
    _Bool _needCheckQueue;
}

+ (id)_const_tagName;
+ (id)_const_nodeName;
+ (void *)_ptr_to_get_bindingScreen;
+ (void *)_ptr_to_set_bindingScreen;
+ (void *)_ptr_to_get_premultiplyAlpha;
+ (void *)_ptr_to_set_premultiplyAlpha;
+ (void *)_ptr_to_get_complete;
+ (void *)_ptr_to_get_naturalHeight;
+ (void *)_ptr_to_get_height;
+ (void *)_ptr_to_get_naturalWidth;
+ (void *)_ptr_to_get_width;
+ (void *)_ptr_to_func___id;
+ (void *)_ptr_to_func_setSrc;
+ (void *)_ptr_to_set_src;
+ (void *)_ptr_to_get_scale;
+ (void *)_ptr_to_set_scale;
+ (void *)_ptr_to_get_instance;
+ (void *)_ptr_to_func_getSrc;
+ (void *)_ptr_to_get_src;
+ (void *)_ptr_to_func___uid;
@property(nonatomic) _Bool needCheckQueue; // @synthesize needCheckQueue=_needCheckQueue;
- (struct OpaqueJSValue *)_get_bindingScreen:(struct OpaqueJSContext *)arg1;
- (void)_set_bindingScreen:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_premultiplyAlpha:(struct OpaqueJSContext *)arg1;
- (void)_set_premultiplyAlpha:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_complete:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_naturalHeight:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_height:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)getHeight:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_naturalWidth:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_width:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)getWidth:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_func___id:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_setSrc:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (void)_set_src:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_scale:(struct OpaqueJSContext *)arg1;
- (void)_set_scale:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (void)setImageSrc:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2;
- (void)checkQueue;
@property(readonly, nonatomic) WAEJTexture *texture; // @synthesize texture;
- (struct OpaqueJSValue *)_get_instance:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_func_getSrc:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_get_src:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_func___uid:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (void)setTexture:(id)arg1 path:(id)arg2;
- (void)triggerEvent:(id)arg1;
- (void)internalEndLoad;
- (void)endLoad;
- (void)internalEnterForeground;
- (void)onEnterForeground;
- (void)dealloc;
- (void)prepareGarbageCollection;
- (void)beginLoad;
- (void)createWithJSObject:(struct OpaqueJSValue *)arg1 scriptView:(id)arg2;
- (id)initWithContext:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


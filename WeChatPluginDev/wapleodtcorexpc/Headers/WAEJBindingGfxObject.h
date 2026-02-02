//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAEJBindingGfx;

@interface WAEJBindingGfxObject
{
    struct _sg_state_t *_sg;
    WAEJBindingGfx *_gfx;
    _Bool _invalid;
    unsigned int _objectId;
}

+ (void *)_ptr_to_func_toJSON;
+ (void *)_ptr_to_func_destroy;
+ (struct OpaqueJSValue *)createJSObjectWithContext:(struct OpaqueJSContext *)arg1 gfx:(id)arg2 objectId:(unsigned int)arg3 sg_state:(struct _sg_state_t *)arg4;
- (struct OpaqueJSValue *)_func_toJSON:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_destroy:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (void)destroy;
- (void)dealloc;
- (id)initWithId:(id)arg1 objectId:(unsigned int)arg2 sg_state:(struct _sg_state_t *)arg3;

@end


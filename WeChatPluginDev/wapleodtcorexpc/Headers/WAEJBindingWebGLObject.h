//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAEJBindingCanvasContextWebGLBase;

@interface WAEJBindingWebGLObject
{
    unsigned int index;
    WAEJBindingCanvasContextWebGLBase *webglContext;
}

+ (void *)_ptr_to_func___id;
+ (struct OpaqueJSValue *)createJSObjectWithContext:(struct OpaqueJSContext *)arg1 scriptView:(id)arg2 webglContext:(id)arg3 index:(unsigned int)arg4;
+ (id)webGLObjectFromJSValue:(struct OpaqueJSValue *)arg1;
+ (int)indexFromJSValue:(struct OpaqueJSValue *)arg1;
- (struct OpaqueJSValue *)_func___id:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (void)dealloc;
- (unsigned int)getIndex;
- (void)invalidate;
- (id)initWithWebGLContext:(id)arg1 index:(unsigned int)arg2;

@end


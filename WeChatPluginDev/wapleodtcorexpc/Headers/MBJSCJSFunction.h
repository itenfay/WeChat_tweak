//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSContext, MBJSCRuntime;

@interface MBJSCJSFunction
{
    JSContext *_context;
    MBJSCRuntime *_runtime;
    void *_callback;
}

- (void).cxx_destruct;
@property(nonatomic) void *callback; // @synthesize callback=_callback;
@property(nonatomic) __weak MBJSCRuntime *runtime; // @synthesize runtime=_runtime;
@property(nonatomic) __weak JSContext *context; // @synthesize context=_context;
- (void)dealloc;
- (void)invokeWithDict:(id)arg1;
- (void)invoke:(id)arg1;

@end


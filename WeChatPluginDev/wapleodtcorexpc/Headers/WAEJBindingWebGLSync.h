//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAEJBindingWebGLSync
{
    struct __GLsync *sync;
}

+ (struct __GLsync *)syncFromJSValue:(struct OpaqueJSValue *)arg1;
+ (struct OpaqueJSValue *)createJSObjectWithContext:(struct OpaqueJSContext *)arg1 scriptView:(id)arg2 webglContext:(id)arg3 sync:(struct __GLsync *)arg4;
- (void)invalidate;
- (id)initWithWebGLContext:(id)arg1 sync:(struct __GLsync *)arg2;

@end


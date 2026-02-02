//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAEJBindingCanvasContextWebGLBase;

@interface WAEJBindingWebGLExtension
{
    WAEJBindingCanvasContextWebGLBase *webglContext;
}

+ (struct OpaqueJSValue *)createJSObjectWithContext:(struct OpaqueJSContext *)arg1 scriptView:(id)arg2 webglContext:(id)arg3;
- (void)onEnable;
- (void)dealloc;
- (id)initWithWebGLContext:(id)arg1;

@end


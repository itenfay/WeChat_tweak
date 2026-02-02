//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class JSContext;

@interface JSCDebugger : NSObject
{
    JSContext *_context;
}

+ (void)JSCDebuggerQueueTaskOnGlobalQueue:(CDUnknownBlockType)arg1;
+ (struct __CFString *)JSCDebuggerRunLoopMode;
+ (_Bool)isSupportedDebugger;
+ (id)debuggerWithContext:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak JSContext *context; // @synthesize context=_context;
- (CDUnknownBlockType)setupConnectionAdapter:(void *)arg1 disconnectBlock:(id *)arg2;
- (void)removeDebuggerWrapper;
- (void)setupJSCConnectionIfNeeded:(_Bool)arg1;
- (id)debuggerWrapperFromContext;
- (void)getMemoryConsume:(CDUnknownBlockType)arg1;
- (void)disconnectToJSCDebugger;
- (void)sendMessageToJSCDebugger:(id)arg1;
- (_Bool)setupJSCDebuggerConnection:(CDUnknownBlockType)arg1 needFilter:(_Bool)arg2;
- (_Bool)setupJSCDebuggerConnection:(CDUnknownBlockType)arg1;

@end


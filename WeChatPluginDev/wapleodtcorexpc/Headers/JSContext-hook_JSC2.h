//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <JavaScriptCore/JSContext.h>

@interface JSContext (hook_JSC2)
+ (id)jsc2_contextWithJSGlobalContextRef:(struct OpaqueJSContext *)arg1;
+ (id)jsc2_currentArguments;
+ (id)jsc2_currentThis;
+ (id)jsc2_currentCallee;
+ (id)jsc2_currentContext;
+ (id)jsc2_alloc;
@end


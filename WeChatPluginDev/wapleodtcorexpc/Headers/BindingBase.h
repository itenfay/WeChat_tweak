//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BindingBase : NSObject
{
    struct OpaqueJSContext *__ctx;
    struct OpaqueJSValue *__obj;
}

- (void)initMethods;
- (id)initWithContext:(struct OpaqueJSContext *)arg1 name:(id)arg2 parent:(struct OpaqueJSValue *)arg3;

@end


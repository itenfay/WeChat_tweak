//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAJSBindingUtilsAdaptor : NSObject
{
    struct OpaqueJSContext *_jscontext;
}

- (void)releaseContext;
- (id)initWithJSContext:(struct OpaqueJSContext *)arg1 parent:(struct OpaqueJSValue *)arg2;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface PhysxAdaptor : NSObject
{
    struct OpaqueJSContext *_jscontext;
    struct Phys3DScriptState *_phys3dScriptState;
}

- (void)dealloc;
- (void)releaseContext;
- (void)setLogDelegate:(id)arg1;
- (id)initWithJSContext:(struct OpaqueJSContext *)arg1 parent:(struct OpaqueJSValue *)arg2;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol WAMagicARAdaptorDelegate;

@interface WAMagicARAdaptor : NSObject
{
    struct OpaqueJSContext *_jscontext;
    void *_runtime;
    id <WAMagicARAdaptorDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)releaseContext;
- (struct __CVBuffer *)getCurCVPixelBuffer;
- (id)initWithJSContext:(struct OpaqueJSContext *)arg1 parent:(struct OpaqueJSValue *)arg2 delegate:(id)arg3;
- (void)dealloc;

@end


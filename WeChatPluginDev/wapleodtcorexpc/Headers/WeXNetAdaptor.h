//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol WeXNetAdaptorDelegate><WeXNetLogDelegate;

@interface WeXNetAdaptor : NSObject
{
    struct OpaqueJSContext *_jscontext;
    struct unique_ptr<mm::JSHolder<OpaqueJSValue *>, std::default_delete<mm::JSHolder<OpaqueJSValue *>>> jsInferenceHolder;
    struct shared_ptr<WeXNet::MNXNetRuntime> mRuntime;
    id <WeXNetAdaptorDelegate><WeXNetLogDelegate> weakDelegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)releaseContext;
- (id)initWithJSContext:(struct OpaqueJSContext *)arg1 parent:(struct OpaqueJSValue *)arg2 delegate:(id)arg3;
- (void)log:(int)arg1 message:(const void *)arg2;
- (void)dealloc;

@end


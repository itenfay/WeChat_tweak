//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CanvasAdaptor : NSObject
{
    shared_ptr_013fd618 _app;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (shared_ptr_bf7a578a)GetDecodeCache;
- (void)CheckAndPost:(function_ffe40f9b)arg1;
- (void)SetAppTag:(id)arg1;
- (id)AppTag;
- (struct HolderBase *)GetHolder;
- (void)ReleaseContext;
- (shared_ptr_34631cd5)GetResourceLoader;
- (void)SetResourceLoaderDelegate:(id)arg1;
- (void)RemoveCanvas:(int)arg1;
- (shared_ptr_3299e206)GetCanvas:(int)arg1;
- (void)AddCanvas:(shared_ptr_3299e206)arg1;
- (shared_ptr_0ffddd04)CreateCanvasViewDelegate;
- (shared_ptr_013fd618)getApp;
- (id)initWithThread:(id)arg1 context:(struct OpaqueJSContext *)arg2 parent:(struct OpaqueJSValue *)arg3 tag:(id)arg4;

@end


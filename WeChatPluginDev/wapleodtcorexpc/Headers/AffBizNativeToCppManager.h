//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ConcurrentDictionary;

@interface AffBizNativeToCppManager : NSObject
{
    struct weak_ptr<zidl::ZClientInvoker> client_invoker_;
    ConcurrentDictionary *requestAdFetchingWithResortBlockDict;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)requestAdFetchingWithResortAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestAdFetchingWithResortAsync:(CDUnknownBlockType)arg1;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)zidlBuild;
- (shared_ptr_91287a9c)getClientInvoker;
- (void)attachClientInvoker:(const void *)arg1;

@end


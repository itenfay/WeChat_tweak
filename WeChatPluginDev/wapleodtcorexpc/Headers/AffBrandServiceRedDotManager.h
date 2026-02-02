//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AffBrandServiceRedDotManager : NSObject
{
    struct weak_ptr<zidl::ZClientInvoker> client_invoker_;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getCurrentNotiMsgRedDotInfo;
- (id)getCurrentBoxRedDotInfo;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)zidlBuild;
- (shared_ptr_91287a9c)getClientInvoker;
- (void)attachClientInvoker:(const void *)arg1;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CaraNativeFinderFeatureCenter : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct CaraNativeFinderFeatureCenterCppCover cpp_cover;
    struct weak_ptr<cara::CaraNativeFinderFeatureCenterDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (int)authIconType;
- (_Bool)hasFinderAccount;
- (_Bool)wxPayAuthorization;
- (_Bool)isRealName;
- (int)postFeedCount;
- (int)fansCount;
- (id)init;
- (id)zidlObjToHolder;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_3855443d)getDispatcher;

@end


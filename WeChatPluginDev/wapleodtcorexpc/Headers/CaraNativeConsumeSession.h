//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CaraNativeConsumeSession : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct CaraNativeConsumeSessionCppCover cpp_cover;
    struct weak_ptr<cara::CaraNativeConsumeSessionDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (float)stayTimeInterval;
- (id)username;
- (id)zidlObjToHolder;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)initWithZidlImpl:(id)arg1;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_e122bb48)getDispatcher;

@end


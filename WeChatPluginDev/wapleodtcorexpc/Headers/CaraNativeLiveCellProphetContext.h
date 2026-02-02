//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CaraNativeLiveCellProphetContext : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct CaraNativeLiveCellProphetContextCppCover cpp_cover;
    struct weak_ptr<cara::CaraNativeLiveCellProphetContextDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (float)predictProbThreshold;
- (_Bool)isHomePageLoaded;
- (_Bool)isInHomePage;
- (id)zidlObjToHolder;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)initWithZidlImpl:(id)arg1;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_610a3e5a)getDispatcher;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CaraCppFinderPublishProphet : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct CaraCppFinderPublishProphetCppCover cpp_cover;
    struct weak_ptr<cara::CaraCppFinderPublishProphetDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reportThatPreload:(id)arg1 byPrediction:(const void *)arg2;
- (void)reportThatConsume:(id)arg1 isReady:(const void *)arg2;
- (void)predict:(id)arg1 context:(id)arg2 callback:(id)arg3;
- (void)reportThatExpose:(id)arg1 context:(id)arg2 isReady:(const void *)arg3;
- (id)init;
- (id)zidlObjToHolder;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_be486c35)getDispatcher;

@end


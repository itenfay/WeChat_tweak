//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CaraCppJoinLiveQualityProphet : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct CaraCppJoinLiveQualityProphetCppCover cpp_cover;
    struct weak_ptr<cara::CaraCppJoinLiveQualityProphetDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reportThatLiveRoomLag:(const void *)arg1 context:(id)arg2;
- (void)stopPredict;
- (optional_16fe3c19)getPrediction;
- (void)startPredict;
- (void)reportThatJoinLive:(const void *)arg1 context:(id)arg2;
- (id)init;
- (id)zidlObjToHolder;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_38460d65)getDispatcher;

@end


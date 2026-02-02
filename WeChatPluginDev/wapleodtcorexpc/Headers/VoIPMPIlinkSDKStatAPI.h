//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VoIPMPIlinkSDKStatAPI : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct VoIPMPIlinkSDKStatAPICppCover cpp_cover;
    struct weak_ptr<voipmp::VoIPMPIlinkSDKStatAPIDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stat:(int)arg1 info:(id)arg2;
- (void)launch;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_2c1184bf)getDispatcher;

@end


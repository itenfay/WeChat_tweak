//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC9WeAppCore22WAConcurrentJSEventMgr
{
    MISSING_TYPE *arrConcurrentWaitingEvent;
    MISSING_TYPE *arrConcurrentRunningEvent;
    MISSING_TYPE *runningEventCountByAppId;
    MISSING_TYPE *$__lazy_storage_$_wxDataMaxRequestConcurrentPerAppID;
    MISSING_TYPE *kTotalMaxRequestConcurrentCount;
}

- (void).cxx_destruct;
- (id)init;
- (void)removeConcurrentUserAccountJSEvent:(id)arg1;
- (void)addConcurrentUserAccountJSEvent:(id)arg1 forAppId:(id)arg2 param:(id)arg3;

@end


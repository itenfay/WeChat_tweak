//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTaskId, NSString;

@interface MMLivePollingFetchTask : NSObject
{
    MMLiveTaskId *_taskId;
    long long _cmdId;
    unsigned long long _interval;
    long long _lastExecuteTimeInterval;
    long long _mostEarlyStartTime;
}

+ (id)createWithTaskId:(id)arg1 cmdId:(long long)arg2 interval:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) long long mostEarlyStartTime; // @synthesize mostEarlyStartTime=_mostEarlyStartTime;
@property(nonatomic) long long lastExecuteTimeInterval; // @synthesize lastExecuteTimeInterval=_lastExecuteTimeInterval;
@property(nonatomic) unsigned long long interval; // @synthesize interval=_interval;
@property(nonatomic) long long cmdId; // @synthesize cmdId=_cmdId;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(readonly, nonatomic) long long sortId;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


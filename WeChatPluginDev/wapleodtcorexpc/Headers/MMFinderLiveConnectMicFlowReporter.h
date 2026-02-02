//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTaskId;

@interface MMFinderLiveConnectMicFlowReporter : NSObject
{
    MMLiveTaskId *_taskId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)reportRemoteUserEvent:(unsigned long long)arg1 withUserId:(id)arg2;
- (void)reportMicEndedWithUserId:(id)arg1 endType:(unsigned long long)arg2 reason:(long long)arg3 andRoleType:(unsigned long long)arg4;
- (void)reportMicEndedWithUserId:(id)arg1 endType:(unsigned long long)arg2 andRoleType:(unsigned long long)arg3;
- (void)reportAudienceMicConnectedWithUserId:(id)arg1 andRoleType:(unsigned long long)arg2;
- (void)reportAcceptAudienceMicWithUserId:(id)arg1;
- (void)reportAnchorMicConnectedWithUserId:(id)arg1 andRoleType:(unsigned long long)arg2;
- (void)reportStartAnchorMicWithUserId:(id)arg1 andOpType:(unsigned long long)arg2;
- (void)reportWithUserId:(id)arg1 opType:(unsigned long long)arg2 andOpMsg:(id)arg3;
- (id)initWithTaskId:(id)arg1;

@end


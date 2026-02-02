//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAAppStateChangedContextInfo, WAAppTask;

@interface WAAppTaskRunningStateEnterBackgroundContext
{
    WAAppTask *_task;
    unsigned long long _reason;
    long long _action;
    WAAppStateChangedContextInfo *_contextInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAAppStateChangedContextInfo *contextInfo; // @synthesize contextInfo=_contextInfo;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
@property(nonatomic) __weak WAAppTask *task; // @synthesize task=_task;
- (id)description;
- (_Bool)isCanKeepRunningWhenWhiteScreen;
- (_Bool)isForbidTriggerSuspendTimer;
- (void)backgroundReceiveBackgroundCheck;
- (void)backgroundRecoverSharedResource:(unsigned long long)arg1;
- (void)backgroundReTakeUniqueSource:(unsigned long long)arg1;
- (void)backgroundInteruptUniqueSource:(unsigned long long)arg1;

@end


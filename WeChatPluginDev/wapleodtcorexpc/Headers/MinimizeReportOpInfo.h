//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MinimizeReportOpInfo : NSObject
{
    unsigned long long _opType;
    NSString *_miniSessionId;
    NSString *_aggreSessionId;
    unsigned long long _taskIdleTime;
    unsigned long long _aggreWindowExistTime;
    unsigned long long _singleTaskExistTime;
    unsigned long long _taskType;
    long long _taskOrder;
    unsigned long long _taskForegroundTime;
    unsigned long long _taskFoldTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long taskFoldTime; // @synthesize taskFoldTime=_taskFoldTime;
@property(nonatomic) unsigned long long taskForegroundTime; // @synthesize taskForegroundTime=_taskForegroundTime;
@property(nonatomic) long long taskOrder; // @synthesize taskOrder=_taskOrder;
@property(nonatomic) unsigned long long taskType; // @synthesize taskType=_taskType;
@property(nonatomic) unsigned long long singleTaskExistTime; // @synthesize singleTaskExistTime=_singleTaskExistTime;
@property(nonatomic) unsigned long long aggreWindowExistTime; // @synthesize aggreWindowExistTime=_aggreWindowExistTime;
@property(nonatomic) unsigned long long taskIdleTime; // @synthesize taskIdleTime=_taskIdleTime;
@property(retain, nonatomic) NSString *aggreSessionId; // @synthesize aggreSessionId=_aggreSessionId;
@property(retain, nonatomic) NSString *miniSessionId; // @synthesize miniSessionId=_miniSessionId;
@property(nonatomic) unsigned long long opType; // @synthesize opType=_opType;

@end


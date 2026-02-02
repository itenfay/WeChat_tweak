//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MultiTaskPageActionInfo : NSObject
{
    _Bool _isFullScreen;
    _Bool _hasReported;
    unsigned long long _action;
    NSString *_contextId;
    unsigned long long _scene;
    unsigned long long _userAction;
    unsigned long long _taskCount;
    unsigned long long _outdateTaskCount;
    unsigned long long _duration;
    long long _operationPath;
    unsigned long long _lastStartTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasReported; // @synthesize hasReported=_hasReported;
@property(nonatomic) unsigned long long lastStartTime; // @synthesize lastStartTime=_lastStartTime;
@property(nonatomic) long long operationPath; // @synthesize operationPath=_operationPath;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long outdateTaskCount; // @synthesize outdateTaskCount=_outdateTaskCount;
@property(nonatomic) unsigned long long taskCount; // @synthesize taskCount=_taskCount;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) unsigned long long userAction; // @synthesize userAction=_userAction;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *contextId; // @synthesize contextId=_contextId;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;

@end


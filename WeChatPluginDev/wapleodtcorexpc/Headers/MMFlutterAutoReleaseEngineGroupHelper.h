//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFlutterEngineGroup;

@interface MMFlutterAutoReleaseEngineGroupHelper : NSObject
{
    MMFlutterEngineGroup *_engineGroup;
    long long _interval;
    _Bool _isNeedReleaseEngineGroup;
    CDUnknownBlockType _releaseCallback;
}

- (void).cxx_destruct;
- (void)releaseEngineGroupRecreate:(_Bool)arg1;
- (void)releaseEngineGroup;
- (void)removeDelayReleaseEngineGroup;
- (void)freeEngineGroupMemory;
- (void)delayReleaseEngineGroup;
- (id)initWithEngineGroup:(id)arg1 autoReleaseInterval:(long long)arg2 releaseEngineGroup:(_Bool)arg3 recreateEngineGroup:(_Bool)arg4 releaseCallback:(CDUnknownBlockType)arg5;

@end


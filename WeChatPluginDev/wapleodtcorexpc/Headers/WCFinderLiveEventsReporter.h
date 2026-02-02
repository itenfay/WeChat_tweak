//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTask, NSString;

@interface WCFinderLiveEventsReporter : NSObject
{
    MMFinderLiveTask *_liveTask;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak MMFinderLiveTask *liveTask; // @synthesize liveTask=_liveTask;
- (void)reportEventWithModule:(long long)arg1 eventName:(id)arg2 description:(id)arg3;
@property(readonly, nonatomic) unsigned int kvLogID;
@property(readonly, nonatomic) NSString *finderNickname;
- (void)dealloc;
- (id)initWithLiveTask:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;

@end


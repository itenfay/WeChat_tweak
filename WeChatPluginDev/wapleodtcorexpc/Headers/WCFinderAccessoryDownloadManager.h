//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, WCFinderAccessoryDownloadHeap;
@protocol OS_dispatch_queue;

@interface WCFinderAccessoryDownloadManager : NSObject
{
    _Bool _isPaused;
    WCFinderAccessoryDownloadHeap *_waittingHeap;
    NSMutableSet *_downloadTaskSet;
    NSObject<OS_dispatch_queue> *_taskSetQueue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *taskSetQueue; // @synthesize taskSetQueue=_taskSetQueue;
@property(retain, nonatomic) NSMutableSet *downloadTaskSet; // @synthesize downloadTaskSet=_downloadTaskSet;
@property(retain, nonatomic) WCFinderAccessoryDownloadHeap *waittingHeap; // @synthesize waittingHeap=_waittingHeap;
- (void)addTaskToHeap:(id)arg1;
- (void)changeDownloadTaskWithIdentifierKey:(id)arg1 toPriority:(long long)arg2;
- (void)resumeAllDownloadTasks;
- (void)pauseAllDownloadTasks;
- (void)removeAllDownloadTasks;
- (void)removeAllDownloadTasksWithGroupId:(id)arg1;
- (void)removeDownloadTaskWithIdentifierKey:(id)arg1;
- (void)addDownloadtasks:(id)arg1;
- (void)addDownloadTask:(id)arg1;
- (void)startDownloadIfNeeded;

@end


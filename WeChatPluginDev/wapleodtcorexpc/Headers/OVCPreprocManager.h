//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface OVCPreprocManager : NSObject
{
    NSArray *_tasks;
    NSMutableDictionary *_tasksByID;
    struct SharedPtr<XVIPreprocManager> _backingManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)internalStartWithTaskStateUpdateHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)prepareTasksWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelProcessing;
- (void)startProcessingWithTasksPrepareCompletionHandler:(CDUnknownBlockType)arg1 taskStateUpdateHandler:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithPreprocTasks:(id)arg1;
- (id)initWithPHAssets:(id)arg1;

@end


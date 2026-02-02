//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WCFImageTaskInfo;

@interface WCFImageDownloaderOperation : NSObject
{
    WCFImageTaskInfo *_taskInfo;
    NSMutableDictionary *_callbacks;
    long long _cdnType;
    _Bool _isStarted;
    _Bool _terminated;
    _Bool _isPreload;
    _Bool _executed;
    _Bool _executing;
    _Bool _finished;
    _Bool _cancelled;
    long long _weight;
    long long _priority;
    CDUnknownBlockType _completion;
    unsigned long long _scene;
    unsigned long long _feedMediaType;
    NSString *_tid;
    unsigned long long _beginDownloadTimestamp;
    long long _status;
}

+ (_Bool)isInMarsScheduleQueue;
+ (id)marsScheduleQueue;
+ (id)operationsWithMedia:(id)arg1 isThumb:(_Bool)arg2;
+ (id)operationWithMedia:(id)arg1 type:(long long)arg2 key:(id)arg3;
- (void).cxx_destruct;
@property long long status; // @synthesize status=_status;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) unsigned long long beginDownloadTimestamp; // @synthesize beginDownloadTimestamp=_beginDownloadTimestamp;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) unsigned long long feedMediaType; // @synthesize feedMediaType=_feedMediaType;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) _Bool executed; // @synthesize executed=_executed;
@property(readonly, nonatomic) long long weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) _Bool isPreload; // @synthesize isPreload=_isPreload;
- (long long)compareByWeight:(id)arg1;
- (long long)compareByFactor:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)doFinish:(id)arg1 error:(id)arg2;
- (void)callCompletionsWithPath:(id)arg1 callbacks:(id)arg2;
- (void)callCompletionsWithError:(id)arg1 callbacks:(id)arg2;
- (id)pathForLocalTask;
- (_Bool)isLocalTask;
- (void)stopTask;
- (void)startMarsTask:(_Bool *)arg1 completion:(CDUnknownBlockType)arg2;
- (id)taskURLString;
- (void)realStart;
- (void)start;
- (void)cancel;
- (_Bool)cancel:(id)arg1;
- (_Bool)isAsynchronous;
- (_Bool)isConcurrent;
- (void)done;
- (id)removedCompletionByToken:(id)arg1;
- (id)allCallbacks;
- (void)addCompletion:(CDUnknownBlockType)arg1 forToken:(id)arg2 param:(CDStruct_4b68193d)arg3;
- (_Bool)isURLInvalid;
- (_Bool)isInvalid;
- (long long)factor;
- (id)key;
- (long long)mediaType;
- (id)cdnTask;
- (void)commonInit;
- (id)initWithURL:(id)arg1 key:(id)arg2;
- (id)initWithTaskInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


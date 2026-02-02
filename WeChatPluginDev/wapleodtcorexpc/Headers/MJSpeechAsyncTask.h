//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSNumber, NSString, UBDictionarySignal;

@interface MJSpeechAsyncTask : NSObject
{
    UBDictionarySignal *_statusDidUpdateSignal;
    unsigned long long _status;
    NSNumber *_taskID;
    double _requestStartTimeInterval;
    double _queryInterval;
    long long _queryCount;
    NSString *_submitTaskID;
    NSMutableArray *_completions;
    NSData *_contextBuff;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *contextBuff; // @synthesize contextBuff=_contextBuff;
@property(readonly, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain, nonatomic) NSString *submitTaskID; // @synthesize submitTaskID=_submitTaskID;
@property(nonatomic) long long queryCount; // @synthesize queryCount=_queryCount;
@property(nonatomic) double queryInterval; // @synthesize queryInterval=_queryInterval;
@property(nonatomic) double requestStartTimeInterval; // @synthesize requestStartTimeInterval=_requestStartTimeInterval;
@property(retain, nonatomic) NSNumber *taskID; // @synthesize taskID=_taskID;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, nonatomic) UBDictionarySignal *statusDidUpdateSignal; // @synthesize statusDidUpdateSignal=_statusDidUpdateSignal;
- (id)description;
- (id)statusDidUpdateParams;
- (void)handleTaskSuccessImplWithResult:(id)arg1 completionHandlers:(id)arg2;
- (void)handleTaskFailImplWithError:(id)arg1 completionHandlers:(id)arg2;
- (void)processWithResult:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)taskTimeoutMillis;
- (long long)queryAsyncRequestImplWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)submitAsyncRequestImplWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleTaskSuccessWithResult:(id)arg1;
- (void)_handleTaskFailWithError:(id)arg1;
- (void)_handleTaskStartWithID:(long long)arg1;
- (void)_queryDidCompleteOnceWithInfo:(id)arg1;
- (void)_queryDidFinishWithResult:(id)arg1;
- (void)_queryDidFailWithError:(id)arg1;
- (void)_submitDidFailWithError:(id)arg1;
- (void)_submitDidSuccessWithTaskID:(long long)arg1 submitID:(id)arg2 info:(id)arg3;
- (void)_queryAsyncRequest;
- (void)_submitAsyncRequestWithParams:(id)arg1;
- (void)cancel;
- (void)startWithParams:(id)arg1 completionHandler:(id)arg2;
- (void)markStatusPending;
- (_Bool)appendCompletionIfRunning:(id)arg1;
- (void)dealloc;
- (id)initWithStatusDidUpdateSignal:(id)arg1;

@end


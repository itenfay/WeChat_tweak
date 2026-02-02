//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJSpeechAudioData, NSData, NSMutableArray, NSNumber, NSString, UBDictionarySignal;

@interface MJSpeechCloneAsyncTaskGroup : NSObject
{
    NSString *_audioID;
    unsigned long long _status;
    UBDictionarySignal *_statusDidUpdateSignal;
    MJSpeechAudioData *_audioData;
    NSString *_text;
    NSMutableArray *_submitTasks;
    NSNumber *_queryTask;
    long long _runningTaskCount;
    long long _submitSucceedCount;
    NSMutableArray *_completions;
    NSData *_contextBuff;
    NSString *_submitTaskID;
    double _requestStartTimeInterval;
    double _queryInterval;
    long long _queryCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long queryCount; // @synthesize queryCount=_queryCount;
@property(nonatomic) double queryInterval; // @synthesize queryInterval=_queryInterval;
@property(nonatomic) double requestStartTimeInterval; // @synthesize requestStartTimeInterval=_requestStartTimeInterval;
@property(retain, nonatomic) NSString *submitTaskID; // @synthesize submitTaskID=_submitTaskID;
@property(retain, nonatomic) NSData *contextBuff; // @synthesize contextBuff=_contextBuff;
@property(readonly, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(nonatomic) long long submitSucceedCount; // @synthesize submitSucceedCount=_submitSucceedCount;
@property(nonatomic) long long runningTaskCount; // @synthesize runningTaskCount=_runningTaskCount;
@property(retain, nonatomic) NSNumber *queryTask; // @synthesize queryTask=_queryTask;
@property(retain, nonatomic) NSMutableArray *submitTasks; // @synthesize submitTasks=_submitTasks;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) MJSpeechAudioData *audioData; // @synthesize audioData=_audioData;
@property(readonly, nonatomic) UBDictionarySignal *statusDidUpdateSignal; // @synthesize statusDidUpdateSignal=_statusDidUpdateSignal;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSString *audioID; // @synthesize audioID=_audioID;
- (id)description;
- (long long)taskTimeoutMillis;
- (_Bool)containsInvalidTaskID;
- (id)statusDidUpdateParams;
- (void)queryDidCompleteOnceWithInfo:(id)arg1;
- (void)queryDidFinishWithResult:(id)arg1;
- (void)queryDidFailWithError:(id)arg1;
- (void)queryAsyncRequest;
- (void)handleAllSubmitsDidSuccess;
- (void)handleOneOfSubmitsDidSuccessWithTaskID:(long long)arg1 submitID:(id)arg2 info:(id)arg3;
- (void)handleTaskFailWithError:(id)arg1;
- (void)handleTaskSuccessWithResult:(id)arg1;
- (void)handleTaskStart;
- (void)markStatusPending;
- (_Bool)appendCompletionIfRunning:(id)arg1;
- (void)cancel;
- (void)startWithAudioData:(id)arg1 text:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithAudioID:(id)arg1 statusDidUpdateSignal:(id)arg2;

@end


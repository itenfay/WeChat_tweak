//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MMAssetCompositeCrashProtectInfo : NSObject
{
    _Bool _isRunning;
    _Bool _isUnsafe;
    NSString *_taskID;
    NSMutableArray *_rebootTypes;
    double _startTime;
    double _endTime;
    long long _taskStartTimes;
}

- (void).cxx_destruct;
@property(nonatomic) long long taskStartTimes; // @synthesize taskStartTimes=_taskStartTimes;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool isUnsafe; // @synthesize isUnsafe=_isUnsafe;
@property(retain, nonatomic) NSMutableArray *rebootTypes; // @synthesize rebootTypes=_rebootTypes;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) NSString *taskID; // @synthesize taskID=_taskID;
- (id)reportString;
- (void)report;
- (id)description;
@property(readonly, nonatomic) double encodeDuration;
- (void)onTaskCheck:(unsigned long long)arg1 isConcernedRebootType:(_Bool)arg2;
- (void)onTaskEnd;
- (void)onTaskStart;
- (id)initWithTaskID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface GCRecursiveRunTask : NSObject
{
    _Bool _paused;
    _Bool _isWaitForResponse;
    _Bool _isEnd;
    _Bool _needReRunWhenPauseResume;
    NSString *_taskDesc;
    double _delaySecondsForInvalidResult;
    NSString *_curRunInformation;
    CDUnknownBlockType _recursiveBlock;
    CDUnknownBlockType _onResultBlock;
    CDUnknownBlockType _checkResultValidBlock;
    long long _runSeq;
    double _lastRunTime;
    NSMutableArray *_runInfoArray;
    NSMutableDictionary *_receiveInfoDict;
    NSString *_lastVersion;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needReRunWhenPauseResume; // @synthesize needReRunWhenPauseResume=_needReRunWhenPauseResume;
@property(retain, nonatomic) NSString *lastVersion; // @synthesize lastVersion=_lastVersion;
@property(retain, nonatomic) NSMutableDictionary *receiveInfoDict; // @synthesize receiveInfoDict=_receiveInfoDict;
@property(retain, nonatomic) NSMutableArray *runInfoArray; // @synthesize runInfoArray=_runInfoArray;
@property(nonatomic) double lastRunTime; // @synthesize lastRunTime=_lastRunTime;
@property(nonatomic) long long runSeq; // @synthesize runSeq=_runSeq;
@property(copy, nonatomic) CDUnknownBlockType checkResultValidBlock; // @synthesize checkResultValidBlock=_checkResultValidBlock;
@property(copy, nonatomic) CDUnknownBlockType onResultBlock; // @synthesize onResultBlock=_onResultBlock;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(copy, nonatomic) CDUnknownBlockType recursiveBlock; // @synthesize recursiveBlock=_recursiveBlock;
@property(nonatomic) _Bool isWaitForResponse; // @synthesize isWaitForResponse=_isWaitForResponse;
@property(retain, nonatomic) NSString *curRunInformation; // @synthesize curRunInformation=_curRunInformation;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) double delaySecondsForInvalidResult; // @synthesize delaySecondsForInvalidResult=_delaySecondsForInvalidResult;
@property(retain, nonatomic) NSString *taskDesc; // @synthesize taskDesc=_taskDesc;
- (id)runTimeDesc;
- (id)description;
- (void)dealloc;
- (void)exit:(id)arg1;
- (void)runWithDelaySeconds:(double)arg1;
- (void)onTaskCompleteWithResult:(id)arg1 version:(id)arg2;
- (void)appendAdditionalInfo:(id)arg1;
- (void)onTaskCompleteWithResult:(id)arg1;
- (void)run;
- (id)recordInfoForSeq:(id)arg1;
- (void)logWithForamt:(id)arg1;
- (void)logStr:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end


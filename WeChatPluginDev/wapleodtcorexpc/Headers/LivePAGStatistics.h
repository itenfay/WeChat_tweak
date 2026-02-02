//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTaskId, NSMutableDictionary;

@interface LivePAGStatistics : NSObject
{
    MMLiveTaskId *_taskId;
    NSMutableDictionary *_executeRecordDict;
    NSMutableDictionary *_averFrameTimeRecordDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *averFrameTimeRecordDict; // @synthesize averFrameTimeRecordDict=_averFrameTimeRecordDict;
@property(retain, nonatomic) NSMutableDictionary *executeRecordDict; // @synthesize executeRecordDict=_executeRecordDict;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)getRfxPAGBusinessList;
- (id)getLibPAGBusinessList;
- (double)getLivePAGAverFrameTimeMax:(long long)arg1;
- (double)getLivePAGAverFrameTime:(long long)arg1;
- (int)getLivePAGExecuteCnt:(id)arg1;
- (void)recordLivePAG:(long long)arg1 averFrameTime:(double)arg2;
- (void)recordLivePAGExecute:(long long)arg1;
- (void)onExitLive;
- (void)onLivePAG:(long long)arg1 averFrameTimeStat:(double)arg2;
- (void)onLivePAGExecute:(long long)arg1;
- (void)initDefaultDatas;
- (id)initWithTaskId:(id)arg1;

@end


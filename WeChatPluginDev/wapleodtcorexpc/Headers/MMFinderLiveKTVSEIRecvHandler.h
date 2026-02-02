//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveKTVReporter, MMFinderLiveKTVSEIRecvSession, NSMutableArray;
@protocol MMLiveUniqueTaskId;

@interface MMFinderLiveKTVSEIRecvHandler : NSObject
{
    _Bool _seiFreqStable;
    double _recentSeiRecvInterval;
    MMFinderLiveKTVSEIRecvSession *_currSession;
    CDUnknownBlockType _recvSessionUpdateCallback;
    id <MMLiveUniqueTaskId> _taskId;
    NSMutableArray *_recentSeiRecvTimeIntervalRecords;
    NSMutableArray *_recentSeiRecvIntervalList;
    double _lastSeiRecvTime;
    unsigned long long _currMaxRecvSeq;
    double _currSessionStartTime;
    MMFinderLiveKTVReporter *_reporter;
    double _lastUnStickTime;
}

- (void).cxx_destruct;
@property(nonatomic) double lastUnStickTime; // @synthesize lastUnStickTime=_lastUnStickTime;
@property(retain) MMFinderLiveKTVReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) double currSessionStartTime; // @synthesize currSessionStartTime=_currSessionStartTime;
@property(nonatomic) _Bool seiFreqStable; // @synthesize seiFreqStable=_seiFreqStable;
@property(nonatomic) unsigned long long currMaxRecvSeq; // @synthesize currMaxRecvSeq=_currMaxRecvSeq;
@property(nonatomic) double lastSeiRecvTime; // @synthesize lastSeiRecvTime=_lastSeiRecvTime;
@property(retain, nonatomic) NSMutableArray *recentSeiRecvIntervalList; // @synthesize recentSeiRecvIntervalList=_recentSeiRecvIntervalList;
@property(retain, nonatomic) NSMutableArray *recentSeiRecvTimeIntervalRecords; // @synthesize recentSeiRecvTimeIntervalRecords=_recentSeiRecvTimeIntervalRecords;
@property(retain, nonatomic) id <MMLiveUniqueTaskId> taskId; // @synthesize taskId=_taskId;
@property(copy) CDUnknownBlockType recvSessionUpdateCallback; // @synthesize recvSessionUpdateCallback=_recvSessionUpdateCallback;
@property(retain) MMFinderLiveKTVSEIRecvSession *currSession; // @synthesize currSession=_currSession;
@property(nonatomic) double recentSeiRecvInterval; // @synthesize recentSeiRecvInterval=_recentSeiRecvInterval;
- (double)getAverRecentRecvInterval;
- (unsigned long long)recentRecvIntervalRecordCnt;
- (void)clearRecentRecvIntervals;
- (void)clearRecentRecvIntervalsIfOverLimit;
- (void)recordNewRecvInterval:(double)arg1;
- (void)updateRecentSeiRecvIntervalIfNeed:(double)arg1;
- (void)analyzeRecentSeiRecvAverTimeInterval;
- (void)clearRecvTimeIntervalNoiseIfNeed;
- (unsigned long long)recentRecvTimeRecordCnt;
- (void)clearSeiRecvTimeIntervalRecords;
- (void)clearRecvTimeIntervalRecordsIfOverLimit;
- (double)adjustRecvTimeIntervalIfNeed:(double)arg1;
- (_Bool)isRecvTimeIntervalValid:(double)arg1;
- (void)checkSeiFreqStableIfNeed;
- (void)recordRecvNewSeiKTVInfo;
- (id)ktvReporter;
- (void)notifyRecvKTVSeiData:(id)arg1 continuous:(_Bool)arg2 stick:(_Bool)arg3;
- (void)clearLastSessionRecvDatas;
- (void)updateRecvSession:(id)arg1;
- (id)createRecvSessionWithKTVSeiData:(id)arg1;
- (void)clearDatas;
- (void)onSyncRecv:(id)arg1 continuous:(_Bool)arg2 stick:(_Bool)arg3;
- (void)updateRecentUnStickSeiTime;
- (_Bool)updateCurrMaxRecvSeq:(unsigned long long)arg1;
- (_Bool)isRecvSeqValid:(unsigned long long)arg1;
- (_Bool)isRecvSeqStick;
- (_Bool)isRecvSeqContinuous:(unsigned long long)arg1;
- (void)checkRecvSessionUpdated:(id)arg1;
- (void)initDefaultDatas;
- (id)initWithTaskId:(id)arg1;

@end


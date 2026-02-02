//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveKTVSEIRecvSession, NSMutableArray, NSString;
@protocol MMLiveUniqueTaskId;

@interface MMFinderLiveKTVNoteManageLogic : NSObject
{
    _Bool _isNoteDelayIntervalUpdated;
    int _lastTargetIndex;
    double _predictNoteDelayInterval;
    id <MMLiveUniqueTaskId> _taskId;
    MMFinderLiveKTVSEIRecvSession *_currRemoteSession;
    NSMutableArray *_recentNoteRecordList;
    double _lastNoteDelayIntervalUpdateTime;
}

+ (int)preferNoteAdjustTimeInterval;
- (void).cxx_destruct;
@property(nonatomic) double lastNoteDelayIntervalUpdateTime; // @synthesize lastNoteDelayIntervalUpdateTime=_lastNoteDelayIntervalUpdateTime;
@property(nonatomic) int lastTargetIndex; // @synthesize lastTargetIndex=_lastTargetIndex;
@property(retain, nonatomic) NSMutableArray *recentNoteRecordList; // @synthesize recentNoteRecordList=_recentNoteRecordList;
@property(retain, nonatomic) MMFinderLiveKTVSEIRecvSession *currRemoteSession; // @synthesize currRemoteSession=_currRemoteSession;
@property(retain, nonatomic) id <MMLiveUniqueTaskId> taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool isNoteDelayIntervalUpdated; // @synthesize isNoteDelayIntervalUpdated=_isNoteDelayIntervalUpdated;
@property(nonatomic) double predictNoteDelayInterval; // @synthesize predictNoteDelayInterval=_predictNoteDelayInterval;
- (void)onLiveSEIKTVRecvTimeIntervalUpdate:(double)arg1 taskId:(id)arg2;
- (void)onLiveSEIKTVNoteListExpiredInSession:(id)arg1 taskId:(id)arg2;
- (void)onLiveSEIKTVNoteListSyncRecv:(id)arg1 session:(id)arg2 taskId:(id)arg3;
- (double)noteDelayIntervalUpdateMinInterval;
- (double)maxNoteDelayInterval;
- (void)updatePredictNoteDelayInterval:(double)arg1;
- (void)updateNoteDelayIntervalIfNeed:(double)arg1;
- (_Bool)isPosition:(int)arg1 mistakeWithNote:(id)arg2 overLimit:(int)arg3;
- (id)checkPosition:(int)arg1 nearestWithLastNote:(id)arg2 orNextNote:(id)arg3;
- (_Bool)isPosition:(int)arg1 fitWithNote:(id)arg2;
- (void)clearNoteRecordsIfOverLimit;
- (void)clearRecentRemoteNoteRecords;
- (void)addRecentRemoteNoteRecords:(id)arg1;
- (void)clearLastSessionRemoteNotes;
- (void)updateRemoteSession:(id)arg1;
- (void)onPredictNoteDelayIntervalUpdateAck;
- (id)tryGetSEINoteWithPosition:(int)arg1 maxMistake:(int)arg2;
- (void)registerExtensions;
- (void)initDefaultDatas;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol UploadStreamVoiceDataMgrDelegate;

@interface UploadStreamVoiceDataMgr
{
    unsigned int _addTaskCount;
    unsigned int _uploadTaskCount;
    NSDate *m_dtStopRecordTime;
    NSMutableSet *m_setEndFlagList;
    _Bool m_bCheckTransResult;
    _Bool m_bReportEnd;
    float _transTimeoutInsec;
    unsigned int _currentInputId;
    unsigned int _maxPacketSize;
    id <UploadStreamVoiceDataMgrDelegate> _delegate;
    long long _scene;
    MMTimer *_checkUploadQueueTimer;
    NSMutableArray *_runningQueue;
    NSMutableArray *_waitingQueue;
    unsigned long long _nextCheckResultTime;
    double _uploadInterval;
    NSMutableSet *_processingVoiceIds;
    NSMutableDictionary *_sequenceMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *sequenceMap; // @synthesize sequenceMap=_sequenceMap;
@property(retain, nonatomic) NSMutableSet *processingVoiceIds; // @synthesize processingVoiceIds=_processingVoiceIds;
@property(nonatomic) double uploadInterval; // @synthesize uploadInterval=_uploadInterval;
@property(nonatomic) unsigned long long nextCheckResultTime; // @synthesize nextCheckResultTime=_nextCheckResultTime;
@property(nonatomic) unsigned int maxPacketSize; // @synthesize maxPacketSize=_maxPacketSize;
@property(nonatomic) unsigned int currentInputId; // @synthesize currentInputId=_currentInputId;
@property(retain, nonatomic) NSMutableArray *waitingQueue; // @synthesize waitingQueue=_waitingQueue;
@property(retain, nonatomic) NSMutableArray *runningQueue; // @synthesize runningQueue=_runningQueue;
@property(retain, nonatomic) MMTimer *checkUploadQueueTimer; // @synthesize checkUploadQueueTimer=_checkUploadQueueTimer;
@property(nonatomic) float transTimeoutInsec; // @synthesize transTimeoutInsec=_transTimeoutInsec;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id <UploadStreamVoiceDataMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned int)genSquenceByVoiceId:(id)arg1;
- (void)handleVoiceTransResponse:(id)arg1;
- (void)checkUploadResultWithInterval:(int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)RemoveRequestFromRunningQueue:(id)arg1;
- (_Bool)doUpload:(id)arg1;
- (_Bool)tryAddNewUploadTask;
- (void)stopUploadTaskWithErr:(int)arg1;
- (void)checkUploadQueue;
- (void)addVoiceIdToProcessingQueue:(id)arg1;
- (void)addItem:(id)arg1;
- (void)mergeItem:(id)arg1 withItem:(id)arg2;
- (_Bool)canMergeItem:(id)arg1 withItem:(id)arg2;
- (void)stopUploadTask;
- (void)safeStopUploadTimer;
- (void)resetUploadTimer;
- (void)notifyRecordStop;
- (void)ClearLastUploadData;
- (void)AddNewPart:(id)arg1;
- (void)Stop;
- (void)Start:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end


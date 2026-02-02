//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink, MMFinderLiveKTVReporter, MMFinderLiveKTVSEIRecvHandler, MMFinderLiveKTVSongItem, MMLiveTask, NSMutableArray, NSString;
@protocol MMFinderLiveKTVSEISynchronizeDelegate, MMLiveUniqueTaskId;

@interface MMFinderLiveKTVSEISynchronizeLogic : NSObject
{
    _Bool _isStartSend;
    _Bool _currActionVersionUnValid;
    int _currActionVersion;
    int _currSyncVersion;
    int _minSyncInterval;
    id <MMFinderLiveKTVSEISynchronizeDelegate> _syncDelegate;
    long long _currRole;
    MMFinderLiveKTVSongItem *_targetSendSong;
    MMFinderLiveKTVSEIRecvHandler *_seiRecvHandler;
    id <MMLiveUniqueTaskId> _taskId;
    unsigned long long _scene;
    NSString *_sendActorUserId;
    NSString *_sendActUniqueId;
    unsigned long long _currSendSeq;
    double _lastSendTime;
    NSMutableArray *_syncSendHandlerArr;
    unsigned long long _invokeMode;
    CADisplayLink *_autoInvokeDisplayLink;
    NSMutableArray *_collectKTVInfoArr;
    MMFinderLiveKTVReporter *_reporter;
    unsigned long long _sumRecvSeiSeqCnt;
    unsigned long long _sumRecvSeiUnValidSeqCnt;
    unsigned long long _sumRecvSeiDisContinuousSeqCnt;
    unsigned long long _sumRecvSeiStickSeqCnt;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long sumRecvSeiStickSeqCnt; // @synthesize sumRecvSeiStickSeqCnt=_sumRecvSeiStickSeqCnt;
@property(nonatomic) unsigned long long sumRecvSeiDisContinuousSeqCnt; // @synthesize sumRecvSeiDisContinuousSeqCnt=_sumRecvSeiDisContinuousSeqCnt;
@property(nonatomic) unsigned long long sumRecvSeiUnValidSeqCnt; // @synthesize sumRecvSeiUnValidSeqCnt=_sumRecvSeiUnValidSeqCnt;
@property(nonatomic) unsigned long long sumRecvSeiSeqCnt; // @synthesize sumRecvSeiSeqCnt=_sumRecvSeiSeqCnt;
@property(retain) MMFinderLiveKTVReporter *reporter; // @synthesize reporter=_reporter;
@property _Bool currActionVersionUnValid; // @synthesize currActionVersionUnValid=_currActionVersionUnValid;
@property(retain) NSMutableArray *collectKTVInfoArr; // @synthesize collectKTVInfoArr=_collectKTVInfoArr;
@property(retain, nonatomic) CADisplayLink *autoInvokeDisplayLink; // @synthesize autoInvokeDisplayLink=_autoInvokeDisplayLink;
@property(nonatomic) unsigned long long invokeMode; // @synthesize invokeMode=_invokeMode;
@property(retain, nonatomic) NSMutableArray *syncSendHandlerArr; // @synthesize syncSendHandlerArr=_syncSendHandlerArr;
@property int minSyncInterval; // @synthesize minSyncInterval=_minSyncInterval;
@property double lastSendTime; // @synthesize lastSendTime=_lastSendTime;
@property unsigned long long currSendSeq; // @synthesize currSendSeq=_currSendSeq;
@property(retain) NSString *sendActUniqueId; // @synthesize sendActUniqueId=_sendActUniqueId;
@property(retain) NSString *sendActorUserId; // @synthesize sendActorUserId=_sendActorUserId;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) id <MMLiveUniqueTaskId> taskId; // @synthesize taskId=_taskId;
@property(retain) MMFinderLiveKTVSEIRecvHandler *seiRecvHandler; // @synthesize seiRecvHandler=_seiRecvHandler;
@property _Bool isStartSend; // @synthesize isStartSend=_isStartSend;
@property(retain) MMFinderLiveKTVSongItem *targetSendSong; // @synthesize targetSendSong=_targetSendSong;
@property int currSyncVersion; // @synthesize currSyncVersion=_currSyncVersion;
@property int currActionVersion; // @synthesize currActionVersion=_currActionVersion;
@property long long currRole; // @synthesize currRole=_currRole;
@property __weak id <MMFinderLiveKTVSEISynchronizeDelegate> syncDelegate; // @synthesize syncDelegate=_syncDelegate;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (_Bool)isCurrActionVersionValid;
- (id)ktvReporter;
@property(readonly, nonatomic) MMLiveTask *liveTask;
- (void)clearCollectKTVInfosIfOverLimit;
- (id)getCurrCollectKTVInfos;
- (void)clearCollectKTVInfos;
- (void)addKTVInfo:(id)arg1;
- (int)autoRefreshFrameRate;
- (void)autoInvokeWithDisplayLink:(id)arg1;
- (void)stopAutoInvokeDisplayLink;
- (void)startAutoInvokeDisplayLink;
- (void)stopAutoInvokeSync;
- (void)startAutoInvokeSync;
- (void)stopOuterInvokeSync;
- (void)startOuterInvokeSync;
- (void)autoIncreaseSendSeq;
- (void)clearSendDatas;
- (void)createSeiRecvHandler;
- (void)onSyncRecv:(id)arg1;
- (void)sendKTVSeiIfNeed;
- (id)makeKTVSeiData;
- (void)checkCollectedKTVInfosHasData;
- (void)scheduleCollectKTVInfo;
- (_Bool)updateCurrRole:(long long)arg1;
- (_Bool)updateActionVersion:(unsigned int)arg1 force:(_Bool)arg2;
- (_Bool)updateActionVersion:(unsigned int)arg1;
- (void)updateTargetSendSong:(id)arg1;
- (void)updateSendActUniqueId:(id)arg1;
- (void)updateSendActorUserId:(id)arg1;
- (void)clearRecvDatas;
- (_Bool)isCurrSendForTargetSong:(id)arg1;
- (_Bool)checkKTVSeiDataNeedRecv:(id)arg1;
- (_Bool)checkSeiKTVActionVersionIsValid:(unsigned int)arg1;
- (void)onNewReceiverUpdate:(id)arg1;
- (void)onRecvKtvActionVersion:(unsigned int)arg1;
- (void)processSEIPBForKTVSyncRecv:(id)arg1;
- (void)updateMaxFps:(int)arg1;
- (void)addKTVSEISyncSendHandler:(id)arg1;
- (void)onVideoDataWillPush;
- (_Bool)manualUpdateRecvRoleActionVersionUnValid;
- (void)changeToRecvRole;
- (_Bool)startSendWithInvokeMode:(_Bool)arg1;
- (_Bool)changeToSendRoleWithActionVersion:(unsigned int)arg1 targetSong:(id)arg2 byActor:(id)arg3;
- (void)initNotifications;
- (void)initDefaultDatas;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

@end


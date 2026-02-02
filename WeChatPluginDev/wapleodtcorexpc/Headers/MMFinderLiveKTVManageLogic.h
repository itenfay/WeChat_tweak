//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveKSKitAudioEngine, MMFinderLiveKTVNoteManageLogic, MMFinderLiveKTVSEIRecvHandler, MMFinderLiveKTVSEISynchronizeLogic, MMFinderLiveKTVSingingData, MMFinderLiveKTVSongItem, MMFinderLiveKTVStateInfo, MMFinderLiveKtvAllWaitSongCountInfo, MMFinderLiveKtvPlayerWaitListInfo, MMFinderLiveKtvSelfWaitSongCountInfo, MMFinderLiveTask, MMFinderLiveTaskId, MMLiveBaseTask, MMLiveSEIKTVSongItem, NSMutableArray, NSString;
@protocol MMFinderLiveTaskFunctionPlugin, MMLiveUniqueTaskId;

@interface MMFinderLiveKTVManageLogic : NSObject
{
    _Bool _disableNoteScore;
    _Bool _isPendingSongsUnTructed;
    _Bool _isInVadAutoDetectMode;
    unsigned int _firstSongChangeVersion;
    MMFinderLiveKTVStateInfo *_ktvStateInfo;
    MMFinderLiveKTVSEISynchronizeLogic *_seiSyncLogic;
    MMFinderLiveKSKitAudioEngine *_ksKitAudioEngine;
    MMFinderLiveKTVNoteManageLogic *_ktvNoteManageLogic;
    CDUnknownBlockType _requestMaxSEIFpsCallback;
    CDUnknownBlockType _invokeUpdateVideoEncodeParamBlock;
    MMFinderLiveKTVSongItem *_currActionSongItem;
    unsigned long long _songListVersion;
    MMFinderLiveKtvPlayerWaitListInfo *_currWaitListInfo;
    MMFinderLiveKTVSingingData *_ktvSingingData;
    NSMutableArray *_pendingSongItems;
    MMLiveSEIKTVSongItem *_lastAnchorSongAction;
    MMFinderLiveKTVSongItem *_pendingReqSongItem;
    MMFinderLiveKtvSelfWaitSongCountInfo *_currSelfWaitSongCntInfo;
    MMFinderLiveKtvAllWaitSongCountInfo *_currAllWaitSongCntInfo;
    double _lastVadDetectTime;
    id <MMLiveUniqueTaskId> _taskId;
    unsigned long long _scene;
}

+ (long long)getKTVPreferMediaVolumeType;
+ (unsigned int)pendingSongItemRequireCnt;
+ (_Bool)isKTVPreferMediaVolumeType;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) id <MMLiveUniqueTaskId> taskId; // @synthesize taskId=_taskId;
@property(nonatomic) double lastVadDetectTime; // @synthesize lastVadDetectTime=_lastVadDetectTime;
@property(nonatomic) _Bool isInVadAutoDetectMode; // @synthesize isInVadAutoDetectMode=_isInVadAutoDetectMode;
@property(retain, nonatomic) MMFinderLiveKtvAllWaitSongCountInfo *currAllWaitSongCntInfo; // @synthesize currAllWaitSongCntInfo=_currAllWaitSongCntInfo;
@property(retain, nonatomic) MMFinderLiveKtvSelfWaitSongCountInfo *currSelfWaitSongCntInfo; // @synthesize currSelfWaitSongCntInfo=_currSelfWaitSongCntInfo;
@property(retain, nonatomic) MMFinderLiveKTVSongItem *pendingReqSongItem; // @synthesize pendingReqSongItem=_pendingReqSongItem;
@property(retain, nonatomic) MMLiveSEIKTVSongItem *lastAnchorSongAction; // @synthesize lastAnchorSongAction=_lastAnchorSongAction;
@property(nonatomic) _Bool isPendingSongsUnTructed; // @synthesize isPendingSongsUnTructed=_isPendingSongsUnTructed;
@property(retain, nonatomic) NSMutableArray *pendingSongItems; // @synthesize pendingSongItems=_pendingSongItems;
@property(retain, nonatomic) MMFinderLiveKTVSingingData *ktvSingingData; // @synthesize ktvSingingData=_ktvSingingData;
@property(retain, nonatomic) MMFinderLiveKtvPlayerWaitListInfo *currWaitListInfo; // @synthesize currWaitListInfo=_currWaitListInfo;
@property(nonatomic) unsigned long long songListVersion; // @synthesize songListVersion=_songListVersion;
@property(retain, nonatomic) MMFinderLiveKTVSongItem *currActionSongItem; // @synthesize currActionSongItem=_currActionSongItem;
@property(nonatomic) unsigned int firstSongChangeVersion; // @synthesize firstSongChangeVersion=_firstSongChangeVersion;
@property(copy, nonatomic) CDUnknownBlockType invokeUpdateVideoEncodeParamBlock; // @synthesize invokeUpdateVideoEncodeParamBlock=_invokeUpdateVideoEncodeParamBlock;
@property(copy, nonatomic) CDUnknownBlockType requestMaxSEIFpsCallback; // @synthesize requestMaxSEIFpsCallback=_requestMaxSEIFpsCallback;
@property(retain, nonatomic) MMFinderLiveKTVNoteManageLogic *ktvNoteManageLogic; // @synthesize ktvNoteManageLogic=_ktvNoteManageLogic;
@property(retain, nonatomic) MMFinderLiveKSKitAudioEngine *ksKitAudioEngine; // @synthesize ksKitAudioEngine=_ksKitAudioEngine;
@property(retain, nonatomic) MMFinderLiveKTVSEISynchronizeLogic *seiSyncLogic; // @synthesize seiSyncLogic=_seiSyncLogic;
@property(retain, nonatomic) MMFinderLiveKTVStateInfo *ktvStateInfo; // @synthesize ktvStateInfo=_ktvStateInfo;
@property(nonatomic) _Bool disableNoteScore; // @synthesize disableNoteScore=_disableNoteScore;
- (id)transferToSongItemsFromSongInfos:(id)arg1;
- (id)transferToSongItemFromChangeSongInfo:(id)arg1;
- (void)onKSKitSingStopWithSong:(id)arg1 taskId:(id)arg2;
- (void)onKSKitSongEndWithSong:(id)arg1 taskId:(id)arg2;
- (void)onKSKitSingEndWithSong:(id)arg1 taskId:(id)arg2;
- (void)synchronizeUnSingStateIfNeed:(id)arg1 fromSeiSeq:(unsigned long long)arg2;
- (void)synchronizeFirstSongChangeVersionIfNeed:(id)arg1 fromSeiSeq:(unsigned long long)arg2;
- (void)onSynchronizedSEIAnchoInfo:(id)arg1 taskId:(id)arg2;
- (void)onFinderLiveKTVSEISynRoleChanged:(long long)arg1;
- (void)onFinderLiveKTVSEIRecvActionIdUpdate:(id)arg1 lastActionId:(id)arg2 syncLogic:(id)arg3;
- (void)onFinderLiveKTVSEIRecvSongUpdate:(id)arg1 lastSong:(id)arg2 syncLogic:(id)arg3;
- (void)onFinderLiveKTVSEINewReceiverUpdate:(id)arg1 syncLogic:(id)arg2;
- (void)onFinderLiveKTVSEIRecvActionVersion:(unsigned int)arg1 syncLogic:(id)arg2;
- (void)onKtvCurrPlayingSongChanged:(id)arg1 taskId:(id)arg2;
- (void)onKtvSongListChangeNotification:(id)arg1 fromUser:(id)arg2 taskId:(id)arg3;
- (void)onLiveTask:(id)arg1 micMutedDidChange:(_Bool)arg2;
- (void)onLiveTask:(id)arg1 audienceConnectingMicStatusChanged:(_Bool)arg2;
- (void)onFinderLiveTask:(id)arg1 pipHandlerCreated:(id)arg2;
- (double)audioInterruptAutoCutDelayTime;
- (void)autoCutSingingSongForAudioInterrupt;
- (void)checkNeedDelayAutoCutForAuthorityActiveChanged:(_Bool)arg1;
- (void)checkNeedPauseSingingForAuthorityActiveChanged:(_Bool)arg1;
- (void)onLiveTask:(id)arg1 audioAuthorityActiveChanged:(_Bool)arg2;
- (void)checkAudioNeedMuteWithExitState:(unsigned long long)arg1;
- (_Bool)getSelfSingerCurrPauseState;
- (void)checkNeedPauseSingingWithExitState:(unsigned long long)arg1;
- (void)onLiveTask:(id)arg1 exitStateChanged:(unsigned long long)arg2;
- (void)onLiveTask:(id)arg1 remoteUserLeaveRoom:(id)arg2 reason:(long long)arg3;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onLiveTaskExitLive:(id)arg1;
- (void)onLiveTask:(id)arg1 liveClosed:(_Bool)arg2;
- (void)reportScore:(id)arg1 uniqueId:(id)arg2 finish:(_Bool)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 pauseActionStateUpdated:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 useVideoChanged:(_Bool)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 uniqueIdChanged:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 pauseChanged:(_Bool)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singStateChanged:(long long)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 songItemUpdated:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singerUserIdChanged:(id)arg3;
@property(readonly, nonatomic) _Bool inLiveRoom;
- (_Bool)isCurrentInMic;
@property(readonly, nonatomic) MMFinderLiveKTVSEIRecvHandler *seiRecvHandler;
@property(readonly, nonatomic) unsigned int allWaitSongCnt;
@property(readonly, nonatomic) unsigned int selfWaitSongCnt;
@property(readonly, nonatomic) MMFinderLiveKTVSongItem *nextPendingSongItem;
@property(readonly, nonatomic) MMFinderLiveKTVSongItem *currPendingSongItem;
- (void)createKTVNoteManageLogic;
- (void)createKTVSingingData;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
@property(readonly, nonatomic) MMLiveBaseTask<MMFinderLiveTaskFunctionPlugin> *liveFunctionTask;
@property(readonly, nonatomic) MMFinderLiveTaskId *finderTaskId;
- (int)getCurrSelfVoiceVolume;
- (void)clearDatasForExitKTV;
- (_Bool)isCurrAudienceLiveCanPause;
- (void)onUserVoiceVolume:(id)arg1 totalVolume:(long long)arg2;
- (void)realRequestKtvSongItem:(id)arg1;
- (void)requestPendingSongForAudience;
- (void)requestKtvSongItem:(id)arg1;
- (_Bool)isSongItemSingBySelf:(id)arg1;
- (void)updateSyncKtvInfoResp:(id)arg1;
- (void)errorCancelHandleWithToast:(_Bool)arg1 toastStr:(id)arg2;
- (void)errorCancelHandleWithToast:(_Bool)arg1;
- (id)genAnchorSeiKTVStateInfo;
- (_Bool)hasAuthorityToActionCurrSong;
- (void)synchronizeRemotePauseModType:(unsigned int)arg1 forSongItem:(id)arg2;
- (void)changeCurrSelfSongPauseState:(_Bool)arg1;
- (void)changeOtherSingerSong:(id)arg1 pauseState:(_Bool)arg2;
- (void)modSongCgiFailToasts:(int)arg1 errorDesc:(id)arg2;
- (void)onKtvSongListChangeNotificationToast:(id)arg1 fromUser:(id)arg2 action:(int)arg3;
- (void)modSongCgiSuccessToasts:(id)arg1 newAddSongIndex:(unsigned int)arg2 action:(int)arg3;
- (void)syncKTVAction:(int)arg1 targetUser:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startCgiToModSong:(id)arg1 action:(int)arg2 forbidToast:(_Bool)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)startCgiToModSong:(id)arg1 action:(int)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (_Bool)isPendingSongListEmpty;
- (void)updateFirstSongChangeVersion:(unsigned int)arg1 source:(long long)arg2;
- (void)updatePendingSongItems:(id)arg1 firstSongChangeVersion:(unsigned int)arg2 source:(long long)arg3;
- (void)checkSelfVadDetection:(id)arg1;
- (void)reStartVadDetectionAfterInterval;
- (void)startVadDetection;
- (void)closeVadAutoDetectMode;
- (void)openVadAutoDetectMode;
- (void)updateVadAutoDetectSwitchIfNeed;
- (id)getSelfVolumeInfo:(id)arg1;
- (_Bool)transferToNewStateUnSingByAnchorWithVersion:(unsigned int)arg1;
- (void)updateAllWaitSongCount:(unsigned int)arg1 version:(unsigned long long)arg2 source:(long long)arg3;
- (void)updateSelfWaitSongCount:(unsigned int)arg1 version:(unsigned long long)arg2 source:(long long)arg3;
- (void)updateSongListVersion:(unsigned long long)arg1 source:(long long)arg2;
- (void)updateWaitListInfoFromPb:(id)arg1 source:(long long)arg2;
- (void)clearLastSelfSingDatas;
- (void)updateCurrSongPauseActionState;
- (void)updateCurrSingerContactIfNeed;
- (void)checkActionSongItemChanged;
- (void)onCurrPendingSongItemInfoUpdated;
- (void)switchStreamModeIfNeed:(id)arg1;
- (void)switchStreamModeWithoutVideo;
- (void)syncKTVSceneLeave:(CDUnknownBlockType)arg1;
- (void)syncUserMicLeave:(id)arg1 src:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)endSong:(id)arg1 action:(long long)arg2 src:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)endCurrSong:(long long)arg1 src:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)checkCurrPendingSongIsSingBySelf;
- (void)stopSingEngine:(id)arg1 force:(_Bool)arg2;
- (void)startSong:(id)arg1 force:(_Bool)arg2 scoreEngineFlag:(unsigned int)arg3;
- (void)startSingBySelf:(id)arg1 force:(_Bool)arg2;
- (void)onUniqueIdChanged:(id)arg1;
- (void)onSingingStateChanged:(id)arg1;
- (void)onRecoverToUnSing:(id)arg1;
- (void)onSingingEnd:(id)arg1;
- (void)onSingingAdvanceToNext:(id)arg1;
- (void)onSingingStart:(id)arg1;
- (void)onSingerUserChanged:(id)arg1;
- (void)onSingByOthers:(id)arg1;
- (void)refreshMaxSEIFps;
- (void)onSingByMySelf:(id)arg1;
- (void)startSyncSendWithTargetSong:(id)arg1;
- (void)transferToSendRole;
- (void)cancelTransferToRecvRole;
- (void)transferToRecvRole;
- (void)advanceTransferToNextState;
- (void)onFirstSongVersionUpdated;
- (void)initDefaultDatas;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;
- (void)fetchSongList:(unsigned int)arg1 songListVersion:(unsigned long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


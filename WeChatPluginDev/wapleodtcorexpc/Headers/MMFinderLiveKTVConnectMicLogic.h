//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveKTVConnectMicSessionInfo, MMFinderLiveTask, MMFinderLiveTaskId, NSMutableDictionary, NSString;

@interface MMFinderLiveKTVConnectMicLogic : NSObject
{
    _Bool _hasStartedActivateMicForAnchor;
    _Bool _isRequestSongBlockedByRealNameCheck;
    _Bool _isShowingMysteriousNoticeView;
    unsigned int _audienceStayTrtcRoomTimeAfterStopSinging;
    MMFinderLiveTaskId *_finderLiveTaskId;
    MMFinderLiveKTVConnectMicSessionInfo *_connectMicSessionInfo;
    NSMutableDictionary *_endSingingSessionInfoDict;
    unsigned long long _recordPermissionCheckResult;
    CDUnknownBlockType _requestSongCheckResultBlock;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShowingMysteriousNoticeView; // @synthesize isShowingMysteriousNoticeView=_isShowingMysteriousNoticeView;
@property(copy, nonatomic) CDUnknownBlockType requestSongCheckResultBlock; // @synthesize requestSongCheckResultBlock=_requestSongCheckResultBlock;
@property(nonatomic) unsigned long long recordPermissionCheckResult; // @synthesize recordPermissionCheckResult=_recordPermissionCheckResult;
@property(nonatomic) _Bool isRequestSongBlockedByRealNameCheck; // @synthesize isRequestSongBlockedByRealNameCheck=_isRequestSongBlockedByRealNameCheck;
@property(nonatomic) unsigned int audienceStayTrtcRoomTimeAfterStopSinging; // @synthesize audienceStayTrtcRoomTimeAfterStopSinging=_audienceStayTrtcRoomTimeAfterStopSinging;
@property(nonatomic) _Bool hasStartedActivateMicForAnchor; // @synthesize hasStartedActivateMicForAnchor=_hasStartedActivateMicForAnchor;
@property(retain, nonatomic) NSMutableDictionary *endSingingSessionInfoDict; // @synthesize endSingingSessionInfoDict=_endSingingSessionInfoDict;
@property(retain, nonatomic) MMFinderLiveKTVConnectMicSessionInfo *connectMicSessionInfo; // @synthesize connectMicSessionInfo=_connectMicSessionInfo;
@property(retain, nonatomic) MMFinderLiveTaskId *finderLiveTaskId; // @synthesize finderLiveTaskId=_finderLiveTaskId;
- (void)activateLiveConnectMicForAnchor;
- (void)startActivateLiveConnectMicForAnchor;
- (void)onBecomeActive;
- (void)OnRecordDeniedByWeChat;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)checkIsAudienceRequestSongBlockedPhaseTwoWithResultBlock:(CDUnknownBlockType)arg1 liveTask:(id)arg2;
- (void)checkIsAudienceRequestSongBlockedWithResultBlock:(CDUnknownBlockType)arg1;
- (void)updateRequestSongBlockFlagWithRealNameCheckResultFromCGI:(int)arg1;
- (void)checkAndSwitchToCDNPlayWithTask:(id)arg1;
- (void)delayCheckAndSwitchToCDNPlay;
- (void)stopConnectMicWithTask:(id)arg1;
- (_Bool)startConnectMicWithTask:(id)arg1 sdkInfo:(id)arg2;
- (void)updateAudienceStayTrtcRoomTimeAfterStopSinging:(unsigned int)arg1;
- (void)updateMicMute:(_Bool)arg1;
- (_Bool)isCurrentInMic;
- (void)handleTrtcSwitchRoleResult:(_Bool)arg1 errorMsg:(id)arg2;
- (void)handleEndKtvSingingSessionFailedWithSongUniqueId:(id)arg1;
- (void)sendEndKtvSingingSessionCgiWithSongUniqueId:(id)arg1;
- (void)checkAndClearConnectMicSessionInfoWithSongUniqueId:(id)arg1;
- (void)endKtvSingingSessionForOtherSingerWithSongUniqueId:(id)arg1;
- (void)endKtvSingingSessionWithSongUniqueId:(id)arg1 shouldStopConnectMic:(_Bool)arg2;
- (_Bool)tryConnectMicIfRequireSdkInfo:(_Bool)arg1 sdkInfo:(id)arg2;
- (void)beginKtvSingingSessionWithSongUniqueId:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSString *currentSongId;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (void)initNotifications;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


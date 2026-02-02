//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiveSdkChannelParams, LiveSdkInfo, MMFinderLiveKTVBox, MMFinderLiveKTVManageLogic, MMFinderLiveKTVStateInfo, MMLiveAnchorStatusItem, MMLiveAudioRoomSEIConnectMicMsg, MMLiveCDNPlayerItem, MMLiveCommentDataFetchEngne, MMLiveCommentDataRefreshConfig, MMLiveCommentUIStateInfo, MMLiveSEIConnectMicMsg, MMLiveTaskId, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol MMLiveBaseTaskDelegate;

@interface MMLiveBaseTask : NSObject
{
    _Bool _isReplay;
    _Bool _isLivePlayingViaCdn;
    _Bool _isViewCapturing;
    _Bool _isPureAudioMode;
    _Bool _hasSetAudioRoomSceneBySEI;
    _Bool _isLiveClosed;
    _Bool _isInLive;
    _Bool _isEnableComment;
    _Bool _isShowUserLocationAvailable;
    _Bool _isAllowShowAudioRoomAnchorLocation;
    NSString *_sessionKey;
    long long _roleType;
    MMLiveTaskId *_taskId;
    MMLiveCommentDataRefreshConfig *_commentRefreshConfig;
    MMLiveAnchorStatusItem *_anchorStatusItem;
    LiveSdkInfo *_liveSdkInfo;
    LiveSdkChannelParams *_lastLiveChannelParams;
    NSArray *_seiConnectMicUserInfoList;
    MMLiveSEIConnectMicMsg *_seiMicMsgInfo;
    unsigned long long _localAudioModeState;
    unsigned long long _audioRoomScene;
    MMLiveAudioRoomSEIConnectMicMsg *_audioRoomSeiMicMsgInfo;
    MMFinderLiveKTVBox *_ktvBox;
    id <MMLiveBaseTaskDelegate> _delegate;
    NSString *_disableCommentMsg;
    MMLiveCDNPlayerItem *_mainCdnPlayerItem;
    MMLiveCommentDataFetchEngne *_commentFetchEngine;
    NSArray *_commentPermissions;
    MMLiveCommentUIStateInfo *_uiStateInfo;
    NSMutableDictionary *_currentCommentVMStateDic;
    NSMutableArray *_connectMicUserInfoListFromAnchorSEIMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *connectMicUserInfoListFromAnchorSEIMsg; // @synthesize connectMicUserInfoListFromAnchorSEIMsg=_connectMicUserInfoListFromAnchorSEIMsg;
@property(retain, nonatomic) NSMutableDictionary *currentCommentVMStateDic; // @synthesize currentCommentVMStateDic=_currentCommentVMStateDic;
@property(nonatomic) _Bool isAllowShowAudioRoomAnchorLocation; // @synthesize isAllowShowAudioRoomAnchorLocation=_isAllowShowAudioRoomAnchorLocation;
@property(nonatomic) _Bool isShowUserLocationAvailable; // @synthesize isShowUserLocationAvailable=_isShowUserLocationAvailable;
@property(retain, nonatomic) MMLiveCommentUIStateInfo *uiStateInfo; // @synthesize uiStateInfo=_uiStateInfo;
@property(retain, nonatomic) NSArray *commentPermissions; // @synthesize commentPermissions=_commentPermissions;
@property(retain, nonatomic) MMLiveCommentDataFetchEngne *commentFetchEngine; // @synthesize commentFetchEngine=_commentFetchEngine;
@property(retain, nonatomic) MMLiveCDNPlayerItem *mainCdnPlayerItem; // @synthesize mainCdnPlayerItem=_mainCdnPlayerItem;
@property(retain, nonatomic) NSString *disableCommentMsg; // @synthesize disableCommentMsg=_disableCommentMsg;
@property(nonatomic) _Bool isEnableComment; // @synthesize isEnableComment=_isEnableComment;
@property(nonatomic) __weak id <MMLiveBaseTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isInLive; // @synthesize isInLive=_isInLive;
@property(nonatomic) _Bool isLiveClosed; // @synthesize isLiveClosed=_isLiveClosed;
@property(retain, nonatomic) MMFinderLiveKTVBox *ktvBox; // @synthesize ktvBox=_ktvBox;
@property(nonatomic) _Bool hasSetAudioRoomSceneBySEI; // @synthesize hasSetAudioRoomSceneBySEI=_hasSetAudioRoomSceneBySEI;
@property(retain, nonatomic) MMLiveAudioRoomSEIConnectMicMsg *audioRoomSeiMicMsgInfo; // @synthesize audioRoomSeiMicMsgInfo=_audioRoomSeiMicMsgInfo;
@property(nonatomic) unsigned long long audioRoomScene; // @synthesize audioRoomScene=_audioRoomScene;
@property(nonatomic) unsigned long long localAudioModeState; // @synthesize localAudioModeState=_localAudioModeState;
@property(nonatomic) _Bool isPureAudioMode; // @synthesize isPureAudioMode=_isPureAudioMode;
@property(retain, nonatomic) MMLiveSEIConnectMicMsg *seiMicMsgInfo; // @synthesize seiMicMsgInfo=_seiMicMsgInfo;
@property(readonly, nonatomic) NSArray *seiConnectMicUserInfoList; // @synthesize seiConnectMicUserInfoList=_seiConnectMicUserInfoList;
@property(retain, nonatomic) LiveSdkChannelParams *lastLiveChannelParams; // @synthesize lastLiveChannelParams=_lastLiveChannelParams;
@property(retain, nonatomic) LiveSdkInfo *liveSdkInfo; // @synthesize liveSdkInfo=_liveSdkInfo;
@property(nonatomic) _Bool isViewCapturing; // @synthesize isViewCapturing=_isViewCapturing;
@property(nonatomic) _Bool isLivePlayingViaCdn; // @synthesize isLivePlayingViaCdn=_isLivePlayingViaCdn;
@property(readonly, nonatomic) _Bool isReplay; // @synthesize isReplay=_isReplay;
@property(retain, nonatomic) MMLiveAnchorStatusItem *anchorStatusItem; // @synthesize anchorStatusItem=_anchorStatusItem;
@property(retain, nonatomic) MMLiveCommentDataRefreshConfig *commentRefreshConfig; // @synthesize commentRefreshConfig=_commentRefreshConfig;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) long long roleType; // @synthesize roleType=_roleType;
@property(retain, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
- (unsigned int)getKtvScene;
@property(readonly, nonatomic) MMFinderLiveKTVStateInfo *ktvStateInfo;
@property(readonly, nonatomic) MMFinderLiveKTVManageLogic *ktvManageLogic;
- (id)createKTVBox;
- (void)createKTVModels;
- (void)onKTVModeChanged;
- (_Bool)canShowAnchorLocationInConnectMicScene;
- (_Bool)canShowLocationInConnectMicScene;
- (void)notifyAudioRoomSEIConnectMicMsgUpdated:(_Bool)arg1;
- (_Bool)checkAndNotifyAudioRoomSEIConnectMicMsg:(id)arg1;
- (_Bool)checkAndNotifySEIConnectMicMsg:(id)arg1;
- (_Bool)handleSynchronizedSEIAnchoInfoEvent:(id)arg1 anchorSeiStatus:(unsigned int *)arg2 audioRoomSceneValue:(unsigned int *)arg3;
- (void)checkAndParseConnectMicDataFromCommonSEIMsg:(id)arg1;
@property(readonly, nonatomic) _Bool isKTVMode;
@property(readonly, nonatomic) _Bool isAudioRoomMode;
@property(readonly, nonatomic) _Bool isOrdinaryLiveMode;
@property(readonly, nonatomic) _Bool isPureAudioDisplayMode;
@property(readonly, nonatomic) _Bool isAudienceLocalAudioMode;
@property(readonly, nonatomic) _Bool isInLocalAudioModeWaitState;
@property(readonly, nonatomic) NSString *anchorSdkUserId;
- (void)setLiveId:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long liveId;
@property(readonly, nonatomic) _Bool isSecondaryDeviceAnchorOrAssistant;
- (void)updateAnchorStatus:(id)arg1;
- (_Bool)checkTaskType:(Class)arg1;
@property(readonly, nonatomic) _Bool isLiveAudienceDisplayMode;
@property(readonly, nonatomic) _Bool isLiveAnchorMiniGamePluginMode;
@property(readonly, nonatomic) _Bool isLiveAnchorMainDisplayMode;
@property(readonly, nonatomic) _Bool isNormalAudience;
@property(readonly, nonatomic) _Bool isAnchorOrAssistant;
@property(readonly, nonatomic) _Bool isAssistant;
@property(readonly, nonatomic) _Bool isAudience;
@property(readonly, nonatomic) _Bool isAnchor;
@property(readonly, nonatomic) unsigned long long currentLiveScene;
- (id)getCommentVMStateWithBoxId:(id)arg1;
- (void)updateEnableComment:(_Bool)arg1 toastMsg:(id)arg2;
- (void)updateCommentRefreshControl;
- (id)initWithRoleType:(long long)arg1 liveId:(unsigned long long)arg2 andAnchorId:(id)arg3;
- (id)createNewCommentFetchEngine;
- (id)createNewTaskId;

@end


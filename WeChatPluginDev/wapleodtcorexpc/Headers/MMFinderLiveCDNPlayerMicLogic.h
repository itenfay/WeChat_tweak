//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveConnectMicUsersInfo, MMLiveAudioRoomSEIConnectMicMsg, MMLiveSEIConnectMicMsg, NSMutableArray, NSMutableDictionary, NSString, WCFinderDataItem;
@protocol MMFinderLiveCDNPlayerMicLogicDelegate;

@interface MMFinderLiveCDNPlayerMicLogic : NSObject
{
    _Bool _isVideoLandscapeMode;
    _Bool _canUseNewMicSEI;
    _Bool _isInCgiProcess;
    _Bool _shouldGetMicUsersAfterCgiProcess;
    _Bool _hasUnknownMicUser;
    _Bool _isFitRenderMode;
    int _commentScene;
    unsigned int _cgiRequestNextTime;
    id <MMFinderLiveCDNPlayerMicLogicDelegate> _actionDelegate;
    WCFinderDataItem *_finderDataItem;
    NSString *_anchorSdkUserId;
    MMFinderLiveConnectMicUsersInfo *_allConnectedMicUsersInfo;
    unsigned long long _audioRoomScene;
    NSMutableDictionary *_lastMicUsersDicFromServer;
    NSMutableArray *_lastConnectMicUserInfoListFromSEI;
    MMLiveSEIConnectMicMsg *_seiMicMsgInfo;
    NSMutableDictionary *_isOtherRoomMicAnchorAudioModeDict;
    MMLiveAudioRoomSEIConnectMicMsg *_audioRoomSeiMicMsgInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveAudioRoomSEIConnectMicMsg *audioRoomSeiMicMsgInfo; // @synthesize audioRoomSeiMicMsgInfo=_audioRoomSeiMicMsgInfo;
@property(nonatomic) _Bool isFitRenderMode; // @synthesize isFitRenderMode=_isFitRenderMode;
@property(retain, nonatomic) NSMutableDictionary *isOtherRoomMicAnchorAudioModeDict; // @synthesize isOtherRoomMicAnchorAudioModeDict=_isOtherRoomMicAnchorAudioModeDict;
@property(retain, nonatomic) MMLiveSEIConnectMicMsg *seiMicMsgInfo; // @synthesize seiMicMsgInfo=_seiMicMsgInfo;
@property(nonatomic) _Bool hasUnknownMicUser; // @synthesize hasUnknownMicUser=_hasUnknownMicUser;
@property(nonatomic) unsigned int cgiRequestNextTime; // @synthesize cgiRequestNextTime=_cgiRequestNextTime;
@property(nonatomic) _Bool shouldGetMicUsersAfterCgiProcess; // @synthesize shouldGetMicUsersAfterCgiProcess=_shouldGetMicUsersAfterCgiProcess;
@property(nonatomic) _Bool isInCgiProcess; // @synthesize isInCgiProcess=_isInCgiProcess;
@property(retain, nonatomic) NSMutableArray *lastConnectMicUserInfoListFromSEI; // @synthesize lastConnectMicUserInfoListFromSEI=_lastConnectMicUserInfoListFromSEI;
@property(retain, nonatomic) NSMutableDictionary *lastMicUsersDicFromServer; // @synthesize lastMicUsersDicFromServer=_lastMicUsersDicFromServer;
@property(nonatomic) unsigned long long audioRoomScene; // @synthesize audioRoomScene=_audioRoomScene;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) MMFinderLiveConnectMicUsersInfo *allConnectedMicUsersInfo; // @synthesize allConnectedMicUsersInfo=_allConnectedMicUsersInfo;
@property(retain, nonatomic) NSString *anchorSdkUserId; // @synthesize anchorSdkUserId=_anchorSdkUserId;
@property(nonatomic) _Bool canUseNewMicSEI; // @synthesize canUseNewMicSEI=_canUseNewMicSEI;
@property(nonatomic) _Bool isVideoLandscapeMode; // @synthesize isVideoLandscapeMode=_isVideoLandscapeMode;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;
@property(nonatomic) __weak id <MMFinderLiveCDNPlayerMicLogicDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)updateAudioRoomListTalkingStatusWithSeiMicMsg:(id)arg1;
- (_Bool)receiveAudioRoomSeiMicMsg:(id)arg1;
- (void)updateAudioRoomScene:(unsigned long long)arg1;
- (void)clearSeiData;
- (void)updateIsFitRenderMode:(_Bool)arg1;
- (id)updateOtherMicAnchorUserIsAudioMode:(_Bool)arg1 sdkUserId:(id)arg2;
- (_Bool)receiveSeiConnectMicMsg:(id)arg1;
- (_Bool)receiveOldVersionSeiMsg:(id)arg1;
- (void)checkAndGetMicUsersAfterDelay:(_Bool)arg1;
- (void)wrapTryGetMicUsersFromServer:(id)arg1;
- (void)tryGetMicUsersFromServer:(_Bool)arg1 getExtraAutoSwipeInfo:(_Bool)arg2;
- (void)checkAndUpdateAudioRoomMicUsersList;
- (void)checkAndUpdateConnectMicUsersList;
- (void)checkAndUpdateConnectMicUsersListWithOldVersionSeiMsg;
- (void)clearMicUsersListWithForceClearFlag:(_Bool)arg1;
- (void)clearMicUsersList;
- (void)updateHasUnknownMicUserAfterClearList;
- (void)clearMicUsersInfoOnlyWithForceClearFlag:(_Bool)arg1;
- (void)clearMicUsersInfoOnly;
- (void)clearLastMicUsersDicFromServer;
- (void)handleMicPkInfo:(id)arg1 withMicUserDictFromServer:(id)arg2;
- (void)handleNewPkMicInfos:(id)arg1 withMicUserDictFromServer:(id)arg2;
- (void)checkLiveMicInfo:(id)arg1;
@property(readonly, nonatomic) _Bool isAudioRoomMode;
- (id)initWithFinderDataItem:(id)arg1 commentScene:(int)arg2;

@end


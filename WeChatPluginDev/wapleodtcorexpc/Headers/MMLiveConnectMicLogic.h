//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveOperationView, MMLiveTaskId, NSString;
@protocol MMLiveConnectMicActionDelegate;

@interface MMLiveConnectMicLogic : NSObject
{
    _Bool _networkReachable;
    id <MMLiveConnectMicActionDelegate> _actionDelegate;
    MMLiveTaskId *_taskId;
    MMLiveOperationView *_operationView;
    NSString *_meetId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool networkReachable; // @synthesize networkReachable=_networkReachable;
@property(retain, nonatomic) NSString *meetId; // @synthesize meetId=_meetId;
@property(retain, nonatomic) MMLiveOperationView *operationView; // @synthesize operationView=_operationView;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMLiveConnectMicActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)handleAudioRoomSEIMicMsgInfoUpdated:(id)arg1 listChanged:(_Bool)arg2;
- (void)handleAudioRoomSceneChangedTo:(unsigned long long)arg1;
- (void)handleConnectMicSettingUpdatedChanges:(id)arg1;
- (void)showErrorToastWithText:(id)arg1 shouldVibrate:(_Bool)arg2;
- (void)showErrorToastWithText:(id)arg1;
- (void)showToastWithTitle:(id)arg1 shouldVibrate:(_Bool)arg2;
- (void)showToastWithTitle:(id)arg1;
- (void)enterForeground;
- (void)enterBackground;
- (_Bool)audienceShouldTryStopConnectMicWhenLiveIsPaused;
- (_Bool)tryStopConnectMic;
- (void)connectMicAction;
- (void)connectMicActionForAudience;
- (void)handleIsViewCapturingChangedTo:(_Bool)arg1;
- (void)handleAudienceLocalAudioModeChangedTo:(_Bool)arg1;
- (void)handleMicDidReady;
- (void)handleSendFirstLocalAudioFrame;
- (void)handlePlayingViaCdnChanged:(_Bool)arg1;
- (void)handleFirstShowCdnPlayerView;
- (void)updateOtherConnectMicAnchor:(id)arg1 anchorSeiStatus:(unsigned int)arg2 anchorSEIInfo:(id)arg3;
- (void)handleAllUserVoiceVolume:(id)arg1 totalVolume:(long long)arg2;
- (void)handleSEIMicTalkingUsersListUpdated:(id)arg1;
- (void)handleSEIMicMsgInfoUpdated:(id)arg1 listChanged:(_Bool)arg2;
- (void)handleSEIConnectMicUserInfoListUpdated:(id)arg1 listChanged:(_Bool)arg2;
- (void)handleConnectToOtherRoomResult:(_Bool)arg1 userId:(id)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (void)handleRemoteUserLeaveRoomWithSdkUserId:(id)arg1 reason:(long long)arg2;
- (void)handleRemoteUserEnterRoomWithSdkUserId:(id)arg1;
- (void)handleUser:(id)arg1 videoAvailable:(_Bool)arg2;
- (void)handleUser:(id)arg1 audioAvailable:(_Bool)arg2;
- (void)onTrtcSwitchRoleError:(int)arg1 errMsg:(id)arg2;
- (void)onTrtcSwitchRoleFinished;
- (id)initWithTaskId:(id)arg1;

@end


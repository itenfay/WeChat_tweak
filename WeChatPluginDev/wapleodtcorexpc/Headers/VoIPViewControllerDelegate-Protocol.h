//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSArray, NSMutableDictionary, NSRecursiveLock, NSString, UIImage, UIView, VOIPVideoRender, VoIPViewController, XImageViewRenderer;
@protocol AVVideoDeviceDelegate><NSObject, IVOIPVideoDeviceDelegate;

@protocol VoIPViewControllerDelegate <NSObject>
+ (unsigned int)getVoIPType;
- (void)checkIfCanAcceptAndStartAudio;
- (_Bool)shouldBluetoothStartEarlier;
- (int)getRemoteVideoRatio;
- (void)onVideoSessionRecvFrameAtFirst;
- (void)onVideoSessionStartCompleteAtFirst;
- (_Bool)isHavingIlinkCall;
- (NSMutableDictionary *)getLowVersionMembers;
- (unsigned long long)getMemberCountLimitForSelectContacts;
- (void)tryAddMembersForIlink:(NSArray *)arg1;
- (void)addScrollingString:(NSString *)arg1 withDisplayTime:(double)arg2;
- (unsigned int)getRemoteUserIlinkSupportStatus:(NSString *)arg1;
- (void)setRemoteViewRenderer:(XImageViewRenderer *)arg1;
- (int)getUse1080pSharpen;
- (int)getUseSharpenFilterConfig;
- (XImageViewRenderer *)getLocalViewRenderer;
- (void)setLocalViewRenderer:(XImageViewRenderer *)arg1;
- (_Bool)getIfEnableRCI;
- (_Bool)getIfThisTalkIlink;
- (void)VideoSwitchToVoiceModeNotPushStatus;
- (_Bool)getIsVoiceMode;
- (int)getModeActionStatus;
- (_Bool)getLocalVideoClosed;
- (_Bool)getRemoteVideoClosed;
- (void)HangupWithReason:(int)arg1 ifIsConnect:(_Bool)arg2;
- (void)HangupWithReason:(int)arg1;
- (void)Reject:(CContact *)arg1 withRoomId:(unsigned long long)arg2 andKey:(long long)arg3;
- (void)AcceptVideo:(CContact *)arg1 withRoomId:(unsigned long long)arg2 andKey:(long long)arg3 forceToVoice:(_Bool)arg4;
- (void)AcceptAudio:(CContact *)arg1 withRoomId:(unsigned long long)arg2 andKey:(long long)arg3;
- (void)CancelCall:(int)arg1;
- (void)VideoCall:(CContact *)arg1 withCallType:(unsigned int)arg2;
- (void)AudioCall:(CContact *)arg1 withCallType:(unsigned int)arg2;
- (NSString *)getRemoteSourceDevice;
- (unsigned int)getRemoteWxVer;
- (long long)getVideoOrientation;
- (UIView *)getInputVideoRenderView;
- (void)changeInputRenderFrame:(struct CGRect)arg1;
- (void)setInputVideoRender:(VOIPVideoRender *)arg1;
- (NSRecursiveLock *)getOutputVideoRenderLock;
- (NSRecursiveLock *)getInputVideoRenderLock;
- (UIView *)getOutputVideoRenderView;
- (void)setOutputVideoRender:(VOIPVideoRender *)arg1;
- (void)VideoStatusChange:(_Bool)arg1 update:(_Bool)arg2 notify:(_Bool)arg3;
- (void)changeRenderFrame:(struct CGRect)arg1;
- (void)resetCameraDevice;
- (void)startVideoDeviceSession;
- (void)StartLocalVideo;
- (NSString *)getRemoteUserName;
- (void)BeCanceled;
- (void)StopSession;
- (void)reportVoipIncomingCallLogWithActionCode:(unsigned int)arg1;
- (void)setVideoDeviceDelegate:(id <IVOIPVideoDeviceDelegate>)arg1;
- (void)voipAppGotoBackground;
- (void)voipAppBecomeActive;
- (_Bool)getIsMinimizeView;
- (_Bool)getIsCameraFront;
- (_Bool)isRemoteUsePhone;
- (void)setVirtualBackground:(_Bool)arg1 isFront:(_Bool)arg2;
- (void)FlipCamera;
- (void)setIsUserAbort:(unsigned int)arg1;
- (_Bool)getIsTalked;
- (unsigned int)getInviteId;
- (unsigned long long)getDangerRoomKey;
- (unsigned long long)getDangerRoomId;
- (unsigned int)getRoomType;
- (long long)getRoomKey;
- (unsigned long long)getRoomId;
- (_Bool)getIsDangerTalk;
- (NSString *)getDangerUserTips;
- (void)SetMicroPhoneMute:(_Bool)arg1;
- (void)setVideoDelegate:(id <AVVideoDeviceDelegate><NSObject>)arg1;
- (unsigned int)getVoIPType;
- (void)StartNetDetect;
- (void)StopTalk;
- (void)ReportVoIPButtonAction:(int)arg1 dialStatus:(int)arg2 audioData:(NSString *)arg3;
- (void)ReportVoIPButtonStatus:(NSString *)arg1 dialStatus:(int)arg2 audioData:(NSString *)arg3 actionResult:(NSString *)arg4;
- (void)videoVoipViewDidClose:(VoIPViewController *)arg1;
- (void)videoVoipViewDidSwitchToTalk;
- (void)videoVoipViewDidLoadView:(VoIPViewController *)arg1;
- (void)onVideoVoipViewMinCardModeChangeToMinimizeMode;
- (_Bool)onVideoVoipViewRequestMinimizeStatus;
- (void)onVideoVoipViewSlipToMinimizeMode:(UIImage *)arg1;
- (void)onVideoVoipViewChangeToMinimizeMode;
- (void)onVideoVoipViewCloseWithCompletionNoAnimation:(void (^)(void))arg1 delay:(float)arg2;
- (void)onVideoVoipViewCloseWithCompletion:(void (^)(void))arg1 delay:(float)arg2;
@end


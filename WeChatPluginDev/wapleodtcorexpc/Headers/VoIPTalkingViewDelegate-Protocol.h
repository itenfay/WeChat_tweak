//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSRecursiveLock, NSString, UIView, VOIPVideoRender, VoIPTalkingView, XImageViewRenderer;
@protocol AVVideoDeviceDelegate><NSObject, IVOIPVideoDeviceDelegate;

@protocol VoIPTalkingViewDelegate <NSObject>
- (int)getRemoteVideoRatio;
- (void)onShowVideoHint;
- (void)onAddMemberPageForIlink;
- (void)addScrollingStringOutsideVoIP:(NSString *)arg1 withDisplayTime:(double)arg2;
- (unsigned int)getRemoteUserIlinkSupportStatus:(NSString *)arg1;
- (void)VideoSwitchToVoiceModeNotPushStatus;
- (_Bool)getIsVoiceMode;
- (int)getModeActionStatus;
- (_Bool)getLocalVideoClosed;
- (_Bool)getRemoteVideoClosed;
- (void)setLocalViewRenderer:(XImageViewRenderer *)arg1;
- (void)setRemoteViewRenderer:(XImageViewRenderer *)arg1;
- (int)getUse1080pSharpen;
- (int)getUseSharpenFilterConfig;
- (_Bool)getIfEnableRCI;
- (NSString *)getRemoteSourceDevice;
- (unsigned int)getRemoteWxVer;
- (long long)getVideoOrientation;
- (_Bool)getIfThisTalkIlink;
- (void)VideoStatusChange:(_Bool)arg1 update:(_Bool)arg2 notify:(_Bool)arg3;
- (UIView *)getInputVideoRenderView;
- (void)changeInputRenderFrame:(struct CGRect)arg1;
- (void)setInputVideoRender:(VOIPVideoRender *)arg1;
- (NSRecursiveLock *)getOutputVideoRenderLock;
- (NSRecursiveLock *)getInputVideoRenderLock;
- (UIView *)getOutputVideoRenderView;
- (void)changeRenderFrame:(struct CGRect)arg1;
- (void)setOutputVideoRender:(VOIPVideoRender *)arg1;
- (void)HangupWithReason:(int)arg1;
- (void)setVideoDeviceDelegate:(id <IVOIPVideoDeviceDelegate>)arg1;
- (void)voipAppGotoBackground;
- (void)voipAppBecomeActive;
- (void)setVideoDelegate:(id <AVVideoDeviceDelegate><NSObject>)arg1;
- (_Bool)getIsMinimizeView;
- (_Bool)getIsCameraFront;
- (_Bool)isRemoteUsePhone;
- (void)setVirtualBackground:(_Bool)arg1 isFront:(_Bool)arg2;
- (unsigned long long)getDangerRoomKey;
- (unsigned long long)getDangerRoomId;
- (NSString *)getDangerUserTips;
- (long long)getRoomKey;
- (unsigned long long)getRoomId;
- (unsigned int)getRoomType;
- (void)FlipCamera;
- (void)setIsUserAbort:(unsigned int)arg1;
- (_Bool)getIsTalked;
- (void)SetMicroPhoneMute:(_Bool)arg1;
- (void)ReportVoIPButtonStatus:(NSString *)arg1 dialStatus:(int)arg2 audioData:(NSString *)arg3 actionResult:(NSString *)arg4;
- (void)endCameraInterruption;
- (void)startCameraInterruption;

@optional
- (void)onVoIPTalkingView:(VoIPTalkingView *)arg1 durationTimerUpdated:(NSString *)arg2;
- (int)videoVoipTalkingViewRecentStatusUserSexType;
- (id)videoVoipTalkingViewRecentStatusModel;
- (NSString *)videoVoipTalkingViewRecentStatusUserName;
- (_Bool)isVideoVoipTalkingViewRecentStatusEnable;
- (_Bool)onVideoVoipTalkingViewIsVoipTalking;
- (_Bool)onVideoVoipTalkingViewRequestMinimizeStatus;
- (_Bool)hasVideoVoipTalkingViewClickChangeToAudioMode;
- (void)onVideoVoipTalkingViewSwitchToSmall;
- (_Bool)isVideoVoipTalkingViewInitWithVideoMode;
- (void)onVideoVoipTalkingViewHangUp;
- (void)onVideoVoipTalkingViewEndCall;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface VQMManager : NSObject
{
    double _lastBackgroundRemainingTime;
    double _lastCheckBackgroundRemainingTimestamp;
}

+ (id)sharedInstance;
+ (void)launch;
@property(nonatomic) double lastCheckBackgroundRemainingTimestamp; // @synthesize lastCheckBackgroundRemainingTimestamp=_lastCheckBackgroundRemainingTimestamp;
@property(nonatomic) double lastBackgroundRemainingTime; // @synthesize lastBackgroundRemainingTime=_lastBackgroundRemainingTime;
- (void)monoServiceMsgMgrWillHandleMsg:(id)arg1 withSetting:(id)arg2 shouldShow:(_Bool)arg3;
- (void)voIPilinkMgrDidReceiveRemoteFrameAtFirst;
- (void)voIPilinkMgrDidReceiveLocalFrameAtFirst;
- (void)voIPilinkMgrDidReceiveRemoteFrameYUVData:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)voIPilinkMgrDidReceiveLocalFramePixelBuffer:(struct __CVBuffer *)arg1;
- (_Bool)shouldIgnoreDefaultRender;
- (void)VoIPAudioServiceDidPrewarmAudioUnit;
- (void)VoIPAudioServiceWillPrewarmAudioUnit;
- (void)voIPAudioServiceDidReceiveAudioUnitRecordingCallbackFirst:(id)arg1;
- (void)voIPAudioServiceDidReceiveAudioUnitPlaybackCallbackFirst:(id)arg1;
- (void)voIPAudioServiceDidStartAudioUnit;
- (void)voIPAudioServiceWillStartAudioUnit;
- (void)voIPAudioServiceInterruptionEnd;
- (void)voIPAudioServiceInterruptionBegin;
- (void)voIPAudioServiceWillClose;
- (void)OnBeginTalk:(id)arg1;
- (void)OnCall:(id)arg1 ErrNo:(int)arg2;
- (void)onVoipMaximized;
- (void)onVoipAccept:(id)arg1;
- (void)UIManagerDidVideoSessionRecvFrameAtFirst;
- (void)UIManagerDidVideoSessionStartCompleteAtFirst;
- (void)UIManagerDidUIShowAtApplcationStateActiveIfIsCaller:(_Bool)arg1;
- (void)UIManagerDidReceiverCardExtendAtFirst;
- (void)UIManagerDidSpeakerSetupedFirstAfterBeginTalk;
- (void)UIManagerDidCloseCompletely;
- (void)UIManagerWillQuitWindow;
- (void)onSetIfIsIlink:(_Bool)arg1;
- (void)UIManagerWillOpenWindowWithContact:(id)arg1 isCaller:(_Bool)arg2 monoMsg:(id)arg3 startInApp:(_Bool)arg4 isEarMode:(_Bool)arg5 isAudioMode:(_Bool)arg6 from:(unsigned long long)arg7 isIlink:(_Bool)arg8;
- (void)onMatrixPerfWarning:(id)arg1;
- (void)onCarPlayDisconnected;
- (void)onCarPlayConnected;
- (void)VoIPPIPServiceDidRemoteCaptureSuspend;
- (void)VoIPPIPServiceOnRestoreUserInterfaceForPictureInPictureStop;
- (void)VoIPPIPServiceEnterForeground:(_Bool)arg1;
- (void)VoIPPIPServiceDidStopPictureInPicture;
- (void)VoIPPIPServiceDidStartPictureInPicture;
- (void)VoIPPIPServiceWillStartPictureInPicture;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (id)init;
- (void)storeRoomInfoWithRoomID:(unsigned long long)arg1 roomKey:(long long)arg2;
- (void)checkBackgroundRemainingTime;
- (void)clearFlags;
- (void)updateMatrixInfoBits:(int)arg1;
- (void)didReport:(id)arg1;
- (void)didUpdateProfileWxconf:(id)arg1 toProfile:(id)arg2;
- (void)didUpdateProfile:(int)arg1 bytesFromProfile:(id)arg2 bytesToProfile:(id)arg3;
- (void)didPoll;
- (unsigned long long)identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


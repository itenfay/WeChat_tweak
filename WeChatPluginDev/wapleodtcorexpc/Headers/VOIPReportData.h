//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VOIPReportData : NSObject
{
}

+ (void)dataReportAppSettingsWithVoipMonoMsg:(id)arg1;
+ (void)ReportVoipHangUpSessionWithRoomId:(unsigned long long)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3 WithUserActionType:(int)arg4;
+ (void)ReportVoipWhenSessionAnimationDisappearWithRoomId:(unsigned long long)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3 WithUserActionType:(int)arg4;
+ (void)ReportVoipGotNotifyWithRoomId:(unsigned long long)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3;
+ (void)ReportReceiveCallUseCallkit;
+ (void)ReportCalledActionWithRoomId:(unsigned long long)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3 WithUserActionType:(int)arg4;
+ (void)ReportPushUIReportWithRoomId:(unsigned long long)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3 WithAckStatus:(int)arg4 WithNetType:(int)arg5 WithTimeStamp:(unsigned long long)arg6;
+ (void)ReportGetRoomInfoWithRoomId:(unsigned long long)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3 WithRespType:(unsigned int)arg4 WithTimeStamp:(unsigned long long)arg5;
+ (void)ReportDataNotifyWithRoomId:(unsigned long long)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3 WithTimeStamp:(unsigned long long)arg4;
+ (void)ReportVoipTalkingWithRoomId:(unsigned long long)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3 WithRoomMemberId:(int)arg4 WithIsTalkingStatus:(int)arg5;
+ (void)ReportVoipCancelInviteWithRoomId:(unsigned long long)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3 WithCancelInvite:(int)arg4 WithCancelTime:(int)arg5 WithTimeStamp:(unsigned long long)arg6;
+ (void)ReportVoipGotRemoteStatusWithRoomId:(unsigned long long)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3 WithRemoteStatus:(int)arg4;
+ (void)ReportVoipStartCallWithRoomId:(unsigned long long)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3 WithStartCallStatus:(int)arg4 WithNetType:(int)arg5 WithResponseTs:(unsigned int)arg6;
+ (void)ReportAudioEntranceMute:(_Bool)arg1;
+ (void)ReportVideoEntranceMute:(_Bool)arg1;
+ (void)ReportVoipActionClickBigPreview;
+ (void)ReportVoipActionClickSmallPreview;
+ (void)ReportVoipActionDragSmallPreview;
+ (void)ReportVoipActionSwitchCamera;
+ (void)ReportSwitchToVoiceAfterAcceptWithRoomId:(unsigned long long)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3;
+ (void)ReportSwitchToVoiceBeforeAcceptWithRoomId:(unsigned long long)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3;
+ (void)ReportSwitchToVoiceBeforeRemoteAcceptWithRoomId:(unsigned long long)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3;
+ (void)ReportSelectVoiceVoipFriendFromPlus;
+ (void)ReportSelectVoipFriendFromPlus;
+ (void)ReportAudioCallFromProfile;
+ (void)ReportAudioCallFromPlugin;
+ (void)ReportAudioCallFromMessageOver;
+ (void)ReportAudioCallFromMessageInterrpt;
+ (void)ReportAudioCallFromMessageNotConnect;
+ (void)ReportAudioCallFromPlus;
+ (void)ReportVideoCallFromProfile;
+ (void)ReportVideoCallFromPlugin;
+ (void)ReportVideoCallFromMessageOver;
+ (void)ReportVideoCallFromMessageInterrpt;
+ (void)ReportVideoCallFromMessageNotConnect;
+ (void)ReportVideoCallFromPlus;
+ (void)ReportVoipSoundActionInitType:(unsigned int)arg1 Mute:(_Bool)arg2;
+ (void)ReportVoipSoundActionInitType:(unsigned int)arg1 HandsFree:(_Bool)arg2;
+ (void)ReportVoipActionType:(unsigned int)arg1;
+ (void)ReportSwitchToVoiceAcceptWithRoomId:(unsigned long long)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3 WithScene:(unsigned int)arg4 WithUserType:(int)arg5;
+ (void)ReportVoipSelectFriendScene:(unsigned int)arg1 CallType:(unsigned int)arg2;
+ (void)ReportVoipCallFromScene:(unsigned int)arg1 CallType:(unsigned int)arg2 WordingType:(unsigned int)arg3;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSString, VoipMonoMsg;

@protocol VoipUIManagerExt <NSObject>

@optional
- (void)VoIPMPUpdateSpeakerButtonStatus:(int)arg1 name:(NSString *)arg2 hasOutput:(_Bool)arg3;
- (void)UIManagerDidVideoSessionRecvFrameAtFirst;
- (void)UIManagerDidVideoSessionStartCompleteAtFirst;
- (void)UIManagerDidUIShowAtApplcationStateActiveIfIsCaller:(_Bool)arg1;
- (void)UIManagerDidReceiverCardExtendAtFirst;
- (void)UIManagerDidSpeakerSetupedFirstAfterBeginTalk;
- (void)onSupportClickAddMembersBtn;
- (void)onSetIfIsIlink:(_Bool)arg1;
- (void)showAirplayLoadingState:(_Bool)arg1;
- (void)updateSpeakerButtonStatus:(NSString *)arg1 hasExtenalOutput:(_Bool)arg2;
- (void)UIManagerWindowWillExtendFromCollapse;
- (void)foldupRecentStatus;
- (void)UIManagerOnNotifyBadNetwork;
- (void)UIManagerDidCloseCompletely;
- (void)UIManagerWillQuitWindow;
- (void)UIManagerDidExtendWindow;
- (void)UIManagerWillExtendWindow;
- (void)UIManagerDidCollapseWindow;
- (void)UIManagerWillCollapseWindow;
- (void)UIManagerDidClose;
- (void)UIManagerWillSwitchToMinization;
- (void)UIManagerDidSwitchToTalk;
- (void)UIManagerDidOpenWindowWithContact:(CContact *)arg1 isCaller:(_Bool)arg2 startInApp:(_Bool)arg3 isEarMode:(_Bool)arg4 isAudioMode:(_Bool)arg5 from:(unsigned long long)arg6;
- (void)UIManagerWillOpenWindowWithContact:(CContact *)arg1 isCaller:(_Bool)arg2 monoMsg:(VoipMonoMsg *)arg3 startInApp:(_Bool)arg4 isEarMode:(_Bool)arg5 isAudioMode:(_Bool)arg6 from:(unsigned long long)arg7 isIlink:(_Bool)arg8;
- (void)onVoipFailToAddMinimizeTask;
- (void)onVoipWarningMsgArrived;
- (void)onVoipAudioDevicePlugin;
- (void)onVoipAudioDeviceUnPlugin;
@end


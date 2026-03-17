//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, VOIPVideoToVoiceView;

@protocol VOIPVideoToVoiceViewDelegate <NSObject>
- (void)onAddMemberPageForIlink;
- (void)addScrollingStringOutsideVoIP:(NSString *)arg1 withDisplayTime:(double)arg2;
- (unsigned int)getRemoteUserIlinkSupportStatus:(NSString *)arg1;
- (_Bool)getIsVoiceMode;
- (_Bool)getIfThisTalkIlink;
- (void)ReportVoIPButtonStatus:(NSString *)arg1 dialStatus:(int)arg2 audioData:(NSString *)arg3 actionResult:(NSString *)arg4;

@optional
- (void)onVideoToVoiceView:(VOIPVideoToVoiceView *)arg1 durationTimerUpdated:(NSString *)arg2;
- (int)videoToVoiceViewRecentStatusUserSexType;
- (id)videoToVoiceViewRecentStatusModel;
- (NSString *)videoToVoiceViewRecentStatusUserName;
- (_Bool)isVideoToVoiceViewRecentStatusEnable;
- (_Bool)getVoiceViewSpeakerMode;
- (_Bool)onVoiceViewIsVoipTalking;
- (void)onClickMinimizeButton;
- (_Bool)isInitWithVideoMode;
- (void)onVoiceViewCloseSpeaker;
- (void)onVoiceViewOpenSpeaker;
- (void)onVoiceViewCloseMic;
- (void)onVoiceViewOpenMic;
- (void)onVoiceViewHangup;
@end


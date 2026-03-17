//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AudioRecorderUserData, CMessageWrap, NSError, NSMutableArray, NSString;

@protocol IAudioSenderExt

@optional
- (void)OnRecordVoiceChangeWithUserData:(AudioRecorderUserData *)arg1;
- (void)OnVoiceTransTimeout:(unsigned int)arg1;
- (void)OnVoiceTransEnd:(unsigned int)arg1 VoiceIds:(NSMutableArray *)arg2;
- (void)OnVoiceTransResultChange:(NSString *)arg1 InputId:(unsigned int)arg2;
- (void)OnSendError:(CMessageWrap *)arg1 ErrNo:(int)arg2;
- (void)OnRecordStartFail:(NSError *)arg1;
- (void)OnEndRecording:(unsigned int)arg1;
- (void)OnBeginRecording:(unsigned int)arg1 ErrNo:(int)arg2;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
@end


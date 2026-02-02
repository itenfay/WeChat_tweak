//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap;

@interface PlayingController
{
    _Bool m_bPlaying;
    unsigned int m_uiMesLocalID;
    CMessageWrap *m_msgWrap;
    _Bool _shouldAsyncStartPlayer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldAsyncStartPlayer; // @synthesize shouldAsyncStartPlayer=_shouldAsyncStartPlayer;
- (void)dealloc;
- (void)Reset;
- (void)OnEarTip;
- (void)OnBeginPlaying:(id)arg1 success:(_Bool)arg2;
- (void)OnEndPlaying:(id)arg1 isForceStop:(_Bool)arg2;
- (void)reportStopVoice:(int)arg1;
- (void)OnSysCallState:(int)arg1 andCallId:(id)arg2;
- (void)onResignActive;
- (void)StopPlayMessageWithUsrName:(id)arg1;
- (void)StopPlayMessage:(id)arg1;
- (void)SeekVoiceMsg:(id)arg1 toTime:(unsigned int)arg2;
- (void)StartPlayMessage:(id)arg1 Resume:(_Bool)arg2;
- (id)currentPlayingMsg;
- (_Bool)isPlaying;
- (void)UnRegister;
- (void)Register;
- (id)init;

@end


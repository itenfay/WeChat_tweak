//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CXCallObserver, NSString;

@interface SysCallCheck
{
    _Bool mIsNeedRestartAudioTalk;
    _Bool mIsInterrupting;
    _Bool _mIsNeedResumeWXMusic;
    _Bool _mIsNeedResumeFinderMinimize;
    CXCallObserver *_callObserver;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool mIsNeedResumeFinderMinimize; // @synthesize mIsNeedResumeFinderMinimize=_mIsNeedResumeFinderMinimize;
@property(nonatomic) _Bool mIsNeedResumeWXMusic; // @synthesize mIsNeedResumeWXMusic=_mIsNeedResumeWXMusic;
@property(retain, nonatomic) CXCallObserver *callObserver; // @synthesize callObserver=_callObserver;
@property(nonatomic) _Bool mIsInterrupting; // @synthesize mIsInterrupting;
@property(nonatomic) _Bool mIsNeedRestartAudioTalk; // @synthesize mIsNeedRestartAudioTalk;
- (int)callStateFromCall:(id)arg1;
- (void)switchAudioRoute;
- (void)callEnd;
- (void)callBegin;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (void)mediaServiceReset:(id)arg1;
- (void)mediaServiceFail:(id)arg1;
- (void)endInterruption;
- (void)beginInterruption;
- (void)audioSessionInterruption:(id)arg1;
- (void)onSilenceSecondaryAudioHint:(id)arg1;
- (void)delayRestartTalk;
- (void)restartTalk;
- (void)pauseTalk;
- (void)playEnd;
- (void)playBegin;
- (void)onMediaPlayStateChange:(id)arg1;
- (void)jsVideoStateChanged:(id)arg1;
- (void)jsAudioStateChanged:(id)arg1;
- (void)onServiceClearData;
- (void)clearInterruptStatus;
- (_Bool)isInterrupting;
- (_Bool)isPhoneCalling;
- (void)stopCheck;
- (void)startCheck;
- (void)appBecomeActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


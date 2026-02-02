//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVSpeechSynthesizer, CADisplayLink, NSMutableArray, NSString, SpeakTextAudioExtInfo, SpeakTextReporter, SpeakTextResourceLoader, StreamAudioQueuePlayer;
@protocol SpeakTextDelegate;

@interface SpeakTextLogicV2 : NSObject
{
    _Bool m_forceStop;
    _Bool _audioPlayerBlocked;
    _Bool _useLocalSpeaker;
    unsigned int _playingIndex;
    int _localEngineOffset;
    unsigned int _currentExtInfoIndex;
    int _systemSpeakCount;
    int _wxSpeakCount;
    id <SpeakTextDelegate> _m_delegate;
    NSString *_reportIdentifier;
    SpeakTextResourceLoader *_resourceLoader;
    NSString *_playingText;
    StreamAudioQueuePlayer *_audioPlayer;
    CDUnknownBlockType _audioPlayerBlockedHandler;
    AVSpeechSynthesizer *_synthesizer;
    NSMutableArray *_lines;
    CADisplayLink *_timer;
    SpeakTextAudioExtInfo *_currentExtInfo;
    int *_bytesCount;
    unsigned long long _prepareSpeakTime;
    unsigned long long _startSpeakTime;
    SpeakTextReporter *_reporter;
}

+ (id)getNextRequestStr:(id)arg1 offset:(int *)arg2;
+ (_Bool)checkUseLocalSpeaker:(id)arg1;
+ (id)detectLanguageFromText:(id)arg1;
+ (_Bool)hasLanguageOtherThanCN:(id)arg1;
+ (_Bool)forceUseLocalSpeak;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) SpeakTextReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) unsigned long long startSpeakTime; // @synthesize startSpeakTime=_startSpeakTime;
@property(nonatomic) unsigned long long prepareSpeakTime; // @synthesize prepareSpeakTime=_prepareSpeakTime;
@property(nonatomic) int wxSpeakCount; // @synthesize wxSpeakCount=_wxSpeakCount;
@property(nonatomic) int systemSpeakCount; // @synthesize systemSpeakCount=_systemSpeakCount;
@property(nonatomic) int *bytesCount; // @synthesize bytesCount=_bytesCount;
@property(nonatomic) unsigned int currentExtInfoIndex; // @synthesize currentExtInfoIndex=_currentExtInfoIndex;
@property(retain, nonatomic) SpeakTextAudioExtInfo *currentExtInfo; // @synthesize currentExtInfo=_currentExtInfo;
@property(retain, nonatomic) CADisplayLink *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *lines; // @synthesize lines=_lines;
@property(nonatomic) int localEngineOffset; // @synthesize localEngineOffset=_localEngineOffset;
@property(retain, nonatomic) AVSpeechSynthesizer *synthesizer; // @synthesize synthesizer=_synthesizer;
@property(nonatomic) _Bool useLocalSpeaker; // @synthesize useLocalSpeaker=_useLocalSpeaker;
@property(nonatomic) unsigned int playingIndex; // @synthesize playingIndex=_playingIndex;
@property(nonatomic) _Bool audioPlayerBlocked; // @synthesize audioPlayerBlocked=_audioPlayerBlocked;
@property(copy, nonatomic) CDUnknownBlockType audioPlayerBlockedHandler; // @synthesize audioPlayerBlockedHandler=_audioPlayerBlockedHandler;
@property(retain, nonatomic) StreamAudioQueuePlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) NSString *playingText; // @synthesize playingText=_playingText;
@property(retain, nonatomic) SpeakTextResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(retain, nonatomic) NSString *reportIdentifier; // @synthesize reportIdentifier=_reportIdentifier;
@property(nonatomic) __weak id <SpeakTextDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onProximityStateChangeToAwayFromEar;
- (void)onProximityStateChangeToCloseEar;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)addProximityMonitorIfNeed;
- (void)startAudioSession;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 utterance:(id)arg3;
- (void)speakNextBySynthesizer;
- (void)switchToLocalSpeaker;
- (void)changePlayingTextToLinesIfNeed;
- (unsigned int)findUtf16LengthWithUtf8BytesLength:(unsigned int)arg1;
- (void)timerCheckProgress;
- (void)resourceLoader:(id)arg1 didGetPieceAtIndex:(unsigned int)arg2;
- (void)resourceLoader:(id)arg1 failToGetPieceAtIndex:(unsigned int)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1;
- (void)audioPlayerDidBlocked:(id)arg1;
- (void)audioPlayerBeginPlaying:(id)arg1 success:(_Bool)arg2;
- (void)calculateBytesCount;
- (void)appendNextDataIfExist;
- (void)onSpeakEndWithFinished:(_Bool)arg1;
- (_Bool)IsPlaying;
- (void)EndSpeak;
- (void)ResumeSpeak;
- (void)PauseSpeak;
- (_Bool)StartSpeakText:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


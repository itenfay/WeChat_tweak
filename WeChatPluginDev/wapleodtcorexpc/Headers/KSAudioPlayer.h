//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class KSAudioStreamPlayBackItem, KSNewAudioPlayerManager, KSSongInfo, NSString;
@protocol KSAudioPlayerDelegate, KSAudioPlayerUserDefineProtocol, OS_dispatch_queue;

@interface KSAudioPlayer : NSObject
{
    id <KSAudioPlayerUserDefineProtocol> _userProtocol;
    NSObject<OS_dispatch_queue> *_queue;
    KSSongInfo *_curSong;
    id <KSAudioPlayerDelegate> _delegate;
    _Bool _manualProcessInterrup;
    _Bool _pauseOnHeadPhoneOut;
    float _volume;
    float _playRate;
    _Bool _seekToPlayAuto;
    KSNewAudioPlayerManager *_audioManager;
    KSAudioStreamPlayBackItem *_playerItem;
}

- (void).cxx_destruct;
@property(retain) KSAudioStreamPlayBackItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) KSNewAudioPlayerManager *audioManager; // @synthesize audioManager=_audioManager;
@property(nonatomic) _Bool seekToPlayAuto; // @synthesize seekToPlayAuto=_seekToPlayAuto;
@property(nonatomic) _Bool pauseOnHeadPhoneOut; // @synthesize pauseOnHeadPhoneOut=_pauseOnHeadPhoneOut;
@property(nonatomic) _Bool manualProcessInterrup; // @synthesize manualProcessInterrup=_manualProcessInterrup;
@property(nonatomic) __weak id <KSAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *audioQueue; // @synthesize audioQueue=_queue;
- (void)audioPlayer:(id)arg1 dataBuffering:(double)arg2;
- (void)audioPlayer:(id)arg1 status:(unsigned long long)arg2 params:(id)arg3;
- (_Bool)isPlayStop;
- (_Bool)isSeeking;
- (_Bool)isPause;
- (_Bool)isRealPlaying;
- (_Bool)isPlaying;
- (id)getAudioProcessor:(id)arg1;
- (_Bool)bAudioSessionActive;
- (_Bool)resumeSync;
- (_Bool)resumeInner:(_Bool)arg1;
- (void)pausePlayAndDownloadData;
- (_Bool)pauseSync;
- (_Bool)pauseInner:(_Bool)arg1;
- (id)createDataProvider:(id)arg1;
- (_Bool)seekSync:(double)arg1;
- (void)seek:(double)arg1;
- (void)resume;
- (void)pause;
- (void)stop;
- (_Bool)play:(id)arg1 seekTime:(double)arg2;
- (_Bool)play:(id)arg1;
@property(nonatomic) float playRate;
@property(nonatomic) float volume;
@property(readonly, nonatomic) KSSongInfo *curSong;
- (unsigned long long)errType;
- (id)errDetail;
- (id)dataProviderDetail;
- (double)firstBufTime;
@property(readonly, nonatomic) double playTimeWithNoPause;
@property(readonly, nonatomic) double curTime;
@property(readonly, nonatomic) unsigned int secondCacheCnt;
@property(readonly, nonatomic) double cacheProgress;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) unsigned long long status;
- (void)dealloc;
- (id)initWithUserProtocol:(id)arg1 queue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAudioPlayerNode, NSMutableArray, NSString, WAUniversalAudioLoader, WAUniversalAudioPlayerCachePool, WAUniversalAudioPlayerInfo;
@protocol OS_dispatch_queue, WAUniversalAudioEngineProtocol, WAUniversalAudioPlayerDelegate;

@interface WAUniversalAudioPlayer : NSObject
{
    _Bool _shouldPlay;
    _Bool _isPaused;
    _Bool _isStopped;
    _Bool _record_isPlaying;
    _Bool _ioCycleFixLogic;
    unsigned int _playErrCount;
    id <WAUniversalAudioPlayerDelegate> _delegate;
    id <WAUniversalAudioEngineProtocol> _audioEngine;
    NSString *_audioID;
    NSObject<OS_dispatch_queue> *_audioQueue;
    WAUniversalAudioPlayerInfo *_playerInfo;
    AVAudioPlayerNode *_playerNode;
    unsigned long long _bus;
    WAUniversalAudioLoader *_loader;
    NSMutableArray *_playerDataQueue;
    double _pausedTime;
    double _record_volume;
    WAUniversalAudioPlayerCachePool *_cachePool;
    NSObject<OS_dispatch_queue> *_fileQueue;
    long long _recordSampleTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool ioCycleFixLogic; // @synthesize ioCycleFixLogic=_ioCycleFixLogic;
@property(nonatomic) unsigned int playErrCount; // @synthesize playErrCount=_playErrCount;
@property(nonatomic) long long recordSampleTime; // @synthesize recordSampleTime=_recordSampleTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fileQueue; // @synthesize fileQueue=_fileQueue;
@property(retain, nonatomic) WAUniversalAudioPlayerCachePool *cachePool; // @synthesize cachePool=_cachePool;
@property(nonatomic) double record_volume; // @synthesize record_volume=_record_volume;
@property(nonatomic) _Bool record_isPlaying; // @synthesize record_isPlaying=_record_isPlaying;
@property(nonatomic) double pausedTime; // @synthesize pausedTime=_pausedTime;
@property(nonatomic) _Bool isStopped; // @synthesize isStopped=_isStopped;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(retain, nonatomic) NSMutableArray *playerDataQueue; // @synthesize playerDataQueue=_playerDataQueue;
@property(nonatomic) _Bool shouldPlay; // @synthesize shouldPlay=_shouldPlay;
@property(retain, nonatomic) WAUniversalAudioLoader *loader; // @synthesize loader=_loader;
@property(nonatomic) unsigned long long bus; // @synthesize bus=_bus;
@property(retain, nonatomic) AVAudioPlayerNode *playerNode; // @synthesize playerNode=_playerNode;
@property(retain, nonatomic) WAUniversalAudioPlayerInfo *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioQueue; // @synthesize audioQueue=_audioQueue;
@property(copy, nonatomic) NSString *audioID; // @synthesize audioID=_audioID;
@property(nonatomic) __weak id <WAUniversalAudioEngineProtocol> audioEngine; // @synthesize audioEngine=_audioEngine;
@property(nonatomic) __weak id <WAUniversalAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)throwError:(id)arg1;
- (void)playPCMBufferDidFinished:(id)arg1 queue:(id)arg2;
- (_Bool)scheduleBuffer:(id)arg1 interrupts:(_Bool)arg2 loop:(_Bool)arg3 error:(id *)arg4;
- (void)playFileDidFinished:(id)arg1 queue:(id)arg2;
- (_Bool)scheduleSegment:(id)arg1 startTime:(double)arg2 error:(id *)arg3;
- (void)resetPlayerTime;
- (void)internalPause;
- (void)internalStop;
- (void)resetAudioInfo;
- (void)cleanLoader;
- (void)cleanPlayerDataQueue;
- (_Bool)reloadData:(_Bool)arg1 error:(id *)arg2 force:(_Bool)arg3;
- (void)onLoaderDidError:(id)arg1 error:(id)arg2;
- (void)onLoaderDidSeeked:(id)arg1;
- (void)onLoaderDidLoaded:(id)arg1;
- (void)didDeatchPlayerNodeImplementation;
- (void)terminateWithErrorImplementation:(id)arg1;
- (double)currentTimeImplementation;
- (double)volumeImplementation;
- (void)setVolumeImplementation:(double)arg1;
- (_Bool)isPlayingImplementation;
- (void)destroyImplementation;
- (void)loadAudioImplementation:(id)arg1;
- (void)seekImplementation:(double)arg1;
- (void)stopImplementation;
- (void)pauseImplementation;
- (void)playImplementation;
- (void)didDeatchPlayerNode;
- (void)terminateWithError:(id)arg1;
@property(nonatomic) double volume;
@property(readonly, nonatomic) _Bool isPlaying;
@property(readonly, nonatomic) double currentTime;
- (void)destroy;
- (void)loadAudio:(id)arg1;
- (void)seek:(double)arg1;
- (void)stop;
- (void)pause;
- (void)play;
- (void)dealloc;
- (id)initWithAudioID:(id)arg1 audioQueue:(id)arg2 cachePool:(id)arg3 fileQueue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAudioEngine, AVAudioMixerNode, NSMutableDictionary, NSString, WAUniversalAudioPlayerCachePool;
@protocol OS_dispatch_queue;

@interface WANewUniversalAudioEngine : NSObject
{
    _Bool connected;
    _Bool _isSessionInterrupted;
    _Bool __started;
    NSString *_name;
    AVAudioEngine *__audioengine;
    NSMutableDictionary *_playerPool;
    NSObject<OS_dispatch_queue> *_audioQueue;
    WAUniversalAudioPlayerCachePool *_cachePool;
    NSObject<OS_dispatch_queue> *_fileQueue;
    AVAudioMixerNode *_mixerNode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAudioMixerNode *mixerNode; // @synthesize mixerNode=_mixerNode;
@property _Bool _started; // @synthesize _started=__started;
@property(nonatomic) _Bool isSessionInterrupted; // @synthesize isSessionInterrupted=_isSessionInterrupted;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fileQueue; // @synthesize fileQueue=_fileQueue;
@property(retain, nonatomic) WAUniversalAudioPlayerCachePool *cachePool; // @synthesize cachePool=_cachePool;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioQueue; // @synthesize audioQueue=_audioQueue;
@property(retain, nonatomic) NSMutableDictionary *playerPool; // @synthesize playerPool=_playerPool;
@property(retain, nonatomic) AVAudioEngine *_audioengine; // @synthesize _audioengine=__audioengine;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)terminateOldPlayersAndRenew;
- (void)handleMediaServicesReset:(id)arg1;
- (void)handleInterruption:(id)arg1;
- (void)handleEngineConfigurationChanged:(id)arg1;
- (void)detachNode:(id)arg1;
- (void)attachNode:(id)arg1;
- (void)disconnectNode:(id)arg1;
- (void)makeEngineConnections:(id)arg1;
- (_Bool)startEngineAndReturnError:(id *)arg1;
- (_Bool)playerConnected:(id)arg1 engine:(id)arg2;
- (void)connectMixerIfNeed;
- (void)connectPlayerIfNeeded:(id)arg1;
- (void)fixIOCycleCrash;
- (_Bool)playerCanScheduleData:(id)arg1 error:(id *)arg2;
- (void)playerDidError:(id)arg1 error:(id)arg2;
- (void)playerDidFinishPlaying:(id)arg1;
- (void)playerDidPause:(id)arg1;
- (void)playerDidStop:(id)arg1;
- (_Bool)playerCanPlay:(id)arg1 error:(id *)arg2;
- (void)playerDidDestroy:(id)arg1;
- (void)playerDidLoad:(id)arg1;
- (void)playerWillLoad:(id)arg1;
- (_Bool)isStarted;
- (void)__stop:(_Bool)arg1;
- (void)stop:(_Bool)arg1;
- (void)stop;
- (void)pause;
- (_Bool)start;
- (void)operatePlayerWithAudioID:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeTapOnOutput:(_Bool)arg1;
- (void)removeTapOnOutput;
- (void)installTapOnOutputWithBufferSize:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)createPlayerWithAudioID:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 fileQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


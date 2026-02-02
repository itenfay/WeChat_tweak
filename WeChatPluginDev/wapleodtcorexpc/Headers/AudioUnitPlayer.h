//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, NSString;
@protocol AudioCodecProtocol, AudioPlayerDelegate;

@interface AudioUnitPlayer : NSObject
{
    unsigned int m_playedFrames;
    _Bool m_bReadyToPlay;
    _Bool m_bStopCallBack;
    struct OpaqueAUGraph *m_graph;
    int m_mixerNode;
    int m_ioNode;
    id <AudioPlayerDelegate> _delegate;
    id <AudioCodecProtocol> _codec;
    NSString *_filePath;
    MMTimer *_volumeCheckTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *volumeCheckTimer; // @synthesize volumeCheckTimer=_volumeCheckTimer;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) id <AudioCodecProtocol> codec; // @synthesize codec=_codec;
@property(nonatomic) __weak id <AudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)EndNotifyOnMainThread;
- (void)BeginNotifyOnMainThread:(id)arg1;
- (void)doWorkAfterPlay;
- (void)doWorkBeforePlay;
- (void)checkPower;
- (void)inactiveolumeTimer;
- (void)activeVolumeTimer;
- (void)reset;
- (void)setProgress:(unsigned int)arg1;
- (_Bool)isPlaying;
- (int)getCurrentTimeMs;
- (unsigned int)currentTime;
- (void)realStop;
- (void)stop;
- (void)restart;
- (void)resume;
- (void)pause;
- (void)asyncPlayAtTime:(unsigned int)arg1;
- (void)playAtTime:(unsigned int)arg1;
- (void)play;
- (_Bool)preparePlayWithFileInternal:(id)arg1;
- (void)asyncPreparePlayWithFile:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (_Bool)preparePlayWithFile:(id)arg1;
- (_Bool)configIONode;
- (_Bool)configMixerNode;
- (_Bool)connectNode;
- (_Bool)initAndAddMixerNode;
- (_Bool)initAndAddIONode;
- (_Bool)initGraph;
- (void)initAudioSession;
- (void)initCodec;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


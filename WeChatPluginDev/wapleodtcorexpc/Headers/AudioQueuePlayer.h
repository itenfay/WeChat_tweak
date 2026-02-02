//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, NSString;
@protocol AudioCodecProtocol, AudioPlayerDelegate;

@interface AudioQueuePlayer : NSObject
{
    struct AudioQueuePlayerState *mAqData;
    _Bool m_didPrepareToPlay;
    id <AudioPlayerDelegate> _delegate;
    long long _voiceFormat;
    id <AudioCodecProtocol> _codec;
    NSString *_filePath;
    MMTimer *_meterTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *meterTimer; // @synthesize meterTimer=_meterTimer;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) id <AudioCodecProtocol> codec; // @synthesize codec=_codec;
@property(nonatomic) long long voiceFormat; // @synthesize voiceFormat=_voiceFormat;
@property(nonatomic) __weak id <AudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)EndNotifyOnMainThread;
- (void)BeginNotifyOnMainThread:(id)arg1;
- (float)TimerCheckMeter;
- (_Bool)initAudioQueue;
- (void)initCodec;
- (_Bool)prepareToPlay;
- (int)getCodecTypeFromVoiceFormat:(long long)arg1;
- (void)setProgress:(unsigned int)arg1;
- (_Bool)isPlaying;
- (int)getCurrentTimeMs;
- (unsigned int)currentTime;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)asyncPlayAtTime:(unsigned int)arg1;
- (void)playAtTime:(unsigned int)arg1;
- (void)play;
- (void)asyncPreparePlayWithFile:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (_Bool)preparePlayWithFile:(id)arg1;
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


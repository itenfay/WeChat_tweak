//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface V2TXLivePlayer : NSObject
{
    struct unique_ptr<lite_base::Thread, std::default_delete<lite_base::Thread>> _thread;
    struct Player *_player;
    struct shared_ptr<liteav::live::V2TXLivePlayerObserverImpl> _client;
    Config_224c4c0b _config;
    _Bool _clear_last_image;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)enableReceiveSeiMessage:(_Bool)arg1 payloadType:(int)arg2;
- (void)showDebugView:(_Bool)arg1;
- (long long)enableObserveVideoFrame:(_Bool)arg1 pixelFormat:(long long)arg2 bufferType:(long long)arg3;
- (long long)snapshot;
- (long long)enableVolumeEvaluation:(unsigned long long)arg1;
- (long long)switchStream:(id)arg1;
- (long long)setCacheParams:(double)arg1 maxTime:(double)arg2;
- (long long)setPlayoutVolume:(unsigned long long)arg1;
- (long long)resumeVideo;
- (long long)pauseVideo;
- (long long)resumeAudio;
- (long long)pauseAudio;
- (int)isPlaying;
- (long long)stopPlay;
- (long long)startPlay:(id)arg1;
- (long long)setRenderFillMode:(long long)arg1;
- (long long)setRenderRotation:(long long)arg1;
- (long long)setRenderView:(id)arg1;
- (long long)setProperty:(id)arg1 value:(id)arg2;
- (void)setObserver:(id)arg1;
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


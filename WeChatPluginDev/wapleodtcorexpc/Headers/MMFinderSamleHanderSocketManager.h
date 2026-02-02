//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderGCDAsyncSocket, MMFinderReplayKitVideoEncoder, NSDictionary, NSLock, NSString;
@protocol MMFinderSamleHanderSocketManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface MMFinderSamleHanderSocketManager : NSObject
{
    _Bool _connected;
    _Bool _needsIFrame;
    _Bool _pausedByMainApp;
    unsigned short _fps;
    id <MMFinderSamleHanderSocketManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_videoQueue;
    NSObject<OS_dispatch_queue> *_audioQueue;
    unsigned long long _frameCount;
    unsigned long long _audioFrameCount;
    unsigned long long _videoFrameCount;
    MMFinderGCDAsyncSocket *_socket;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _liveState;
    NSLock *_sockLock;
    NSObject<OS_dispatch_source> *_frameEmitter;
    NSObject<OS_dispatch_queue> *_frameEmitterQueue;
    struct opaqueCMSampleBuffer *_sampleBuffer;
    MMFinderReplayKitVideoEncoder *_encoder;
    NSDictionary *_currentPacketHead;
    CDStruct_1b6d18a9 _lastTime;
    CDStruct_5dc35ee3 _config;
    struct _opaque_pthread_mutex_t _mutex;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property _Bool pausedByMainApp; // @synthesize pausedByMainApp=_pausedByMainApp;
@property(retain, nonatomic) NSDictionary *currentPacketHead; // @synthesize currentPacketHead=_currentPacketHead;
@property(nonatomic) CDStruct_5dc35ee3 config; // @synthesize config=_config;
@property(retain, nonatomic) MMFinderReplayKitVideoEncoder *encoder; // @synthesize encoder=_encoder;
@property _Bool needsIFrame; // @synthesize needsIFrame=_needsIFrame;
@property(nonatomic) struct opaqueCMSampleBuffer *sampleBuffer; // @synthesize sampleBuffer=_sampleBuffer;
@property(nonatomic) struct _opaque_pthread_mutex_t mutex; // @synthesize mutex=_mutex;
@property(nonatomic) unsigned short fps; // @synthesize fps=_fps;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *frameEmitterQueue; // @synthesize frameEmitterQueue=_frameEmitterQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *frameEmitter; // @synthesize frameEmitter=_frameEmitter;
@property(retain, nonatomic) NSLock *sockLock; // @synthesize sockLock=_sockLock;
@property(nonatomic) unsigned long long liveState; // @synthesize liveState=_liveState;
@property(nonatomic) CDStruct_1b6d18a9 lastTime; // @synthesize lastTime=_lastTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) MMFinderGCDAsyncSocket *socket; // @synthesize socket=_socket;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic) unsigned long long videoFrameCount; // @synthesize videoFrameCount=_videoFrameCount;
@property(nonatomic) unsigned long long audioFrameCount; // @synthesize audioFrameCount=_audioFrameCount;
@property(nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioQueue; // @synthesize audioQueue=_audioQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoQueue; // @synthesize videoQueue=_videoQueue;
@property(nonatomic) __weak id <MMFinderSamleHanderSocketManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updatePausedByMainApp:(unsigned short)arg1;
- (void)onReceiveRequestResume;
- (void)onReceiveRequestPause;
- (_Bool)hasConfig:(CDStruct_5dc35ee3)arg1;
- (void)checkConfig;
- (void)updateConfig:(CDStruct_5dc35ee3)arg1;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)didReadDataError:(id)arg1;
- (void)changeFPS:(unsigned short)arg1;
- (void)consumeFrameBuffer;
- (struct opaqueCMSampleBuffer *)dequeueSampleBuffer;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)socket:(id)arg1 didConnectToUrl:(id)arg2;
- (void)setUpSocket;
- (void)socketDelloc;
- (_Bool)checkSocket:(unsigned long long)arg1;
- (void)sendAudioBufferToHostApp:(struct opaqueCMSampleBuffer *)arg1;
- (void)realWriteDataWithData:(id)arg1 length:(unsigned long long)arg2 msgType:(unsigned long long)arg3 state:(unsigned long long)arg4 curMem:(long long)arg5 customHeadDic:(id)arg6;
- (id)dictionaryToJson:(id)arg1;
- (void)onEncodeOneFrame:(id)arg1;
- (void)sendYUVVideoBufferToHostApp:(struct opaqueCMSampleBuffer *)arg1;
- (void)sendH264ideoBufferToHostApp:(struct opaqueCMSampleBuffer *)arg1;
- (void)sendVideoBufferToHostApp:(struct opaqueCMSampleBuffer *)arg1;
- (void)stopRecord;
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


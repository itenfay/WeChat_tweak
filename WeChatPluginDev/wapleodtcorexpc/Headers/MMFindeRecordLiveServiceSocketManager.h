//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderGCDAsyncSocket, MMFinderReplayKitVideoDecoder, NSDictionary, NSMutableArray, NSString;
@protocol MMFinderLiveReplayKitManagerDelegate, OS_dispatch_queue;

@interface MMFindeRecordLiveServiceSocketManager : NSObject
{
    _Bool _serviceSocketSuccess;
    _Bool _pausedByMainApp;
    unsigned short _fps;
    int _videoType;
    int _serviceConfigIndex;
    id <MMFinderLiveReplayKitManagerDelegate> _delegate;
    MMFinderGCDAsyncSocket *_socket;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_sockets;
    CDStruct_3da77011 *_recvBuffer;
    NSDictionary *_currentPacketHead;
    MMFinderReplayKitVideoDecoder *_videoDecode;
    long long _orientation;
    CDStruct_5dc35ee3 _config;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(nonatomic) unsigned short fps; // @synthesize fps=_fps;
@property long long orientation; // @synthesize orientation=_orientation;
@property int serviceConfigIndex; // @synthesize serviceConfigIndex=_serviceConfigIndex;
@property int videoType; // @synthesize videoType=_videoType;
@property _Bool pausedByMainApp; // @synthesize pausedByMainApp=_pausedByMainApp;
@property(nonatomic) CDStruct_5dc35ee3 config; // @synthesize config=_config;
@property(retain, nonatomic) MMFinderReplayKitVideoDecoder *videoDecode; // @synthesize videoDecode=_videoDecode;
@property(retain, nonatomic) NSDictionary *currentPacketHead; // @synthesize currentPacketHead=_currentPacketHead;
@property(nonatomic) CDStruct_3da77011 *recvBuffer; // @synthesize recvBuffer=_recvBuffer;
@property(retain, nonatomic) NSMutableArray *sockets; // @synthesize sockets=_sockets;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) MMFinderGCDAsyncSocket *socket; // @synthesize socket=_socket;
@property(nonatomic) _Bool serviceSocketSuccess; // @synthesize serviceSocketSuccess=_serviceSocketSuccess;
@property(nonatomic) __weak id <MMFinderLiveReplayKitManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateConfigWithPausedByMainApp:(unsigned short)arg1 videoType:(unsigned short)arg2 orientation:(unsigned short)arg3 fps:(unsigned short)arg4;
- (void)updateOrientation:(unsigned short)arg1;
- (void)updateVideoType:(unsigned short)arg1;
- (void)updatePausedByMainApp:(unsigned short)arg1;
- (_Bool)hasConfig:(CDStruct_5dc35ee3)arg1;
- (id)dictionaryToJson:(id)arg1;
- (id)configData;
- (void)sendConfig;
- (void)setUpConfig;
- (void)updateConfig;
- (void)onDecoderPixelBuffer:(struct __CVBuffer *)arg1 videoFrameId:(long long)arg2;
- (void)onRecvH264VideoData:(id)arg1 videoFrameId:(long long)arg2 videoFrameWidth:(unsigned int)arg3 videoFrameHeight:(unsigned int)arg4 videoFrameType:(unsigned int)arg5;
- (void)onRecvVideoData:(id)arg1;
- (void)handleRecvBuffer:(unsigned long long)arg1 dataLen:(unsigned long long)arg2 videoFrameId:(long long)arg3 videoFrameWidth:(unsigned int)arg4 videoFrameHeight:(unsigned int)arg5 videoFrameType:(unsigned int)arg6;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)didReadDataError:(id)arg1;
- (void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (void)socketDidCloseReadStream:(id)arg1;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (_Bool)isServiceSocketSuccess;
- (void)stopRecordLive;
- (void)stopSocket;
- (void)setupSocket;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSMutableData, NSString, VoipmpCoreImplServiceCallback;

@protocol VoipmpCoreImplServiceBase <NSObject>

@optional
- (void)bindSocketToNetWorkAsync:(unsigned long long)arg1 errorCode:(int)arg2;
- (void)setAutoScreenOffEnabled:(_Bool)arg1;
- (void)markUserNotSupport:(NSString *)arg1 videoCall:(_Bool)arg2;
- (_Bool)allowNetWorkChangeToMobileNet;
- (int)getRingStreamType;
- (void)setSplitScreen:(_Bool)arg1;
- (NSString *)getSplitScreenState;
- (_Bool)canQuickAcceptUseBT;
- (NSData *)getDeviceInfo;
- (void)release:(int)arg1;
- (void)updateTextureSize:(int)arg1 newWidth:(int)arg2 newHeight:(int)arg3;
- (NSData *)getRenderTexture:(int)arg1;
- (_Bool)unMuteMicroPhone;
- (_Bool)muteMicrophone;
- (_Bool)isRecording;
- (_Bool)stopRecord;
- (_Bool)startRecord:(int)arg1 channels:(int)arg2 frameDuration:(int)arg3;
- (_Bool)stopPlay;
- (_Bool)startPlay:(_Bool)arg1 sampleRate:(int)arg2 channels:(int)arg3 frameDuration:(int)arg4;
- (void)updateAudioScene:(int)arg1;
- (void)deviceRouteToAsync:(unsigned long long)arg1 device:(NSData *)arg2;
- (NSData *)getCurrentDevice;
- (NSArray *)getAvailableDevices;
- (void)onReportDataAsync:(unsigned long long)arg1;
- (void)onVideoFrameAsync:(unsigned long long)arg1 memberId:(int)arg2 dataPtr:(NSMutableData *)arg3 dataLen:(int)arg4 width:(int)arg5 height:(int)arg6 format:(int)arg7;
- (void)onConfEventAsync:(unsigned long long)arg1 eventType:(int)arg2 errCode:(int)arg3 paramsBuf:(NSData *)arg4 bufLen:(int)arg5;
- (void)updateAudioMenuAsync:(unsigned long long)arg1 show:(_Bool)arg2 devices:(NSArray *)arg3;
- (void)recErrorToAsync:(unsigned long long)arg1;
- (void)recordStateUpdateToAsync:(unsigned long long)arg1 recorderOn:(_Bool)arg2;
- (void)audioUIRouteToAsync:(unsigned long long)arg1 device:(NSData *)arg2;
- (void)setCallback:(VoipmpCoreImplServiceCallback *)arg1;
@end


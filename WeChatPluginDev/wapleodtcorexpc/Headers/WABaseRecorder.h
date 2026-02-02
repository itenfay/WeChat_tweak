//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableData, NSString, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source, WARecorderDelegate;

@interface WABaseRecorder : NSObject
{
    _Bool _timerOnFire;
    struct WARecorderData *_aqData;
    NSObject<OS_dispatch_queue> *_recordQueue;
    unsigned long long _frameRecordByteSize;
    NSMutableData *_encodeBufferData;
    NSURL *_url;
    NSDictionary *_settings;
    unsigned long long _state;
    id <WARecorderDelegate> _delegate;
    double _duration;
    double _startTime;
    double _recordTime;
    NSObject<OS_dispatch_source> *_timer;
    NSArray *_inputSourceArr;
}

+ (id)recorderWithFilePath:(id)arg1 settings:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool timerOnFire; // @synthesize timerOnFire=_timerOnFire;
@property(retain, nonatomic) NSArray *inputSourceArr; // @synthesize inputSourceArr=_inputSourceArr;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(nonatomic) double recordTime; // @synthesize recordTime=_recordTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <WARecorderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSDictionary *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSMutableData *encodeBufferData; // @synthesize encodeBufferData=_encodeBufferData;
@property(nonatomic) unsigned long long frameRecordByteSize; // @synthesize frameRecordByteSize=_frameRecordByteSize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recordQueue; // @synthesize recordQueue=_recordQueue;
@property(nonatomic) struct WARecorderData *aqData; // @synthesize aqData=_aqData;
- (_Bool)shouldForceUseBuiltinMic;
- (void)setInputSourceIfNeed;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)handleRouteChange:(id)arg1;
- (void)onNotifyStateChangeOnMainThread:(unsigned long long)arg1 error:(id)arg2;
- (void)onNotifyFrameRecordOnMainThread:(id)arg1 isLastFrame:(_Bool)arg2;
- (void)unActiveAudioSession;
- (void)activeAudioSession;
- (id)fileHeadDataBeforeStop;
- (_Bool)frameRecordByteSizeEnable;
- (_Bool)checkErrorAndLogIfError:(int)arg1 withErrorString:(id)arg2;
- (_Bool)checkErrorAndStopIfError:(int)arg1 withErrorString:(id)arg2;
- (void)clearRecorderState;
- (void)encodePCMBufferToOutputFormat:(struct WARecorderData *)arg1 audioQueueRef:(struct OpaqueAudioQueue *)arg2 audioQueueBufferRef:(struct AudioQueueBuffer *)arg3 audioTimeStamp:(const struct AudioTimeStamp *)arg4 numPackets:(unsigned int)arg5 packetDescription:(const struct AudioStreamPacketDescription *)arg6;
@property(readonly) double currentTime;
@property(readonly) _Bool isIdle;
@property(readonly) _Bool isPaused;
@property(readonly) _Bool isRecording;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)record;
- (void)prepareToRecord;
- (id)initWithURL:(id)arg1 settings:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


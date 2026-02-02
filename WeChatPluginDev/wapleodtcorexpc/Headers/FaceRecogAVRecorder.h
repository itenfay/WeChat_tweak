//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FaceRecogVideoWriter, NSData, NSString, SPXAudioRecorder;
@protocol OS_dispatch_queue;

@interface FaceRecogAVRecorder : NSObject
{
    _Bool _isRecordingVideo;
    _Bool _isRecordingAudio;
    _Bool _hasVideoData;
    _Bool _isProcessingVideo;
    _Bool _isProcessingAudio;
    _Bool _shouldTakeSnapshot;
    _Bool _userCancel;
    unsigned int _voiceId;
    long long _audioRecorderErrorCode;
    CDUnknownBlockType _fetchCallback;
    CDUnknownBlockType _snapshotCallback;
    SPXAudioRecorder *_spxRecorder;
    FaceRecogVideoWriter *_videoWriter;
    NSObject<OS_dispatch_queue> *_videoWriterQueue;
    NSData *_outputAudioData;
    NSString *_outputVideoPath;
    NSString *_bioId;
    unsigned long long _audioTimeStamp;
    unsigned long long _videoTimeStamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long videoTimeStamp; // @synthesize videoTimeStamp=_videoTimeStamp;
@property(nonatomic) unsigned long long audioTimeStamp; // @synthesize audioTimeStamp=_audioTimeStamp;
@property(nonatomic) unsigned int voiceId; // @synthesize voiceId=_voiceId;
@property(retain, nonatomic) NSString *bioId; // @synthesize bioId=_bioId;
@property(retain, nonatomic) NSString *outputVideoPath; // @synthesize outputVideoPath=_outputVideoPath;
@property(retain, nonatomic) NSData *outputAudioData; // @synthesize outputAudioData=_outputAudioData;
@property(nonatomic) _Bool userCancel; // @synthesize userCancel=_userCancel;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoWriterQueue; // @synthesize videoWriterQueue=_videoWriterQueue;
@property(retain, nonatomic) FaceRecogVideoWriter *videoWriter; // @synthesize videoWriter=_videoWriter;
@property(retain, nonatomic) SPXAudioRecorder *spxRecorder; // @synthesize spxRecorder=_spxRecorder;
@property(nonatomic) _Bool shouldTakeSnapshot; // @synthesize shouldTakeSnapshot=_shouldTakeSnapshot;
@property(copy, nonatomic) CDUnknownBlockType snapshotCallback; // @synthesize snapshotCallback=_snapshotCallback;
@property(copy, nonatomic) CDUnknownBlockType fetchCallback; // @synthesize fetchCallback=_fetchCallback;
@property(nonatomic) _Bool isProcessingAudio; // @synthesize isProcessingAudio=_isProcessingAudio;
@property(nonatomic) _Bool isProcessingVideo; // @synthesize isProcessingVideo=_isProcessingVideo;
@property(nonatomic) _Bool hasVideoData; // @synthesize hasVideoData=_hasVideoData;
@property(nonatomic) long long audioRecorderErrorCode; // @synthesize audioRecorderErrorCode=_audioRecorderErrorCode;
@property(nonatomic) _Bool isRecordingAudio; // @synthesize isRecordingAudio=_isRecordingAudio;
@property(nonatomic) _Bool isRecordingVideo; // @synthesize isRecordingVideo=_isRecordingVideo;
- (_Bool)saveSnapShotWithBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)screenshotOfVideoStream:(struct __CVBuffer *)arg1;
- (void)takeSnapshot:(CDUnknownBlockType)arg1;
- (void)checkDumpAVDataFinished;
- (void)fetchOutputData:(CDUnknownBlockType)arg1;
- (void)mergeAudioWithOriginVideoPath:(id)arg1 toPath:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)exportOriginVideoPath:(id)arg1 toPath:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)tryOutputVideoFromPath:(id)arg1 toPath:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)OnRecorderBeginRecording:(id)arg1 ErrNo:(int)arg2;
- (void)OnRecorderPart:(id)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4 ForceDelete:(_Bool)arg5 Duration:(unsigned int)arg6;
- (void)OnRecorderEndRecording:(id)arg1;
- (_Bool)OnRecorderPrepareSend:(id)arg1;
- (void)onGetCaptureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (_Bool)startRecordAudio;
- (_Bool)startRecordVideoWithWidth:(double)arg1 height:(double)arg2;
- (void)stop;
- (void)cancel;
- (void)updateBioId:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


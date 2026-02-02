//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AQAudioRecorder, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, GPUImageFramebuffer, NSObject, NSString, NSURL;
@protocol LiteAppCameraWriterDelegate, OS_dispatch_queue;

@interface LiteAppCameraWriter
{
    NSObject<OS_dispatch_queue> *m_movieWritingQueue;
    GPUImageFramebuffer *inputFramebufferForDisplay;
    _Bool _forceMPEG4;
    _Bool _m_compressAudio;
    _Bool _muteAudio;
    _Bool _m_isRecording;
    _Bool _m_isLowPerformance;
    _Bool _m_disableWritingToFile;
    float _maxMovieDuration;
    long long _videoOrientation;
    NSURL *_outputURL;
    id <LiteAppCameraWriterDelegate> _writerDelegate;
    NSString *_m_videoPath;
    NSString *_m_audioPath;
    NSString *_m_moviePath;
    AVAssetWriterInput *_m_videoInput;
    unsigned long long _m_videoTimeStamp;
    unsigned long long _m_videoFrame;
    AVAssetWriterInputPixelBufferAdaptor *_m_PixelBufferInput;
    double _m_audioBitrate;
    long long _m_videoOrientation;
    unsigned long long _m_audioTimeStamp;
    unsigned long long _m_recordTimeStamp;
    AQAudioRecorder *_recorder;
    struct CGSize _m_videoSize;
    CDStruct_1b6d18a9 _correctVideoDuration;
    CDStruct_1b6d18a9 _m_startTime;
    CDStruct_1b6d18a9 _m_initializeTime;
    CDStruct_1b6d18a9 _m_previousVideoTime;
    struct CGAffineTransform _m_preferredTransform;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AQAudioRecorder *recorder; // @synthesize recorder=_recorder;
@property(nonatomic) unsigned long long m_recordTimeStamp; // @synthesize m_recordTimeStamp=_m_recordTimeStamp;
@property(nonatomic) _Bool m_disableWritingToFile; // @synthesize m_disableWritingToFile=_m_disableWritingToFile;
@property(nonatomic) unsigned long long m_audioTimeStamp; // @synthesize m_audioTimeStamp=_m_audioTimeStamp;
@property(nonatomic) struct CGAffineTransform m_preferredTransform; // @synthesize m_preferredTransform=_m_preferredTransform;
@property(nonatomic) long long m_videoOrientation; // @synthesize m_videoOrientation=_m_videoOrientation;
@property(nonatomic) struct CGSize m_videoSize; // @synthesize m_videoSize=_m_videoSize;
@property(nonatomic) double m_audioBitrate; // @synthesize m_audioBitrate=_m_audioBitrate;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *m_PixelBufferInput; // @synthesize m_PixelBufferInput=_m_PixelBufferInput;
@property(nonatomic) unsigned long long m_videoFrame; // @synthesize m_videoFrame=_m_videoFrame;
@property(nonatomic) unsigned long long m_videoTimeStamp; // @synthesize m_videoTimeStamp=_m_videoTimeStamp;
@property(nonatomic) CDStruct_1b6d18a9 m_previousVideoTime; // @synthesize m_previousVideoTime=_m_previousVideoTime;
@property(retain, nonatomic) AVAssetWriterInput *m_videoInput; // @synthesize m_videoInput=_m_videoInput;
@property(nonatomic) _Bool m_isLowPerformance; // @synthesize m_isLowPerformance=_m_isLowPerformance;
@property(nonatomic) CDStruct_1b6d18a9 m_initializeTime; // @synthesize m_initializeTime=_m_initializeTime;
@property(nonatomic) CDStruct_1b6d18a9 m_startTime; // @synthesize m_startTime=_m_startTime;
@property(nonatomic) _Bool m_isRecording; // @synthesize m_isRecording=_m_isRecording;
@property(retain, nonatomic) NSString *m_moviePath; // @synthesize m_moviePath=_m_moviePath;
@property(retain, nonatomic) NSString *m_audioPath; // @synthesize m_audioPath=_m_audioPath;
@property(retain, nonatomic) NSString *m_videoPath; // @synthesize m_videoPath=_m_videoPath;
@property(nonatomic) _Bool muteAudio; // @synthesize muteAudio=_muteAudio;
@property(nonatomic) _Bool m_compressAudio; // @synthesize m_compressAudio=_m_compressAudio;
@property(nonatomic) __weak id <LiteAppCameraWriterDelegate> writerDelegate; // @synthesize writerDelegate=_writerDelegate;
@property(retain, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(nonatomic) _Bool forceMPEG4; // @synthesize forceMPEG4=_forceMPEG4;
@property(nonatomic) long long videoOrientation; // @synthesize videoOrientation=_videoOrientation;
@property(nonatomic) CDStruct_1b6d18a9 correctVideoDuration; // @synthesize correctVideoDuration=_correctVideoDuration;
@property(nonatomic) float maxMovieDuration; // @synthesize maxMovieDuration=_maxMovieDuration;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *writtingQueue; // @synthesize writtingQueue=m_movieWritingQueue;
- (void)finishRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelRecording;
- (void)finishRecording;
- (void)startRecordingInOrientation:(struct CGAffineTransform)arg1;
- (void)startRecording;
- (void)cancelAmr;
- (void)stopAmr;
- (void)OnRecorderBeginRecording:(id)arg1 ErrNo:(int)arg2;
- (void)startAmr;
- (void)tryMergeOutputVideo;
- (void)notifyOutput:(id)arg1;
- (void)compressMovieWithExport:(id)arg1;
- (id)makeNewPath:(id)arg1 withSubfix:(id)arg2;
- (_Bool)isWriting;
@property(readonly, nonatomic) int outputType;
- (id)getOutput;
- (void)setOutput:(id)arg1;
- (void)movieRecordingFirstFrameTime:(id)arg1;
- (void)setupWriterWithPath:(id)arg1;
- (id)initWithMovieURL:(id)arg1 size:(struct CGSize)arg2 fileType:(id)arg3 outputSettings:(id)arg4;
- (id)initWithMovieURL:(id)arg1 size:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


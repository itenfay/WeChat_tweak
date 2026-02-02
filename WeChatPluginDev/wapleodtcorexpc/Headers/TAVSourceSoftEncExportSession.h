//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAssetReaderAudioMixOutput, AVAssetReaderVideoCompositionOutput, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSCondition, NSError, NSObject, NSURL, TAVExportReportData, TAVSourceExportReader;
@protocol OS_dispatch_queue;

@interface TAVSourceSoftEncExportSession
{
    char *mCameraBuf;
    vector_1ee95920 pts;
    vector_1ee95920 dts;
    _Bool _suspended;
    _Bool _isReaderReady;
    _Bool _canceled;
    _Bool _pause;
    _Bool _videoCompleted;
    _Bool _videoSoftEncodeError;
    _Bool _audioCompleted;
    float _progress;
    float _encPts;
    float _frameTimeInterval;
    NSError *_error;
    TAVSourceExportReader *_reader;
    AVAssetReaderVideoCompositionOutput *_videoOutput;
    AVAssetReaderAudioMixOutput *_audioOutput;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_videoInput;
    AVAssetWriterInputPixelBufferAdaptor *_videoPixelBufferAdaptor;
    AVAssetWriterInput *_audioInput;
    NSObject<OS_dispatch_queue> *_inputQueue;
    double _duration;
    NSCondition *_pauseCondition;
    NSURL *_outputAudioTempURL;
    NSURL *_outputVideoTempURL;
    struct TAVSourceSoftEncoder *_mH265Encoder;
    struct __CVBuffer *_resamplingBuffer;
    TAVExportReportData *_exportReportData;
    double _exportStartTime;
    long long _backgroundCount;
    CDStruct_1b6d18a9 _lastVideoTime;
    CDStruct_1b6d18a9 _lastAudioTime;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) long long backgroundCount; // @synthesize backgroundCount=_backgroundCount;
@property(nonatomic) double exportStartTime; // @synthesize exportStartTime=_exportStartTime;
@property(retain, nonatomic) TAVExportReportData *exportReportData; // @synthesize exportReportData=_exportReportData;
@property(nonatomic) struct __CVBuffer *resamplingBuffer; // @synthesize resamplingBuffer=_resamplingBuffer;
@property(nonatomic) struct TAVSourceSoftEncoder *mH265Encoder; // @synthesize mH265Encoder=_mH265Encoder;
@property(retain, nonatomic) NSURL *outputVideoTempURL; // @synthesize outputVideoTempURL=_outputVideoTempURL;
@property(retain, nonatomic) NSURL *outputAudioTempURL; // @synthesize outputAudioTempURL=_outputAudioTempURL;
@property(nonatomic) _Bool audioCompleted; // @synthesize audioCompleted=_audioCompleted;
@property(nonatomic) _Bool videoSoftEncodeError; // @synthesize videoSoftEncodeError=_videoSoftEncodeError;
@property(nonatomic) _Bool videoCompleted; // @synthesize videoCompleted=_videoCompleted;
@property(retain, nonatomic) NSCondition *pauseCondition; // @synthesize pauseCondition=_pauseCondition;
@property(nonatomic, getter=isPause) _Bool pause; // @synthesize pause=_pause;
@property(nonatomic, getter=isCanceled) _Bool canceled; // @synthesize canceled=_canceled;
@property _Bool isReaderReady; // @synthesize isReaderReady=_isReaderReady;
@property _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic) CDStruct_1b6d18a9 lastAudioTime; // @synthesize lastAudioTime=_lastAudioTime;
@property(nonatomic) CDStruct_1b6d18a9 lastVideoTime; // @synthesize lastVideoTime=_lastVideoTime;
@property(nonatomic) float frameTimeInterval; // @synthesize frameTimeInterval=_frameTimeInterval;
@property(nonatomic) float encPts; // @synthesize encPts=_encPts;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *inputQueue; // @synthesize inputQueue=_inputQueue;
@property(retain, nonatomic) AVAssetWriterInput *audioInput; // @synthesize audioInput=_audioInput;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *videoPixelBufferAdaptor; // @synthesize videoPixelBufferAdaptor=_videoPixelBufferAdaptor;
@property(retain, nonatomic) AVAssetWriterInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain, nonatomic) AVAssetWriter *writer; // @synthesize writer=_writer;
@property(retain, nonatomic) AVAssetReaderAudioMixOutput *audioOutput; // @synthesize audioOutput=_audioOutput;
@property(retain, nonatomic) AVAssetReaderVideoCompositionOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain, nonatomic) TAVSourceExportReader *reader; // @synthesize reader=_reader;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (id)getExportFailStatusInfo;
- (void)handleSuccessReport;
- (void)handleErrorReportWithError:(id)arg1;
- (struct opaqueCMSampleBuffer *)reconstructHalfWrittenAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (unsigned long long)audioWriteStatusWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (CDStruct_1b6d18a9)getReaderRestartTime:(_Bool)arg1;
- (void)applicationDidBecomeActiveNotification;
- (void)applicationWillResignActiveNotification;
- (void)removeNotification;
- (void)setupNotification;
- (_Bool)setupAudioInputWithError:(id *)arg1;
- (id)buildDefaultVideoComposition;
- (id)currentVideoComposition;
- (_Bool)softHEVCEncodingSetup;
- (_Bool)setupReaderWriterWithError:(id *)arg1;
- (void)reset;
- (void)finish;
- (void)finishWithSuccess;
- (void)finishWithCancelled;
- (void)finishWithError:(id)arg1;
- (void)updateProgressForFrameTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)softEncodeReadySamplesFromOutput;
- (void)softEncodeReadyOneSamplesFromOutput:(CDUnknownBlockType)arg1;
- (_Bool)softVideoEncodeControl;
- (_Bool)processSampleBufferToYUV420:(struct opaqueCMSampleBuffer *)arg1;
- (struct __CVBuffer *)Scale_PixelBufferNV12:(struct __CVBuffer *)arg1 scaleWidth:(int)arg2 scaleHeight:(int)arg3;
- (struct vImage_Buffer)PixelBuffer_GetImageBufferOfPlane:(struct __CVBuffer *)arg1 planeIndex:(unsigned long long)arg2;
- (_Bool)encodeReadySamplesFromOutput:(id)arg1 toInput:(id)arg2;
- (void)reStartVideoWriting;
- (void)startReadingAndWriting;
- (void)cancelExport;
- (void)continueExporting;
- (void)pauseExporting;
- (void)startExport;
- (id)audioSettings;
- (id)videoSettings;
- (id)initWithAsset:(id)arg1;
- (void)dealloc;
- (id)init;

@end


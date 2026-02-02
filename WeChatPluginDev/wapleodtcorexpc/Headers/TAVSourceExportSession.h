//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetReaderAudioMixOutput, AVAssetReaderVideoCompositionOutput, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, AVAudioMix, AVVideoComposition, NSCondition, NSError, TAVExportReportData, TAVSourceExportAudioConfiguration, TAVSourceExportConfiguration, TAVSourceExportReader, TAVSourceExportVideoConfiguration;
@protocol OS_dispatch_queue, TAVSourceSoftEncoderFactory;

@interface TAVSourceExportSession : NSObject
{
    _Bool _keepsProcessInBackground;
    _Bool _suspended;
    _Bool _isReaderReady;
    _Bool _canceled;
    _Bool _pause;
    _Bool _videoCompleted;
    _Bool _audioCompleted;
    float _progress;
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    AVAudioMix *_audioMix;
    TAVSourceExportConfiguration *_exportConfiguration;
    TAVSourceExportVideoConfiguration *_videoConfiguration;
    TAVSourceExportAudioConfiguration *_audioConfiguration;
    id <TAVSourceSoftEncoderFactory> _encoderFactory;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
    long long _status;
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
    TAVExportReportData *_exportReportData;
    double _exportStartTime;
    long long _backgroundCount;
    CDStruct_1b6d18a9 _lastVideoTime;
    CDStruct_1b6d18a9 _lastAudioTime;
}

- (void).cxx_destruct;
@property(nonatomic) long long backgroundCount; // @synthesize backgroundCount=_backgroundCount;
@property(nonatomic) double exportStartTime; // @synthesize exportStartTime=_exportStartTime;
@property(retain, nonatomic) TAVExportReportData *exportReportData; // @synthesize exportReportData=_exportReportData;
@property(nonatomic) _Bool audioCompleted; // @synthesize audioCompleted=_audioCompleted;
@property(nonatomic) _Bool videoCompleted; // @synthesize videoCompleted=_videoCompleted;
@property(retain, nonatomic) NSCondition *pauseCondition; // @synthesize pauseCondition=_pauseCondition;
@property(nonatomic, getter=isPause) _Bool pause; // @synthesize pause=_pause;
@property(nonatomic, getter=isCanceled) _Bool canceled; // @synthesize canceled=_canceled;
@property _Bool isReaderReady; // @synthesize isReaderReady=_isReaderReady;
@property _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic) CDStruct_1b6d18a9 lastAudioTime; // @synthesize lastAudioTime=_lastAudioTime;
@property(nonatomic) CDStruct_1b6d18a9 lastVideoTime; // @synthesize lastVideoTime=_lastVideoTime;
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
@property(nonatomic) _Bool keepsProcessInBackground; // @synthesize keepsProcessInBackground=_keepsProcessInBackground;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) id <TAVSourceSoftEncoderFactory> encoderFactory; // @synthesize encoderFactory=_encoderFactory;
@property(retain, nonatomic) TAVSourceExportAudioConfiguration *audioConfiguration; // @synthesize audioConfiguration=_audioConfiguration;
@property(retain, nonatomic) TAVSourceExportVideoConfiguration *videoConfiguration; // @synthesize videoConfiguration=_videoConfiguration;
@property(retain, nonatomic) TAVSourceExportConfiguration *exportConfiguration; // @synthesize exportConfiguration=_exportConfiguration;
@property(copy, nonatomic) AVAudioMix *audioMix; // @synthesize audioMix=_audioMix;
@property(copy, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (id)getExportFailStatusInfo;
- (void)handleSuccessReport;
- (void)handleErrorReportWithError:(id)arg1;
- (struct opaqueCMSampleBuffer *)reconstructHalfWrittenAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (unsigned long long)audioWriteStatusWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (CDStruct_1b6d18a9)getReaderRestartTime;
- (void)applicationDidBecomeActiveNotification;
- (void)applicationWillResignActiveNotification;
- (void)removeNotification;
- (void)setupNotification;
- (_Bool)setupAudioInputWithError:(id *)arg1;
- (_Bool)setupVideoInputWithError:(id *)arg1;
- (id)buildDefaultVideoComposition;
- (id)currentVideoComposition;
- (_Bool)setupReaderWriterWithError:(id *)arg1;
- (void)reset;
- (void)finish;
- (void)finishWithSuccess;
- (void)finishWithCancelled;
- (void)finishWithError:(id)arg1;
- (void)updateProgressForFrameTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)encodeReadySamplesFromOutput:(id)arg1 toInput:(id)arg2;
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


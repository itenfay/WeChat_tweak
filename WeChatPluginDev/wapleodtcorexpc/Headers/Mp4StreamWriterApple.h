//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, NSDate, NSDictionary, NSOperationQueue, NSString;

@interface Mp4StreamWriterApple : NSObject
{
    NSString *_outputFilePath;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_videoWriterInput;
    AVAssetWriterInput *_audioWriterInput;
    NSDictionary *_audioOutputSettings;
    _Bool _startedSession;
    struct opaqueCMFormatDescription *_videoFormatDescription;
    struct opaqueCMFormatDescription *_audioFormatDescription;
    struct VideoMetadata _video_metadata;
    _Bool _haveWrittenFirstAudioFrame;
    unsigned long long _totalWrittenBytes;
    CDStruct_1b6d18a9 _lastFramePTS;
    struct queue<std::unique_ptr<liteav::audio::AudioFrame>, std::deque<std::unique_ptr<liteav::audio::AudioFrame>>> _audio_frame_queue;
    struct queue<std::unique_ptr<liteav::video::VideoFrame>, std::deque<std::unique_ptr<liteav::video::VideoFrame>>> _video_frame_queue;
    NSDate *_stopTime;
    CDUnknownBlockType _waitForFinishingWritingCallback;
    _Bool _didCallStop;
    _Bool _isAudioFinished;
    _Bool _isVideoFinished;
    long long _lastVideoDurationMs;
    NSOperationQueue *_operationQueue;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)logWriterStatus;
- (_Bool)writeVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (int)writeVideoFrame:(unique_ptr_4b64f7fb)arg1 duration:(long long)arg2;
- (_Bool)writeAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (int)writeAudioFrame:(unique_ptr_ff529614)arg1;
- (int)enqueueVideoFrame:(unique_ptr_4b64f7fb)arg1;
- (int)enqueueAudioFrame:(unique_ptr_ff529614)arg1;
- (void)finishWritingWithBlock:(CDUnknownBlockType)arg1;
- (long long)stopWriting;
- (void)writeFrameLoop;
- (int)startWriting;
- (_Bool)setUpWriter;
- (_Bool)hasVideo;
- (_Bool)hasAudio;
- (void)setVideoMetadata:(const void *)arg1;
- (unsigned char)getSampleRateIndex:(unsigned int)arg1;
- (id)putDescWithTag:(BOOL)arg1 size:(unsigned int)arg2;
- (id)audioExtraDataWithChannels:(long long)arg1 sampleRate:(long long)arg2;
- (id)esdsDataWithAudioMetadata:(const struct AudioMetadata *)arg1;
- (void)setAudioMetadata:(const struct AudioMetadata *)arg1;
- (void)setOuputFilePath:(const void *)arg1;
- (void)dealloc;
- (id)init;

@end


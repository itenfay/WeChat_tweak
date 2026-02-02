//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSString;
@protocol OS_dispatch_queue;

@interface XEffectVideoRecorder : NSObject
{
    _Bool _isRecording;
    NSString *_filePath;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_assetWriterInput;
    AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor;
    NSObject<OS_dispatch_queue> *_assetWriterQueue;
    struct CGSize _videoSize;
    CDStruct_1b6d18a9 _currentTime;
    CDStruct_1b6d18a9 _startTime;
}

- (void).cxx_destruct;
@property(nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
@property(nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetWriterQueue; // @synthesize assetWriterQueue=_assetWriterQueue;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *pixelBufferAdaptor; // @synthesize pixelBufferAdaptor=_pixelBufferAdaptor;
@property(retain, nonatomic) AVAssetWriterInput *assetWriterInput; // @synthesize assetWriterInput=_assetWriterInput;
@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (_Bool)isWriting;
- (_Bool)realAppendSnapshot:(id)arg1 frameTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)startRecord;
- (_Bool)appendSnapshot:(id)arg1 frameTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)appendRawPixel:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2 trimRect:(struct CGRect)arg3;
- (_Bool)appendRawSample:(struct opaqueCMSampleBuffer *)arg1 trimRect:(struct CGRect)arg2;
- (void)cancelRecord;
- (void)finishRecord:(CDUnknownBlockType)arg1;
- (void)startRecordWithCompletion:(CDUnknownBlockType)arg1;
- (void)initAssetWriter;
- (id)initWithFilePath:(id)arg1 videoSize:(struct CGSize)arg2;

@end


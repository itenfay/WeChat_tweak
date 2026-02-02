//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, GLProgram, GPUImageContext, GPUImageFramebuffer, NSArray, NSString, NSURL;
@protocol GPUImageMovieWriterDelegate, OS_dispatch_queue;

@interface GPUImageMovieWriter : NSObject
{
    _Bool alreadyFinishedRecording;
    NSString *fileType;
    AVAssetWriter *assetWriter;
    AVAssetWriterInput *assetWriterAudioInput;
    AVAssetWriterInput *assetWriterVideoInput;
    AVAssetWriterInputPixelBufferAdaptor *assetWriterPixelBufferInput;
    GPUImageContext *_movieWriterContext;
    struct __CVBuffer *renderTarget;
    struct __CVBuffer *renderTexture;
    struct CGSize videoSize;
    unsigned long long inputRotation;
    _Bool __isFirst;
    unsigned int movieFramebuffer;
    unsigned int movieRenderbuffer;
    GLProgram *colorSwizzlingProgram;
    int colorSwizzlingPositionAttribute;
    int colorSwizzlingTextureCoordinateAttribute;
    int colorSwizzlingInputTextureUniform;
    GPUImageFramebuffer *firstInputFramebuffer;
    _Bool discont;
    CDStruct_1b6d18a9 startTime;
    CDStruct_1b6d18a9 previousFrameTime;
    CDStruct_1b6d18a9 previousAudioTime;
    CDStruct_1b6d18a9 offsetTime;
    NSObject<OS_dispatch_queue> *audioQueue;
    NSObject<OS_dispatch_queue> *videoQueue;
    _Bool audioEncodingIsFinished;
    _Bool videoEncodingIsFinished;
    _Bool isRecording;
    _Bool _hasAudioTrack;
    _Bool _encodingLiveVideo;
    _Bool _shouldPassthroughAudio;
    _Bool enabled;
    _Bool _shouldInvalidateAudioSampleWhenDone;
    _Bool _paused;
    CDUnknownBlockType completionBlock;
    CDUnknownBlockType failureBlock;
    CDUnknownBlockType videoInputReadyCallback;
    CDUnknownBlockType audioInputReadyCallback;
    id <GPUImageMovieWriterDelegate> _delegate;
    CDUnknownBlockType _audioProcessingCallback;
    NSURL *_movieURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *movieURL; // @synthesize movieURL=_movieURL;
@property(copy, nonatomic) CDUnknownBlockType audioProcessingCallback; // @synthesize audioProcessingCallback=_audioProcessingCallback;
@property(nonatomic) id <GPUImageMovieWriterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GPUImageContext *movieWriterContext; // @synthesize movieWriterContext=_movieWriterContext;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) _Bool shouldInvalidateAudioSampleWhenDone; // @synthesize shouldInvalidateAudioSampleWhenDone=_shouldInvalidateAudioSampleWhenDone;
@property(nonatomic) _Bool enabled; // @synthesize enabled;
@property(copy, nonatomic) CDUnknownBlockType audioInputReadyCallback; // @synthesize audioInputReadyCallback;
@property(copy, nonatomic) CDUnknownBlockType videoInputReadyCallback; // @synthesize videoInputReadyCallback;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock;
@property(nonatomic) _Bool shouldPassthroughAudio; // @synthesize shouldPassthroughAudio=_shouldPassthroughAudio;
@property(nonatomic) _Bool encodingLiveVideo; // @synthesize encodingLiveVideo=_encodingLiveVideo;
@property(nonatomic) _Bool hasAudioTrack; // @synthesize hasAudioTrack=_hasAudioTrack;
- (struct opaqueCMSampleBuffer *)adjustTime:(struct opaqueCMSampleBuffer *)arg1 by:(CDStruct_1b6d18a9)arg2;
@property(readonly, nonatomic) AVAssetWriter *assetWriter;
@property(nonatomic) struct CGAffineTransform transform;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(copy, nonatomic) NSArray *metaData;
- (void)setHasAudioTrack:(_Bool)arg1 audioSettings:(id)arg2;
- (void)setCurrentlyReceivingMonochromeInput:(_Bool)arg1;
- (_Bool)wantsMonochromeInput;
- (_Bool)shouldIgnoreUpdatesToThisTarget;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)destroyFrameBuffer;
- (int)generateFrameBuffer:(_Bool)arg1 newSize:(struct CGSize)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)renderAtInternalSizeUsingFramebuffer:(id)arg1;
- (void)setFilterFBO;
- (void)destroyDataFBO;
- (void)createDataFBO;
- (void)enableSynchronizationCallbacks;
- (void)processAudioBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)finishRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finishRecording;
- (void)cancelRecording;
- (void)startRecordingInOrientation:(struct CGAffineTransform)arg1;
- (void)startRecording;
- (void)initializeMovieWithOutputSettings:(id)arg1;
- (void)dealloc;
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


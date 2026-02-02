//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAsset, AVAssetReader, AVPlayerItem, AVPlayerItemVideoOutput, CADisplayLink, GLProgram, GPUImageMovieWriter, NSString, NSURL;
@protocol GPUImageMovieDelegate;

@interface GPUImageMovie
{
    _Bool audioEncodingIsFinished;
    _Bool videoEncodingIsFinished;
    GPUImageMovieWriter *synchronizedMovieWriter;
    AVAssetReader *reader;
    AVPlayerItemVideoOutput *playerItemOutput;
    CADisplayLink *displayLink;
    CDStruct_1b6d18a9 previousFrameTime;
    CDStruct_1b6d18a9 processingFrameTime;
    double previousActualFrameTime;
    _Bool keepLooping;
    unsigned int luminanceTexture;
    unsigned int chrominanceTexture;
    GLProgram *yuvConversionProgram;
    int yuvConversionPositionAttribute;
    int yuvConversionTextureCoordinateAttribute;
    int yuvConversionLuminanceTextureUniform;
    int yuvConversionChrominanceTextureUniform;
    int yuvConversionMatrixUniform;
    const float *_preferredConversion;
    _Bool isFullYUVRange;
    int imageBufferWidth;
    int imageBufferHeight;
    _Bool _runBenchmark;
    _Bool _playAtActualSpeed;
    _Bool _shouldRepeat;
    _Bool _disableDisplayLink;
    _Bool _isCancel;
    NSURL *_url;
    AVAsset *_asset;
    id <GPUImageMovieDelegate> _delegate;
    AVPlayerItem *_playerItem;
}

- (void).cxx_destruct;
@property _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(nonatomic) _Bool disableDisplayLink; // @synthesize disableDisplayLink=_disableDisplayLink;
@property(retain) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) _Bool shouldRepeat; // @synthesize shouldRepeat=_shouldRepeat;
@property(nonatomic) id <GPUImageMovieDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool playAtActualSpeed; // @synthesize playAtActualSpeed=_playAtActualSpeed;
@property(nonatomic) _Bool runBenchmark; // @synthesize runBenchmark=_runBenchmark;
@property(retain) AVAsset *asset; // @synthesize asset=_asset;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) _Bool videoEncodingIsFinished;
@property(readonly, nonatomic) _Bool audioEncodingIsFinished;
@property(readonly, nonatomic) AVAssetReader *assetReader;
- (void)convertYUVToRGBOutput;
- (void)cancelProcessing;
- (void)endProcessing;
- (void)processMovieFrame:(struct __CVBuffer *)arg1 withSampleTime:(CDStruct_1b6d18a9)arg2;
@property(readonly, nonatomic) float progress;
- (void)processMovieFrame:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)readNextAudioSampleFromOutput:(id)arg1;
- (_Bool)readNextVideoFrameFromOutput:(id)arg1;
- (void)displayLinkCallback:(id)arg1;
- (void)displayLinkCallback:(id)arg1 outputItemTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)hasNewPixelBufferForItemTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)getTimeforInterval:(double)arg1;
- (void)resumeMovieProcessing;
- (void)pauseMovieProcessing;
- (void)outputMediaDataWillChange:(id)arg1;
- (void)processPlayerItem;
- (void)processAsset;
- (id)createAssetReader;
- (void)startProcessing;
- (void)enableSynchronizedEncodingUsingMovieWriter:(id)arg1;
- (void)dealloc;
- (void)yuvConversionSetup;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


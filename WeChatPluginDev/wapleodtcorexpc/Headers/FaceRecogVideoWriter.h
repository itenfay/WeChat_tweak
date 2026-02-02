//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAssetWriter, AVAssetWriterInput, NSString;

@interface FaceRecogVideoWriter
{
    _Bool _hadStartSession;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_videoInput;
    AVAssetWriterInput *_audioInput;
    NSString *_path;
}

+ (id)writerForPath:(id)arg1 Height:(long long)arg2 width:(long long)arg3 channels:(int)arg4 samples:(double)arg5;
- (void).cxx_destruct;
@property(nonatomic) _Bool hadStartSession; // @synthesize hadStartSession=_hadStartSession;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) AVAssetWriterInput *audioInput; // @synthesize audioInput=_audioInput;
@property(retain, nonatomic) AVAssetWriterInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain, nonatomic) AVAssetWriter *writer; // @synthesize writer=_writer;
- (double)angleOffsetFromPortraitOrientationToOrientation:(long long)arg1;
- (struct CGAffineTransform)transformFromCurrentVideoOrientationToOrientation:(long long)arg1;
- (_Bool)encodeFrame:(struct opaqueCMSampleBuffer *)arg1 isVideo:(_Bool)arg2;
- (void)finishWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)writerStatus;
- (_Bool)startWriting;
- (void)initAudioInputChannels:(int)arg1 samples:(double)arg2;
- (void)initVideoInputHeight:(long long)arg1 width:(long long)arg2;
- (id)initPath:(id)arg1 Height:(long long)arg2 width:(long long)arg3 channels:(int)arg4 samples:(double)arg5;
- (void)dealloc;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SWTranscoding : NSObject
{
    struct VideoTranscoding mVideoTranscoding;
    _Bool _useNewScale;
    _Bool _skipAudioResampling;
    _Bool _useSoftwareDecode;
    int _outWidth;
    int _outHeight;
    float _frameRate;
    int _videoBitrate;
    int _audioBitrate;
    int _audioSampleRate;
    int _audioChannel;
    int _errorCode;
    float _scaleFactor;
    int _adaptiveBitrateUp;
    int _adaptiveBitrateDown;
    int _resolutionAdjust;
    int _scene;
    int _vcodec2Preset;
    float _crf;
    int _vbvBufferSize;
    int _intraPeriod;
    NSURL *_inputURL;
    NSURL *_outputURL;
    NSString *_outputFileType;
    CDUnknownBlockType _videoProgressHandler;
    CDUnknownBlockType _completionHandler;
    struct CGRect _cropSize;
    CDStruct_e83c9415 _timeRange;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType videoProgressHandler; // @synthesize videoProgressHandler=_videoProgressHandler;
@property(nonatomic) int intraPeriod; // @synthesize intraPeriod=_intraPeriod;
@property(nonatomic) int vbvBufferSize; // @synthesize vbvBufferSize=_vbvBufferSize;
@property(nonatomic) float crf; // @synthesize crf=_crf;
@property(nonatomic) int vcodec2Preset; // @synthesize vcodec2Preset=_vcodec2Preset;
@property(nonatomic) _Bool useSoftwareDecode; // @synthesize useSoftwareDecode=_useSoftwareDecode;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool skipAudioResampling; // @synthesize skipAudioResampling=_skipAudioResampling;
@property(nonatomic) int resolutionAdjust; // @synthesize resolutionAdjust=_resolutionAdjust;
@property(nonatomic) int adaptiveBitrateDown; // @synthesize adaptiveBitrateDown=_adaptiveBitrateDown;
@property(nonatomic) int adaptiveBitrateUp; // @synthesize adaptiveBitrateUp=_adaptiveBitrateUp;
@property(nonatomic) _Bool useNewScale; // @synthesize useNewScale=_useNewScale;
@property(nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(retain, nonatomic) NSString *outputFileType; // @synthesize outputFileType=_outputFileType;
@property(nonatomic) struct CGRect cropSize; // @synthesize cropSize=_cropSize;
@property(readonly, nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) int audioChannel; // @synthesize audioChannel=_audioChannel;
@property(nonatomic) int audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(nonatomic) int audioBitrate; // @synthesize audioBitrate=_audioBitrate;
@property(nonatomic) int videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) float frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) int outHeight; // @synthesize outHeight=_outHeight;
@property(nonatomic) int outWidth; // @synthesize outWidth=_outWidth;
@property(retain, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(retain, nonatomic) NSURL *inputURL; // @synthesize inputURL=_inputURL;
- (void)stopEncoding;
- (void)exportAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setTranscodingParams:(id)arg1 Scene:(int)arg2;
- (id)initWithURL:(id)arg1 outputFile:(id)arg2;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPPlayerBaseMediaParams : NSObject
{
    float _videoStartFrameRate;
    NSString *_containerFormat;
    long long _durationMs;
    long long _hlsSourceType;
    long long _demuxerType;
    long long _videoWidth;
    long long _videoHeight;
    long long _videoEncodeFormat;
    long long _videoStartStreamBitrateBps;
    long long _videoDecoderType;
    long long _videoRendererType;
    long long _audioEncodeFormat;
    long long _audioDecoderType;
    long long _audioRendererType;
    long long _subtitleEncodeFormat;
}

- (void).cxx_destruct;
@property(nonatomic) long long subtitleEncodeFormat; // @synthesize subtitleEncodeFormat=_subtitleEncodeFormat;
@property(nonatomic) long long audioRendererType; // @synthesize audioRendererType=_audioRendererType;
@property(nonatomic) long long audioDecoderType; // @synthesize audioDecoderType=_audioDecoderType;
@property(nonatomic) long long audioEncodeFormat; // @synthesize audioEncodeFormat=_audioEncodeFormat;
@property(nonatomic) long long videoRendererType; // @synthesize videoRendererType=_videoRendererType;
@property(nonatomic) long long videoDecoderType; // @synthesize videoDecoderType=_videoDecoderType;
@property(nonatomic) float videoStartFrameRate; // @synthesize videoStartFrameRate=_videoStartFrameRate;
@property(nonatomic) long long videoStartStreamBitrateBps; // @synthesize videoStartStreamBitrateBps=_videoStartStreamBitrateBps;
@property(nonatomic) long long videoEncodeFormat; // @synthesize videoEncodeFormat=_videoEncodeFormat;
@property(nonatomic) long long videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) long long videoWidth; // @synthesize videoWidth=_videoWidth;
@property(nonatomic) long long demuxerType; // @synthesize demuxerType=_demuxerType;
@property(nonatomic) long long hlsSourceType; // @synthesize hlsSourceType=_hlsSourceType;
@property(nonatomic) long long durationMs; // @synthesize durationMs=_durationMs;
@property(copy, nonatomic) NSString *containerFormat; // @synthesize containerFormat=_containerFormat;
- (id)init;

@end


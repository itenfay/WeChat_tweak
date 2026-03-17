//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPVodEndParams : NSObject
{
    long long _retentionDurationMs;
    long long _errorCode;
    long long _tSeekCount;
    long long _tSeekBufferingCount;
    long long _tSeekBufferingDurationMs;
    long long _tSecondBufferingCount;
    long long _tSecondBufferingDurationMs;
    long long _videoDecoderType;
    long long _audioDecoderType;
    long long _demuxerType;
    long long _videoRendererType;
    long long _audioRendererType;
}

@property(nonatomic) long long audioRendererType; // @synthesize audioRendererType=_audioRendererType;
@property(nonatomic) long long videoRendererType; // @synthesize videoRendererType=_videoRendererType;
@property(nonatomic) long long demuxerType; // @synthesize demuxerType=_demuxerType;
@property(nonatomic) long long audioDecoderType; // @synthesize audioDecoderType=_audioDecoderType;
@property(nonatomic) long long videoDecoderType; // @synthesize videoDecoderType=_videoDecoderType;
@property(nonatomic) long long tSecondBufferingDurationMs; // @synthesize tSecondBufferingDurationMs=_tSecondBufferingDurationMs;
@property(nonatomic) long long tSecondBufferingCount; // @synthesize tSecondBufferingCount=_tSecondBufferingCount;
@property(nonatomic) long long tSeekBufferingDurationMs; // @synthesize tSeekBufferingDurationMs=_tSeekBufferingDurationMs;
@property(nonatomic) long long tSeekBufferingCount; // @synthesize tSeekBufferingCount=_tSeekBufferingCount;
@property(nonatomic) long long tSeekCount; // @synthesize tSeekCount=_tSeekCount;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) long long retentionDurationMs; // @synthesize retentionDurationMs=_retentionDurationMs;
- (id)init;

@end


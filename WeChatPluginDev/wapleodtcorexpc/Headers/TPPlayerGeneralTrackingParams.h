//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPPlayerGeneralTrackingParams : NSObject
{
    long long _apiPrepareTimeMs;
    long long _playerSchedulingThreadPrepareStartTimeMs;
    long long _demuxerThreadPrepareStartTimeMs;
    long long _demuxerOpenFileStartTimeMs;
    long long _demuxerOpenFileEndTimeMs;
    long long _initFirstClipPositionEndTimeMs;
    long long _firstVideoPacketReadEndTimeMs;
    long long _firstAudioPacketReadEndTimeMs;
    long long _demuxerThreadOnprepareCompleteTimeMs;
    long long _playerSchedulingThreadOnpreparedTimeMs;
    long long _videoDecoderOpenedTimeMs;
    long long _firstVideoFrameRenderedTimeMs;
    long long _audioDecoderOpenedTimeMs;
    long long _firstAudioFrameRenderedTimeMs;
}

@property(nonatomic) long long firstAudioFrameRenderedTimeMs; // @synthesize firstAudioFrameRenderedTimeMs=_firstAudioFrameRenderedTimeMs;
@property(nonatomic) long long audioDecoderOpenedTimeMs; // @synthesize audioDecoderOpenedTimeMs=_audioDecoderOpenedTimeMs;
@property(nonatomic) long long firstVideoFrameRenderedTimeMs; // @synthesize firstVideoFrameRenderedTimeMs=_firstVideoFrameRenderedTimeMs;
@property(nonatomic) long long videoDecoderOpenedTimeMs; // @synthesize videoDecoderOpenedTimeMs=_videoDecoderOpenedTimeMs;
@property(nonatomic) long long playerSchedulingThreadOnpreparedTimeMs; // @synthesize playerSchedulingThreadOnpreparedTimeMs=_playerSchedulingThreadOnpreparedTimeMs;
@property(nonatomic) long long demuxerThreadOnprepareCompleteTimeMs; // @synthesize demuxerThreadOnprepareCompleteTimeMs=_demuxerThreadOnprepareCompleteTimeMs;
@property(nonatomic) long long firstAudioPacketReadEndTimeMs; // @synthesize firstAudioPacketReadEndTimeMs=_firstAudioPacketReadEndTimeMs;
@property(nonatomic) long long firstVideoPacketReadEndTimeMs; // @synthesize firstVideoPacketReadEndTimeMs=_firstVideoPacketReadEndTimeMs;
@property(nonatomic) long long initFirstClipPositionEndTimeMs; // @synthesize initFirstClipPositionEndTimeMs=_initFirstClipPositionEndTimeMs;
@property(nonatomic) long long demuxerOpenFileEndTimeMs; // @synthesize demuxerOpenFileEndTimeMs=_demuxerOpenFileEndTimeMs;
@property(nonatomic) long long demuxerOpenFileStartTimeMs; // @synthesize demuxerOpenFileStartTimeMs=_demuxerOpenFileStartTimeMs;
@property(nonatomic) long long demuxerThreadPrepareStartTimeMs; // @synthesize demuxerThreadPrepareStartTimeMs=_demuxerThreadPrepareStartTimeMs;
@property(nonatomic) long long playerSchedulingThreadPrepareStartTimeMs; // @synthesize playerSchedulingThreadPrepareStartTimeMs=_playerSchedulingThreadPrepareStartTimeMs;
@property(nonatomic) long long apiPrepareTimeMs; // @synthesize apiPrepareTimeMs=_apiPrepareTimeMs;

@end


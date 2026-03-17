//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPVodPlayFlowParams : NSObject
{
    unsigned long long _tpSetdataSourcetimeMs;
    unsigned long long _convertDataSourceEtimeMs;
    unsigned long long _tpPrepareTimeMs;
    unsigned long long _coreApiPrepareTimeMs;
    unsigned long long _coreSchedulingThreadPrepareTimeMs;
    unsigned long long _demuxerThreadPrepareTimeMs;
    unsigned long long _demuxerOpenFileStimeMs;
    unsigned long long _demuxerOpenFileEtimeMs;
    unsigned long long _initFirstClipPositionEtimeMs;
    unsigned long long _firstVideoPacketReadEtimeMs;
    unsigned long long _firstAudioPacketReadEtimeMs;
    unsigned long long _demuxerThreadOnPreparedTimeMs;
    unsigned long long _coreSchedulingThreadOnPreparedTimeMs;
    unsigned long long _tpOnPreparedTimeMs;
    unsigned long long _videoDecoderOpenedTimeMs;
    unsigned long long _firstVideoFrameRenderEtimeMs;
    unsigned long long _audioDecoderOpenedTimeMs;
    unsigned long long _firstAudioFrameRenderEtimeMs;
    unsigned long long _datatransportCreateTaskTimeMs;
    unsigned long long _datatransportSetClipInfoTimeMs;
    unsigned long long _datatransportGetClipUrlTimeMs;
    unsigned long long _datatransportM3u8RequestTimeMs;
    unsigned long long _datatransportM3u8ResponseTimeMs;
    unsigned long long _datatransportdataRequestTimeMs;
    unsigned long long _datatransportDataResponsetimeMs;
    unsigned long long _datatransportDataEnoughTimeMs;
    long long _maxStreamBitrateKbps;
    long long _avgStreamBitrateKbps;
    long long _minStreamBitrateKbps;
    long long _maxVideoDecodeCostTimeMs;
    long long _avgVideoDecodeCostTimeMs;
    long long _minVideoDecodeCostTimeMs;
    long long _videoDecodeFrameTotalCount;
    long long _videoRenderFrameTotalCount;
}

@property(nonatomic) long long videoRenderFrameTotalCount; // @synthesize videoRenderFrameTotalCount=_videoRenderFrameTotalCount;
@property(nonatomic) long long videoDecodeFrameTotalCount; // @synthesize videoDecodeFrameTotalCount=_videoDecodeFrameTotalCount;
@property(nonatomic) long long minVideoDecodeCostTimeMs; // @synthesize minVideoDecodeCostTimeMs=_minVideoDecodeCostTimeMs;
@property(nonatomic) long long avgVideoDecodeCostTimeMs; // @synthesize avgVideoDecodeCostTimeMs=_avgVideoDecodeCostTimeMs;
@property(nonatomic) long long maxVideoDecodeCostTimeMs; // @synthesize maxVideoDecodeCostTimeMs=_maxVideoDecodeCostTimeMs;
@property(nonatomic) long long minStreamBitrateKbps; // @synthesize minStreamBitrateKbps=_minStreamBitrateKbps;
@property(nonatomic) long long avgStreamBitrateKbps; // @synthesize avgStreamBitrateKbps=_avgStreamBitrateKbps;
@property(nonatomic) long long maxStreamBitrateKbps; // @synthesize maxStreamBitrateKbps=_maxStreamBitrateKbps;
@property(nonatomic) unsigned long long datatransportDataEnoughTimeMs; // @synthesize datatransportDataEnoughTimeMs=_datatransportDataEnoughTimeMs;
@property(nonatomic) unsigned long long datatransportDataResponsetimeMs; // @synthesize datatransportDataResponsetimeMs=_datatransportDataResponsetimeMs;
@property(nonatomic) unsigned long long datatransportdataRequestTimeMs; // @synthesize datatransportdataRequestTimeMs=_datatransportdataRequestTimeMs;
@property(nonatomic) unsigned long long datatransportM3u8ResponseTimeMs; // @synthesize datatransportM3u8ResponseTimeMs=_datatransportM3u8ResponseTimeMs;
@property(nonatomic) unsigned long long datatransportM3u8RequestTimeMs; // @synthesize datatransportM3u8RequestTimeMs=_datatransportM3u8RequestTimeMs;
@property(nonatomic) unsigned long long datatransportGetClipUrlTimeMs; // @synthesize datatransportGetClipUrlTimeMs=_datatransportGetClipUrlTimeMs;
@property(nonatomic) unsigned long long datatransportSetClipInfoTimeMs; // @synthesize datatransportSetClipInfoTimeMs=_datatransportSetClipInfoTimeMs;
@property(nonatomic) unsigned long long datatransportCreateTaskTimeMs; // @synthesize datatransportCreateTaskTimeMs=_datatransportCreateTaskTimeMs;
@property(nonatomic) unsigned long long firstAudioFrameRenderEtimeMs; // @synthesize firstAudioFrameRenderEtimeMs=_firstAudioFrameRenderEtimeMs;
@property(nonatomic) unsigned long long audioDecoderOpenedTimeMs; // @synthesize audioDecoderOpenedTimeMs=_audioDecoderOpenedTimeMs;
@property(nonatomic) unsigned long long firstVideoFrameRenderEtimeMs; // @synthesize firstVideoFrameRenderEtimeMs=_firstVideoFrameRenderEtimeMs;
@property(nonatomic) unsigned long long videoDecoderOpenedTimeMs; // @synthesize videoDecoderOpenedTimeMs=_videoDecoderOpenedTimeMs;
@property(nonatomic) unsigned long long tpOnPreparedTimeMs; // @synthesize tpOnPreparedTimeMs=_tpOnPreparedTimeMs;
@property(nonatomic) unsigned long long coreSchedulingThreadOnPreparedTimeMs; // @synthesize coreSchedulingThreadOnPreparedTimeMs=_coreSchedulingThreadOnPreparedTimeMs;
@property(nonatomic) unsigned long long demuxerThreadOnPreparedTimeMs; // @synthesize demuxerThreadOnPreparedTimeMs=_demuxerThreadOnPreparedTimeMs;
@property(nonatomic) unsigned long long firstAudioPacketReadEtimeMs; // @synthesize firstAudioPacketReadEtimeMs=_firstAudioPacketReadEtimeMs;
@property(nonatomic) unsigned long long firstVideoPacketReadEtimeMs; // @synthesize firstVideoPacketReadEtimeMs=_firstVideoPacketReadEtimeMs;
@property(nonatomic) unsigned long long initFirstClipPositionEtimeMs; // @synthesize initFirstClipPositionEtimeMs=_initFirstClipPositionEtimeMs;
@property(nonatomic) unsigned long long demuxerOpenFileEtimeMs; // @synthesize demuxerOpenFileEtimeMs=_demuxerOpenFileEtimeMs;
@property(nonatomic) unsigned long long demuxerOpenFileStimeMs; // @synthesize demuxerOpenFileStimeMs=_demuxerOpenFileStimeMs;
@property(nonatomic) unsigned long long demuxerThreadPrepareTimeMs; // @synthesize demuxerThreadPrepareTimeMs=_demuxerThreadPrepareTimeMs;
@property(nonatomic) unsigned long long coreSchedulingThreadPrepareTimeMs; // @synthesize coreSchedulingThreadPrepareTimeMs=_coreSchedulingThreadPrepareTimeMs;
@property(nonatomic) unsigned long long coreApiPrepareTimeMs; // @synthesize coreApiPrepareTimeMs=_coreApiPrepareTimeMs;
@property(nonatomic) unsigned long long tpPrepareTimeMs; // @synthesize tpPrepareTimeMs=_tpPrepareTimeMs;
@property(nonatomic) unsigned long long convertDataSourceEtimeMs; // @synthesize convertDataSourceEtimeMs=_convertDataSourceEtimeMs;
@property(nonatomic) unsigned long long tpSetdataSourcetimeMs; // @synthesize tpSetdataSourcetimeMs=_tpSetdataSourcetimeMs;
- (id)init;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPLivePeriodParams : NSObject
{
    long long _bufferingDurationMs;
    long long _bufferingCount;
    long long _playedDurationMs;
    long long _maxStreamBitrateKbps;
    long long _avgStreamBitrateKbps;
    long long _minStreamBitrateKbps;
    long long _maxVideoDecodeCostTimeMs;
    long long _avgVideoDecodeCostTimeMs;
    long long _minVideoDecodeCostTimeMs;
    long long _minVideoGopSize;
    long long _avgVideoGopSize;
    long long _maxVideoGopSize;
    long long _videoDecodeFrameCount;
    long long _videoRenderFrameCount;
    long long _videoBufferedDurationMs;
    long long _audioBufferedDurationMs;
}

@property(nonatomic) long long audioBufferedDurationMs; // @synthesize audioBufferedDurationMs=_audioBufferedDurationMs;
@property(nonatomic) long long videoBufferedDurationMs; // @synthesize videoBufferedDurationMs=_videoBufferedDurationMs;
@property(nonatomic) long long videoRenderFrameCount; // @synthesize videoRenderFrameCount=_videoRenderFrameCount;
@property(nonatomic) long long videoDecodeFrameCount; // @synthesize videoDecodeFrameCount=_videoDecodeFrameCount;
@property(nonatomic) long long maxVideoGopSize; // @synthesize maxVideoGopSize=_maxVideoGopSize;
@property(nonatomic) long long avgVideoGopSize; // @synthesize avgVideoGopSize=_avgVideoGopSize;
@property(nonatomic) long long minVideoGopSize; // @synthesize minVideoGopSize=_minVideoGopSize;
@property(nonatomic) long long minVideoDecodeCostTimeMs; // @synthesize minVideoDecodeCostTimeMs=_minVideoDecodeCostTimeMs;
@property(nonatomic) long long avgVideoDecodeCostTimeMs; // @synthesize avgVideoDecodeCostTimeMs=_avgVideoDecodeCostTimeMs;
@property(nonatomic) long long maxVideoDecodeCostTimeMs; // @synthesize maxVideoDecodeCostTimeMs=_maxVideoDecodeCostTimeMs;
@property(nonatomic) long long minStreamBitrateKbps; // @synthesize minStreamBitrateKbps=_minStreamBitrateKbps;
@property(nonatomic) long long avgStreamBitrateKbps; // @synthesize avgStreamBitrateKbps=_avgStreamBitrateKbps;
@property(nonatomic) long long maxStreamBitrateKbps; // @synthesize maxStreamBitrateKbps=_maxStreamBitrateKbps;
@property(nonatomic) long long playedDurationMs; // @synthesize playedDurationMs=_playedDurationMs;
@property(nonatomic) long long bufferingCount; // @synthesize bufferingCount=_bufferingCount;
@property(nonatomic) long long bufferingDurationMs; // @synthesize bufferingDurationMs=_bufferingDurationMs;
- (id)init;

@end


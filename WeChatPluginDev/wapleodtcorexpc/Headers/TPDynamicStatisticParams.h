//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPDynamicStatisticParams : NSObject
{
    long long _videoBufferedDurationMs;
    long long _audioBufferedDurationMs;
    long long _videoDecodeFrameCount;
    long long _videoRenderFrameCount;
    long long _minVideoDecodeCostTimeMs;
    long long _avgVideoDecodeCostTimeMs;
    long long _maxVideoDecodeCostTimeMs;
    long long _minVideoStreamBitrateBitsPerSecond;
    long long _avgVideoStreamBitrateBitsPerSecond;
    long long _maxVideoStreamBitrateBitsPerSecond;
    long long _minVideoGopSize;
    long long _avgVideoGopSize;
    long long _maxVideoGopSize;
}

@property(nonatomic) long long maxVideoGopSize; // @synthesize maxVideoGopSize=_maxVideoGopSize;
@property(nonatomic) long long avgVideoGopSize; // @synthesize avgVideoGopSize=_avgVideoGopSize;
@property(nonatomic) long long minVideoGopSize; // @synthesize minVideoGopSize=_minVideoGopSize;
@property(nonatomic) long long maxVideoStreamBitrateBitsPerSecond; // @synthesize maxVideoStreamBitrateBitsPerSecond=_maxVideoStreamBitrateBitsPerSecond;
@property(nonatomic) long long avgVideoStreamBitrateBitsPerSecond; // @synthesize avgVideoStreamBitrateBitsPerSecond=_avgVideoStreamBitrateBitsPerSecond;
@property(nonatomic) long long minVideoStreamBitrateBitsPerSecond; // @synthesize minVideoStreamBitrateBitsPerSecond=_minVideoStreamBitrateBitsPerSecond;
@property(nonatomic) long long maxVideoDecodeCostTimeMs; // @synthesize maxVideoDecodeCostTimeMs=_maxVideoDecodeCostTimeMs;
@property(nonatomic) long long avgVideoDecodeCostTimeMs; // @synthesize avgVideoDecodeCostTimeMs=_avgVideoDecodeCostTimeMs;
@property(nonatomic) long long minVideoDecodeCostTimeMs; // @synthesize minVideoDecodeCostTimeMs=_minVideoDecodeCostTimeMs;
@property(nonatomic) long long videoRenderFrameCount; // @synthesize videoRenderFrameCount=_videoRenderFrameCount;
@property(nonatomic) long long videoDecodeFrameCount; // @synthesize videoDecodeFrameCount=_videoDecodeFrameCount;
@property(nonatomic) long long audioBufferedDurationMs; // @synthesize audioBufferedDurationMs=_audioBufferedDurationMs;
@property(nonatomic) long long videoBufferedDurationMs; // @synthesize videoBufferedDurationMs=_videoBufferedDurationMs;

@end


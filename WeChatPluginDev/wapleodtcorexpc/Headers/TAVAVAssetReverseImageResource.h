//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAsset, AVAssetReader, AVAssetReaderOutput, AVVideoComposition, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TAVAVAssetReverseImageResource
{
    _Bool _isPreloading;
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    AVAssetReader *_assetReader;
    AVAssetReaderOutput *_trackOutput;
    NSMutableArray *_sampleBuffers;
    NSObject<OS_dispatch_queue> *_loadBufferQueue;
    CDStruct_1b6d18a9 _lastReaderTime;
    CDStruct_1b6d18a9 _bufferDuration;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPreloading; // @synthesize isPreloading=_isPreloading;
@property(nonatomic) CDStruct_1b6d18a9 bufferDuration; // @synthesize bufferDuration=_bufferDuration;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loadBufferQueue; // @synthesize loadBufferQueue=_loadBufferQueue;
@property(nonatomic) CDStruct_1b6d18a9 lastReaderTime; // @synthesize lastReaderTime=_lastReaderTime;
@property(retain, nonatomic) NSMutableArray *sampleBuffers; // @synthesize sampleBuffers=_sampleBuffers;
@property(retain, nonatomic) AVAssetReaderOutput *trackOutput; // @synthesize trackOutput=_trackOutput;
@property(retain, nonatomic) AVAssetReader *assetReader; // @synthesize assetReader=_assetReader;
@property(retain, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (id)formattedBuffersTimeString;
- (void)runSyncInQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)cleanReader;
- (void)resetReaderAtTime:(CDStruct_1b6d18a9)arg1;
- (void)createAssetReaderOutputAtTime:(CDStruct_1b6d18a9)arg1;
- (id)createAssetReaderForTimeRange:(CDStruct_e83c9415)arg1;
- (void)preloadSampleBuffersAtTime:(CDStruct_1b6d18a9)arg1;
- (void)forceLoadSampleBufferAtTime:(CDStruct_1b6d18a9)arg1;
- (void)removeUnusedBuffersAtTime:(CDStruct_1b6d18a9)arg1;
- (struct opaqueCMSampleBuffer *)currentSampleBufferAtTime:(CDStruct_1b6d18a9)arg1;
- (struct opaqueCMSampleBuffer *)loadSampleBufferAtTime:(CDStruct_1b6d18a9)arg1;
- (id)fixOritationIfNeed:(id)arg1;
- (id)imageAtTime:(CDStruct_1b6d18a9)arg1 renderSize:(struct CGSize)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAsset:(id)arg1 videoComposition:(id)arg2;
- (id)initWithAsset:(id)arg1;
- (id)init;
- (void)dealloc;

@end


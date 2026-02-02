//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAsset, AVAssetReader, AVAssetReaderOutput, AVVideoComposition;

@interface TAVAVAssetReaderImageResource
{
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    AVAssetReader *_assetReader;
    AVAssetReaderOutput *_trackOutput;
    struct opaqueCMSampleBuffer *_lastSampleBuffer;
    CDStruct_1b6d18a9 _lastReaderTime;
    struct CGAffineTransform _preferredTransform;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGAffineTransform preferredTransform; // @synthesize preferredTransform=_preferredTransform;
@property(nonatomic) struct opaqueCMSampleBuffer *lastSampleBuffer; // @synthesize lastSampleBuffer=_lastSampleBuffer;
@property(nonatomic) CDStruct_1b6d18a9 lastReaderTime; // @synthesize lastReaderTime=_lastReaderTime;
@property(retain, nonatomic) AVAssetReaderOutput *trackOutput; // @synthesize trackOutput=_trackOutput;
@property(retain, nonatomic) AVAssetReader *assetReader; // @synthesize assetReader=_assetReader;
@property(retain, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void)cleanReader;
- (void)createAssetReaderOutputAtTime:(CDStruct_1b6d18a9)arg1;
- (struct opaqueCMSampleBuffer *)loadSampleBufferAtTime:(CDStruct_1b6d18a9)arg1;
- (id)imageAtTime:(CDStruct_1b6d18a9)arg1 renderSize:(struct CGSize)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAsset:(id)arg1 videoComposition:(id)arg2;
- (id)initWithAsset:(id)arg1;
- (id)init;
- (void)dealloc;

@end


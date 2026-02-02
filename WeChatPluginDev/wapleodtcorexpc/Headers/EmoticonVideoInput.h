//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetReader, AVAssetReaderTrackOutput, NSURL;
@protocol EmoticonVideoInputDelegate, OS_dispatch_queue;

@interface EmoticonVideoInput : NSObject
{
    _Bool _restartWhenCompleted;
    id <EmoticonVideoInputDelegate> _delegate;
    NSURL *_url;
    AVAsset *_asset;
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_trackOutput;
    NSObject<OS_dispatch_queue> *_inputQueue;
    CDStruct_1b6d18a9 _currentTime;
    CDStruct_1b6d18a9 _totalDuration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *inputQueue; // @synthesize inputQueue=_inputQueue;
@property(retain, nonatomic) AVAssetReaderTrackOutput *trackOutput; // @synthesize trackOutput=_trackOutput;
@property(retain, nonatomic) AVAssetReader *assetReader; // @synthesize assetReader=_assetReader;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) CDStruct_1b6d18a9 totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) _Bool restartWhenCompleted; // @synthesize restartWhenCompleted=_restartWhenCompleted;
@property(nonatomic) __weak id <EmoticonVideoInputDelegate> delegate; // @synthesize delegate=_delegate;
- (void)destorySampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (struct opaqueCMSampleBuffer *)getVideoFrameSyncAtTime:(CDStruct_1b6d18a9)arg1;
- (void)readVideoFrameAtTime:(CDStruct_1b6d18a9)arg1;
- (void)readNextVideoFrameWithSkipFrame:(long long)arg1;
- (void)readNextVideoFrame;
- (void)reset;
- (_Bool)beginReading;
- (id)initWithFilePath:(id)arg1 inputQueue:(id)arg2;

@end


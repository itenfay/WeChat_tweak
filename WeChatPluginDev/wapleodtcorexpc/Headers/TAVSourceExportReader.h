//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAssetReader;

@interface TAVSourceExportReader : NSObject
{
    AVAssetReader *_videoReader;
    AVAssetReader *_audioReader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAssetReader *audioReader; // @synthesize audioReader=_audioReader;
@property(retain, nonatomic) AVAssetReader *videoReader; // @synthesize videoReader=_videoReader;
- (id)restartAudioReaderForAsset:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 settings:(id)arg3 audioMix:(id)arg4;
- (id)restartVideoReaderForAsset:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 inputSettings:(id)arg3 videoComposition:(id)arg4;
- (id)startReading;
- (void)cancelReading;
- (id)setupAudioReaderForAsset:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 settings:(id)arg3 audioMix:(id)arg4;
- (id)setupVideoReaderForAsset:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 inputSettings:(id)arg3 videoComposition:(id)arg4;
- (_Bool)isAvailable;
- (id)error;
- (void)reset;
- (_Bool)isCancelled;
- (_Bool)isReadingError;
- (_Bool)isReading;

@end


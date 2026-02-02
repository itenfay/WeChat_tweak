//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAsset, AVAudioMix, AVVideoComposition;

@interface TAVSource : NSObject
{
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    AVAudioMix *_audioMix;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAudioMix *audioMix; // @synthesize audioMix=_audioMix;
@property(retain, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (id)printAVVideoComposition;
- (id)printAVComposition;
- (id)convertToPlayerItem;
- (void)setupAnimationTool:(id)arg1;

@end


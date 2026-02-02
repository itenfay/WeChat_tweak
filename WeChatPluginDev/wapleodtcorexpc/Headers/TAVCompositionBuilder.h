//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAudioMix, AVComposition, AVVideoComposition, NSMutableArray, TAVComposition;

@interface TAVCompositionBuilder : NSObject
{
    _Bool _needRebuildComposition;
    _Bool _needRebuildVideoComposition;
    _Bool _needRebuildAudioMix;
    _Bool _needBuildAudioMix;
    TAVComposition *_compositor;
    AVComposition *_composition;
    AVVideoComposition *_videoComposition;
    AVAudioMix *_audioMix;
    NSMutableArray *_mainVideoTrackInfo;
    NSMutableArray *_mainAudioTrackInfo;
    NSMutableArray *_overlayTrackInfo;
    NSMutableArray *_audioTrackInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *audioTrackInfo; // @synthesize audioTrackInfo=_audioTrackInfo;
@property(retain, nonatomic) NSMutableArray *overlayTrackInfo; // @synthesize overlayTrackInfo=_overlayTrackInfo;
@property(retain, nonatomic) NSMutableArray *mainAudioTrackInfo; // @synthesize mainAudioTrackInfo=_mainAudioTrackInfo;
@property(retain, nonatomic) NSMutableArray *mainVideoTrackInfo; // @synthesize mainVideoTrackInfo=_mainVideoTrackInfo;
@property(retain, nonatomic) AVAudioMix *audioMix; // @synthesize audioMix=_audioMix;
@property(retain, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain, nonatomic) AVComposition *composition; // @synthesize composition=_composition;
@property(retain, nonatomic) TAVComposition *compositor; // @synthesize compositor=_compositor;
@property(nonatomic) _Bool needBuildAudioMix; // @synthesize needBuildAudioMix=_needBuildAudioMix;
@property(nonatomic) _Bool needRebuildAudioMix; // @synthesize needRebuildAudioMix=_needRebuildAudioMix;
@property(nonatomic) _Bool needRebuildVideoComposition; // @synthesize needRebuildVideoComposition=_needRebuildVideoComposition;
@property(nonatomic) _Bool needRebuildComposition; // @synthesize needRebuildComposition=_needRebuildComposition;
- (CDStruct_1b6d18a9)maximumDurationForProviders:(id)arg1;
- (CDStruct_1b6d18a9)maximumDurationForMediaChannels:(id)arg1;
- (id)calculateSlicesForLayerInstructions:(id)arg1;
- (void)resetSetupInfo;
- (id)buildAudioMix;
- (id)buildVideoComposition;
- (id)buildComposition;
- (void)fixCompositionAudioTimeRangeIfNeeded;
- (id)buildSource;
- (id)initWithComposition:(id)arg1;

@end


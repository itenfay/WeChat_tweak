//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CIColor, NSArray;
@protocol TAVVideoComposition, TAVVideoCompositionMixer;

@interface TAVComposition : NSObject
{
    _Bool _cacheDecodedFrameAsEmptyFrame;
    CIColor *_backgroundColor;
    NSArray *_videoChannels;
    NSArray *_audioChannels;
    NSArray *_overlays;
    NSArray *_audios;
    id <TAVVideoComposition> _videoComposition;
    id <TAVVideoCompositionMixer> _videoCompositionMixer;
    struct CGSize _renderSize;
    CDStruct_1b6d18a9 _frameDuration;
}

+ (void)reloadStartTimeWithProviders:(id)arg1 transitionTime:(CDUnknownBlockType)arg2;
+ (void)reloadAudioStartTimeWithProviders:(id)arg1;
+ (void)reloadVideoStartTimeWithProviders:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <TAVVideoCompositionMixer> videoCompositionMixer; // @synthesize videoCompositionMixer=_videoCompositionMixer;
@property(retain, nonatomic) id <TAVVideoComposition> videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain, nonatomic) NSArray *audios; // @synthesize audios=_audios;
@property(retain, nonatomic) NSArray *overlays; // @synthesize overlays=_overlays;
@property(copy, nonatomic) NSArray *audioChannels; // @synthesize audioChannels=_audioChannels;
@property(copy, nonatomic) NSArray *videoChannels; // @synthesize videoChannels=_videoChannels;
@property(nonatomic) _Bool cacheDecodedFrameAsEmptyFrame; // @synthesize cacheDecodedFrameAsEmptyFrame=_cacheDecodedFrameAsEmptyFrame;
@property(nonatomic) CDStruct_1b6d18a9 frameDuration; // @synthesize frameDuration=_frameDuration;
@property(retain, nonatomic) CIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct CGSize renderSize; // @synthesize renderSize=_renderSize;
- (id)init;
- (CDStruct_1b6d18a9)getTotalDuration;

@end


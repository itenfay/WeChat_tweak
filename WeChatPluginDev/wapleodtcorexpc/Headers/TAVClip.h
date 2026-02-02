//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TAVAudioConfiguration, TAVResource, TAVTransition, TAVVideoConfiguration;
@protocol TAVAudioTransition, TAVVideoTransition;

@interface TAVClip : NSObject
{
    NSString *_identifier;
    TAVResource *_resource;
    TAVVideoConfiguration *_videoConfiguration;
    TAVAudioConfiguration *_audioConfiguration;
    TAVTransition *_transition;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _duration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TAVTransition *transition; // @synthesize transition=_transition;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) TAVAudioConfiguration *audioConfiguration; // @synthesize audioConfiguration=_audioConfiguration;
@property(retain, nonatomic) TAVVideoConfiguration *videoConfiguration; // @synthesize videoConfiguration=_videoConfiguration;
@property(retain, nonatomic) TAVResource *resource; // @synthesize resource=_resource;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (_Bool)shouldDiscardCurrentItem;
- (void)applyEffectToBufferListInOut:(struct AudioBufferList *)arg1 renderInfo:(id)arg2;
- (void)configureWithAudioMixParameters:(id)arg1;
@property(readonly, nonatomic) id <TAVAudioTransition> audioTransition;
- (id)audioCompositionTrackForComposition:(id)arg1 atIndex:(long long)arg2;
- (unsigned long long)numberOfAudioTracks;
@property(readonly, nonatomic) id <TAVVideoTransition> videoTransition;
- (id)applyEffectToSourceImage:(id)arg1 renderInfo:(id)arg2;
- (id)sourceImageAtTime:(CDStruct_1b6d18a9)arg1 renderSize:(struct CGSize)arg2;
- (id)videoCompositionTrackForComposition:(id)arg1 atIndex:(long long)arg2;
- (unsigned long long)numberOfVideoTracks;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResource:(id)arg1;
- (id)init;
- (id)makeFullRangeCopy;
- (id)initEmptyAudioWithDuration:(CDStruct_1b6d18a9)arg1;
- (id)initEmptyVideoWithDuration:(CDStruct_1b6d18a9)arg1;
- (id)initWithEmptyDuration:(CDStruct_1b6d18a9)arg1;
- (id)initWithImage:(id)arg1 duration:(CDStruct_1b6d18a9)arg2;
- (id)initWithAsset:(id)arg1;
@property(retain, nonatomic) NSDictionary *userData;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


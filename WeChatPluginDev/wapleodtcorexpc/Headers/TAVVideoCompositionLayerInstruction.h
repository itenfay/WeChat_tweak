//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol TAVVideoComposition, TAVVideoCompositionTrack, TAVVideoTransition;

@interface TAVVideoCompositionLayerInstruction : NSObject
{
    int _trackID;
    id <TAVVideoCompositionTrack> _imageSourceProvider;
    id <TAVVideoComposition> _videoComposition;
    id <TAVVideoTransition> _transition;
    CDStruct_e83c9415 _timeRange;
    struct CGAffineTransform _prefferdTransform;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TAVVideoTransition> transition; // @synthesize transition=_transition;
@property(retain, nonatomic) id <TAVVideoComposition> videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain, nonatomic) id <TAVVideoCompositionTrack> imageSourceProvider; // @synthesize imageSourceProvider=_imageSourceProvider;
@property(nonatomic) struct CGAffineTransform prefferdTransform; // @synthesize prefferdTransform=_prefferdTransform;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) int trackID; // @synthesize trackID=_trackID;
- (id)applyEffectToSourceImage:(id)arg1 renderInfo:(id)arg2;
- (id)initWithTrackID:(int)arg1 videoComposition:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


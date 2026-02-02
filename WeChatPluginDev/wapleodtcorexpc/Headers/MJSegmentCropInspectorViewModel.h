//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJPlaybackViewModel, MJTimelineViewModel;

@interface MJSegmentCropInspectorViewModel
{
    MJTimelineViewModel *_timelineVM;
    MJPlaybackViewModel *_playbackVM;
    struct CGRect _previousEffectiveCroppedRect;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect previousEffectiveCroppedRect; // @synthesize previousEffectiveCroppedRect=_previousEffectiveCroppedRect;
@property(readonly, nonatomic) __weak MJPlaybackViewModel *playbackVM; // @synthesize playbackVM=_playbackVM;
@property(readonly, nonatomic) __weak MJTimelineViewModel *timelineVM; // @synthesize timelineVM=_timelineVM;
- (_Bool)hasChanges;
- (id)title;
- (_Bool)isResetEnabled;
- (_Bool)isApplyAllEnabled;
- (_Bool)isCancelEnabled;
- (_Bool)isCropRectsAlmostEqualWithRect1:(struct CGRect)arg1 rect2:(struct CGRect)arg2;
- (id)initWithWithSegment:(id)arg1 type:(unsigned long long)arg2 timelineVM:(id)arg3 playbackVM:(id)arg4;

@end


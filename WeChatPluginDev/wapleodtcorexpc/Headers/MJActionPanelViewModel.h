//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJPlaybackViewModel, MJSegmentViewModel, MJSpeechManager, MJTimelineViewModel;

@interface MJActionPanelViewModel : NSObject
{
    MJSegmentViewModel *_segmentVM;
    MJPlaybackViewModel *_playbackVM;
    MJTimelineViewModel *_timelineVM;
    MJSpeechManager *_speechManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MJSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(readonly, nonatomic) __weak MJTimelineViewModel *timelineVM; // @synthesize timelineVM=_timelineVM;
@property(readonly, nonatomic) __weak MJPlaybackViewModel *playbackVM; // @synthesize playbackVM=_playbackVM;
@property(retain, nonatomic) MJSegmentViewModel *segmentVM; // @synthesize segmentVM=_segmentVM;
- (id)mainMenuItemsWithSegmentType:(unsigned long long)arg1 playbackTime:(CDStruct_1b6d18a9)arg2;
- (id)mainMenuItemsAtPlaybackTime:(CDStruct_1b6d18a9)arg1;
- (id)createVoiceChangeInspectorViewModel;
- (id)createSegmentSpeedInspectorViewModel;
- (id)createSegmentCropInspectorViewModel;
- (id)createSegmentFilterInspectorViewModel;
- (id)createSegmentAudioInspectorViewModel;
- (id)createSegmentPictureInspectorViewModel;
- (void)dealloc;
- (id)initWithTimelineVM:(id)arg1 playbackVM:(id)arg2 speechManager:(id)arg3;

@end


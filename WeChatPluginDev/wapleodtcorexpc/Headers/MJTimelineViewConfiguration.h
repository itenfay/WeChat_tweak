//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MJTimelineViewConfiguration : NSObject
{
    _Bool _shouldShowMusicPlaceholder;
    _Bool _shouldShowNarrationPlaceholder;
    _Bool _shouldShowSnapMarksView;
    _Bool _shouldShowAudialLaneBackground;
    _Bool _shouldShowVolumeButton;
    _Bool _shouldShowRecordButton;
    _Bool _shouldShowOSTRecognitionRetryButton;
    _Bool _isStorySegmentEditingEnabled;
    _Bool _isAnchoredSegmentOverlapEnabled;
    _Bool _shouldShowTransitionPart;
    _Bool _isTransitionEditingEnabled;
    _Bool _showAnchoredSegmentTrimHandleOverStoryline;
    _Bool _shouldTrimSnapToVisualAnchoredSegments;
    _Bool _shouldResponseToSegmentInteraction;
    _Bool _useNewTimelineSelectInteraction;
    unsigned long long _anchoredSegmentAutoFocusTargetType;
    unsigned long long _anchoredSegmentAutoFocusBehaviorType;
    NSArray *_visibleSegmentTypes;
    double _storylineHeight;
    double _audialLaneHeight;
    double _visualLaneHeight;
    double _storyline2AudialLaneSpacing;
    double _timeRulerTopSpacing;
    double _defaultTimelineScale;
    struct UIEdgeInsets _trimHandleViewInsets;
}

+ (id)defaultConfigurationForOSTRecognition;
+ (id)defaultConfigurationForNarration;
+ (id)defaultConfigurationForTrimming;
+ (id)defaultConfigurationForClipping;
- (void).cxx_destruct;
@property(nonatomic) _Bool useNewTimelineSelectInteraction; // @synthesize useNewTimelineSelectInteraction=_useNewTimelineSelectInteraction;
@property(nonatomic) _Bool shouldResponseToSegmentInteraction; // @synthesize shouldResponseToSegmentInteraction=_shouldResponseToSegmentInteraction;
@property(nonatomic) _Bool shouldTrimSnapToVisualAnchoredSegments; // @synthesize shouldTrimSnapToVisualAnchoredSegments=_shouldTrimSnapToVisualAnchoredSegments;
@property(nonatomic) _Bool showAnchoredSegmentTrimHandleOverStoryline; // @synthesize showAnchoredSegmentTrimHandleOverStoryline=_showAnchoredSegmentTrimHandleOverStoryline;
@property(nonatomic) struct UIEdgeInsets trimHandleViewInsets; // @synthesize trimHandleViewInsets=_trimHandleViewInsets;
@property(nonatomic) _Bool isTransitionEditingEnabled; // @synthesize isTransitionEditingEnabled=_isTransitionEditingEnabled;
@property(nonatomic) _Bool shouldShowTransitionPart; // @synthesize shouldShowTransitionPart=_shouldShowTransitionPart;
@property(readonly, nonatomic) _Bool isAnchoredSegmentOverlapEnabled; // @synthesize isAnchoredSegmentOverlapEnabled=_isAnchoredSegmentOverlapEnabled;
@property(nonatomic) double defaultTimelineScale; // @synthesize defaultTimelineScale=_defaultTimelineScale;
@property(nonatomic) double timeRulerTopSpacing; // @synthesize timeRulerTopSpacing=_timeRulerTopSpacing;
@property(nonatomic) double storyline2AudialLaneSpacing; // @synthesize storyline2AudialLaneSpacing=_storyline2AudialLaneSpacing;
@property(readonly, nonatomic) double visualLaneHeight; // @synthesize visualLaneHeight=_visualLaneHeight;
@property(readonly, nonatomic) double audialLaneHeight; // @synthesize audialLaneHeight=_audialLaneHeight;
@property(readonly, nonatomic) double storylineHeight; // @synthesize storylineHeight=_storylineHeight;
@property(readonly, nonatomic) NSArray *visibleSegmentTypes; // @synthesize visibleSegmentTypes=_visibleSegmentTypes;
@property(readonly, nonatomic) unsigned long long anchoredSegmentAutoFocusBehaviorType; // @synthesize anchoredSegmentAutoFocusBehaviorType=_anchoredSegmentAutoFocusBehaviorType;
@property(readonly, nonatomic) unsigned long long anchoredSegmentAutoFocusTargetType; // @synthesize anchoredSegmentAutoFocusTargetType=_anchoredSegmentAutoFocusTargetType;
@property(readonly, nonatomic) _Bool isStorySegmentEditingEnabled; // @synthesize isStorySegmentEditingEnabled=_isStorySegmentEditingEnabled;
@property(readonly, nonatomic) _Bool shouldShowOSTRecognitionRetryButton; // @synthesize shouldShowOSTRecognitionRetryButton=_shouldShowOSTRecognitionRetryButton;
@property(readonly, nonatomic) _Bool shouldShowRecordButton; // @synthesize shouldShowRecordButton=_shouldShowRecordButton;
@property(readonly, nonatomic) _Bool shouldShowVolumeButton; // @synthesize shouldShowVolumeButton=_shouldShowVolumeButton;
@property(readonly, nonatomic) _Bool shouldShowAudialLaneBackground; // @synthesize shouldShowAudialLaneBackground=_shouldShowAudialLaneBackground;
@property(readonly, nonatomic) _Bool shouldShowSnapMarksView; // @synthesize shouldShowSnapMarksView=_shouldShowSnapMarksView;
@property(readonly, nonatomic) _Bool shouldShowNarrationPlaceholder; // @synthesize shouldShowNarrationPlaceholder=_shouldShowNarrationPlaceholder;
@property(readonly, nonatomic) _Bool shouldShowMusicPlaceholder; // @synthesize shouldShowMusicPlaceholder=_shouldShowMusicPlaceholder;
- (id)description;
- (_Bool)shouldShowSegmentWithType:(unsigned long long)arg1;
- (id)initWithShouldShowMusicPlaceholder:(_Bool)arg1 shouldShowNarrationPlaceholder:(_Bool)arg2 shouldShowSnapMarksView:(_Bool)arg3 shouldShowAudialLaneBackground:(_Bool)arg4 shouldShowVolumeButton:(_Bool)arg5 shouldShowRecordButton:(_Bool)arg6 shouldShowOSTRecognitionRetryButton:(_Bool)arg7 isStorySegmentEditingEnabled:(_Bool)arg8 anchoredSegmentAutoFocusTargetType:(unsigned long long)arg9 anchoredSegmentAutoFocusBehaviorType:(unsigned long long)arg10 visibleSegmentTypes:(id)arg11 storylineHeight:(double)arg12 audialLaneHeight:(double)arg13 visualLaneHeight:(double)arg14 isAnchoredSegmentOverlapEnabled:(_Bool)arg15;

@end


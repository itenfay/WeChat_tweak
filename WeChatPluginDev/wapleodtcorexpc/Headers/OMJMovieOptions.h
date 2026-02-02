//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSSet, OMJDimensionLevel;

@interface OMJMovieOptions : NSObject
{
    _Bool _isLyricEnabled;
    _Bool _isOSTMuted;
    _Bool _isBGMMuted;
    _Bool _shouldAdjustBlankTemplatePreviewOffset;
    _Bool _isVideoTranscodingOptimEnabled;
    _Bool _isAIAnalysisEnabled;
    _Bool _shouldAutoRecommendBGM;
    _Bool _shouldRecommendBGMForRecommendedTemplates;
    _Bool _shouldRetainOriginalMediaDuration;
    float _blankTemplatePreviewOffsetPercent;
    float _preprocTimeoutLimitSeconds;
    OMJDimensionLevel *_videoTranscodingOptimDimensionLevel;
    NSSet *_defaultTemplateIDs;
    CDStruct_1b6d18a9 _maxDuration;
    CDStruct_1b6d18a9 _retainOriginalMediaDurationThreshold;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *defaultTemplateIDs; // @synthesize defaultTemplateIDs=_defaultTemplateIDs;
@property(nonatomic) CDStruct_1b6d18a9 retainOriginalMediaDurationThreshold; // @synthesize retainOriginalMediaDurationThreshold=_retainOriginalMediaDurationThreshold;
@property(nonatomic) _Bool shouldRetainOriginalMediaDuration; // @synthesize shouldRetainOriginalMediaDuration=_shouldRetainOriginalMediaDuration;
@property(nonatomic) _Bool shouldRecommendBGMForRecommendedTemplates; // @synthesize shouldRecommendBGMForRecommendedTemplates=_shouldRecommendBGMForRecommendedTemplates;
@property(nonatomic) _Bool shouldAutoRecommendBGM; // @synthesize shouldAutoRecommendBGM=_shouldAutoRecommendBGM;
@property(nonatomic) CDStruct_1b6d18a9 maxDuration; // @synthesize maxDuration=_maxDuration;
@property(readonly, nonatomic) float preprocTimeoutLimitSeconds; // @synthesize preprocTimeoutLimitSeconds=_preprocTimeoutLimitSeconds;
@property(readonly, nonatomic) _Bool isAIAnalysisEnabled; // @synthesize isAIAnalysisEnabled=_isAIAnalysisEnabled;
@property(readonly, nonatomic) OMJDimensionLevel *videoTranscodingOptimDimensionLevel; // @synthesize videoTranscodingOptimDimensionLevel=_videoTranscodingOptimDimensionLevel;
@property(readonly, nonatomic) _Bool isVideoTranscodingOptimEnabled; // @synthesize isVideoTranscodingOptimEnabled=_isVideoTranscodingOptimEnabled;
@property(readonly, nonatomic) float blankTemplatePreviewOffsetPercent; // @synthesize blankTemplatePreviewOffsetPercent=_blankTemplatePreviewOffsetPercent;
@property(readonly, nonatomic) _Bool shouldAdjustBlankTemplatePreviewOffset; // @synthesize shouldAdjustBlankTemplatePreviewOffset=_shouldAdjustBlankTemplatePreviewOffset;
@property(readonly, nonatomic) _Bool isBGMMuted; // @synthesize isBGMMuted=_isBGMMuted;
@property(readonly, nonatomic) _Bool isOSTMuted; // @synthesize isOSTMuted=_isOSTMuted;
@property(readonly, nonatomic) _Bool isLyricEnabled; // @synthesize isLyricEnabled=_isLyricEnabled;
- (id)description;
- (id)initWithIsLyricEnabled:(_Bool)arg1 isOSTMuted:(_Bool)arg2 isBGMMuted:(_Bool)arg3 shouldAdjustBlankTemplatePreviewOffset:(_Bool)arg4 blankTemplatePreviewOffsetPercent:(float)arg5 isVideoTranscodingOptimEnabled:(_Bool)arg6 videoTranscodingOptimDimensionLevel:(id)arg7 isAIAnalysisEnabled:(_Bool)arg8 preprocTimeoutLimitSeconds:(float)arg9;
- (id)initWithIsLyricEnabled:(_Bool)arg1 isOSTMuted:(_Bool)arg2 isBGMMuted:(_Bool)arg3 shouldAdjustBlankTemplatePreviewOffset:(_Bool)arg4 blankTemplatePreviewOffsetPercent:(float)arg5;
- (id)initWithIsLyricEnabled:(_Bool)arg1 isOSTMuted:(_Bool)arg2 isBGMMuted:(_Bool)arg3;

@end


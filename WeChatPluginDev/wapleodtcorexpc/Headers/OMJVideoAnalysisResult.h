//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface OMJVideoAnalysisResult : NSObject
{
    NSArray *_visionTaskOutLabels;
    NSArray *_visionTaskExceedsThreshold;
    NSArray *_visionTaskOutScores;
    NSArray *_audioTaskOutLabels;
    NSArray *_audioTaskOutScores;
    NSArray *_lastVersionOutScores;
    NSDictionary *_clusters;
    NSArray *_embeddingFeature;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *embeddingFeature; // @synthesize embeddingFeature=_embeddingFeature;
@property(readonly, nonatomic) NSDictionary *clusters; // @synthesize clusters=_clusters;
@property(readonly, nonatomic) NSArray *lastVersionOutScores; // @synthesize lastVersionOutScores=_lastVersionOutScores;
@property(readonly, nonatomic) NSArray *audioTaskOutScores; // @synthesize audioTaskOutScores=_audioTaskOutScores;
@property(readonly, nonatomic) NSArray *audioTaskOutLabels; // @synthesize audioTaskOutLabels=_audioTaskOutLabels;
@property(readonly, nonatomic) NSArray *visionTaskOutScores; // @synthesize visionTaskOutScores=_visionTaskOutScores;
@property(readonly, nonatomic) NSArray *visionTaskExceedsThreshold; // @synthesize visionTaskExceedsThreshold=_visionTaskExceedsThreshold;
@property(readonly, nonatomic) NSArray *visionTaskOutLabels; // @synthesize visionTaskOutLabels=_visionTaskOutLabels;
- (id)initWithVisionTaskOutLabels:(id)arg1 visionTaskExceedsThreshold:(id)arg2 visionTaskOutScores:(id)arg3 audioTaskOutLabels:(id)arg4 audioTaskOutScores:(id)arg5 lastVersionOutScores:(id)arg6 clusters:(id)arg7 embeddingFeature:(id)arg8;

@end


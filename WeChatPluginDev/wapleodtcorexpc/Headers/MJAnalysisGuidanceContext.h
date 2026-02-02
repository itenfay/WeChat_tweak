//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJMovieComposingAssetsClassifyHelper, NSArray, NSOrderedSet;

@interface MJAnalysisGuidanceContext : NSObject
{
    unsigned long long _entrance;
    NSOrderedSet *_segmentVMs;
    NSArray *_originAssets;
    MJMovieComposingAssetsClassifyHelper *_assetsClassifyHelper;
    CDStruct_1b6d18a9 _timelineDuration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MJMovieComposingAssetsClassifyHelper *assetsClassifyHelper; // @synthesize assetsClassifyHelper=_assetsClassifyHelper;
@property(readonly, nonatomic) CDStruct_1b6d18a9 timelineDuration; // @synthesize timelineDuration=_timelineDuration;
@property(readonly, nonatomic) NSArray *originAssets; // @synthesize originAssets=_originAssets;
@property(readonly, nonatomic) NSOrderedSet *segmentVMs; // @synthesize segmentVMs=_segmentVMs;
@property(readonly, nonatomic) unsigned long long entrance; // @synthesize entrance=_entrance;
- (id)initWithEntrance:(unsigned long long)arg1 segmentVMs:(id)arg2 originAssets:(id)arg3 timelineDuration:(CDStruct_1b6d18a9)arg4 assetsClassifyHelper:(id)arg5;

@end


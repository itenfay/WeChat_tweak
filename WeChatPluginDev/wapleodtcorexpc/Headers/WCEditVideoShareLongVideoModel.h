//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCEditVideoShareLongVideoModel : NSObject
{
    _Bool _hasMiaoJianEntrance;
    _Bool _hasWeSeeEntrance;
    _Bool _hasFinderEntranceForLongVideo;
    _Bool _hasFinderEntranceForShortVideo;
    long long _minDurationFinderRequiredForShortVideo;
    unsigned long long _entrance;
}

@property(nonatomic) unsigned long long entrance; // @synthesize entrance=_entrance;
@property(nonatomic) long long minDurationFinderRequiredForShortVideo; // @synthesize minDurationFinderRequiredForShortVideo=_minDurationFinderRequiredForShortVideo;
@property(nonatomic) _Bool hasFinderEntranceForShortVideo; // @synthesize hasFinderEntranceForShortVideo=_hasFinderEntranceForShortVideo;
@property(nonatomic) _Bool hasFinderEntranceForLongVideo; // @synthesize hasFinderEntranceForLongVideo=_hasFinderEntranceForLongVideo;
@property(nonatomic) _Bool hasWeSeeEntrance; // @synthesize hasWeSeeEntrance=_hasWeSeeEntrance;
@property(nonatomic) _Bool hasMiaoJianEntrance; // @synthesize hasMiaoJianEntrance=_hasMiaoJianEntrance;
- (id)description;
- (void)sendWithMiaoJian:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)showShareActionSheetInView:(id)arg1;
- (_Bool)isTimelineEntrance;
- (_Bool)noShareOptions;
- (_Bool)canShowLongVideoShareOptions;
- (void)loadDynamicConfig;
- (id)initWithEntrance:(unsigned long long)arg1;

@end


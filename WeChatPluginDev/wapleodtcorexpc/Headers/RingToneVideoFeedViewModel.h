//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, RingToneVideoFeedViewController;

@interface RingToneVideoFeedViewModel : NSObject
{
    unsigned int _offset;
    NSMutableArray *_rings;
    RingToneVideoFeedViewController *_currentVC;
    unsigned long long _autoPlaySection;
    NSMutableSet *_feedIDs;
    NSMutableArray *_preloadArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *preloadArray; // @synthesize preloadArray=_preloadArray;
@property(copy, nonatomic) NSMutableSet *feedIDs; // @synthesize feedIDs=_feedIDs;
@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned long long autoPlaySection; // @synthesize autoPlaySection=_autoPlaySection;
@property(nonatomic) __weak RingToneVideoFeedViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(retain, nonatomic) NSMutableArray *rings; // @synthesize rings=_rings;
- (double)getCurrentPlayTime:(id)arg1;
- (void)stopAllPlay;
- (void)stopCurrentPlay:(_Bool)arg1;
- (void)stopPlayWithIndexPath:(id)arg1 fakeStop:(_Bool)arg2;
- (void)startPlayWithIndexPath:(id)arg1;
- (void)checkAutoPlayWhenScroll:(_Bool)arg1;
- (void)checkAutoPlayWhenDataReload;
- (void)checkAutoPlayWhenAppear;
- (void)checkAutoPlayWhenFirstAppear;
- (void)reportRecommendRingBackExpose:(long long)arg1 end:(long long)arg2;
- (void)stopAllPreloadVideoItems;
- (void)stopPreloadVideoItem:(id)arg1;
- (void)preloadVideoItems:(id)arg1;
- (void)addRingForRecommendList:(id)arg1;
- (id)fetchRecommendRings:(unsigned long long)arg1;
- (void)refreshForTableView;
- (id)init;

@end


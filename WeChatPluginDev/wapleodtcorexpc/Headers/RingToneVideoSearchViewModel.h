//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString, RingToneVideoSearchViewController;

@interface RingToneVideoSearchViewModel : NSObject
{
    unsigned int _dataOffset;
    NSMutableArray *_rings;
    RingToneVideoSearchViewController *_currentVC;
    unsigned long long _autoPlaySection;
    unsigned long long _searchRequestID;
    NSMutableSet *_feedIDs;
    NSString *_curQuery;
    NSMutableArray *_preloadArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *preloadArray; // @synthesize preloadArray=_preloadArray;
@property(copy, nonatomic) NSString *curQuery; // @synthesize curQuery=_curQuery;
@property(copy, nonatomic) NSMutableSet *feedIDs; // @synthesize feedIDs=_feedIDs;
@property(nonatomic) unsigned int dataOffset; // @synthesize dataOffset=_dataOffset;
@property(nonatomic) unsigned long long searchRequestID; // @synthesize searchRequestID=_searchRequestID;
@property(nonatomic) unsigned long long autoPlaySection; // @synthesize autoPlaySection=_autoPlaySection;
@property(nonatomic) __weak RingToneVideoSearchViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(retain, nonatomic) NSMutableArray *rings; // @synthesize rings=_rings;
- (void)reportRecommendRingBackExpose:(long long)arg1 end:(long long)arg2;
- (double)getCurrentPlayTime:(id)arg1;
- (void)stopAllPlay;
- (void)stopCurrentPlay:(_Bool)arg1;
- (void)stopPlayWithIndexPath:(id)arg1 fakeStop:(_Bool)arg2;
- (void)startPlayWithIndexPath:(id)arg1;
- (void)checkAutoPlayWhenScroll:(_Bool)arg1;
- (void)checkAutoPlayWhenDataReload;
- (void)checkAutoPlayWhenAppear;
- (void)checkAutoPlayWhenFirstAppear;
- (id)searchMusicRing:(id)arg1;
- (id)searchRing:(id)arg1 isFirstPage:(_Bool)arg2;
- (void)stopAllPreloadVideoItems;
- (void)stopPreloadVideoItem:(id)arg1;
- (void)preloadVideoItems:(id)arg1;
- (void)clearData;
- (id)init;

@end


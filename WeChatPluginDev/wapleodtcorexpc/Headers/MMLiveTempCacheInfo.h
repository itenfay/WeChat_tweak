//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MMLiveTempCacheInfo : NSObject
{
    int _offlineScene;
    unsigned long long _startScene;
    unsigned long long _memberPrice;
    NSMutableDictionary *_tempCacheInfoDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *tempCacheInfoDict; // @synthesize tempCacheInfoDict=_tempCacheInfoDict;
@property(nonatomic) unsigned long long memberPrice; // @synthesize memberPrice=_memberPrice;
@property(nonatomic) int offlineScene; // @synthesize offlineScene=_offlineScene;
@property(nonatomic) unsigned long long startScene; // @synthesize startScene=_startScene;
- (id)getRecommendReasonCache;
- (id)getFinderBoxIdDictCache;
- (void)clearRecommendReasonInfos;
- (id)getRecommendReasonInfoWithLiveId:(unsigned long long)arg1;
- (void)setRecommendReasonInfo:(id)arg1 forLiveId:(unsigned long long)arg2;
- (unsigned int)sensitveWordMaxNum;
- (void)setSensitveWordMaxNum:(unsigned int)arg1;
- (void)removeCacheFinderBoxIdForLiveId:(unsigned long long)arg1;
- (id)currentCacheFinderBoxIdForLiveId:(unsigned long long)arg1;
- (void)setCacheFinderBoxId:(id)arg1 forLiveId:(unsigned long long)arg2;
- (void)removeCacheFinderBoxId;
- (id)currentCacheFinderBoxId;
- (void)setCacheFinderBoxId:(id)arg1;
- (void)removeOlympicWinterTorchEventInfoCache;
- (id)currentOlympicWinterTorchEventInfoCache;
- (void)cacheOlympicWinterTorchEventInfo:(id)arg1;
- (id)getCurrentCachePivotReplayFeedReqInfoForEntrcSrc:(long long)arg1;
- (void)unCachePivotReplayFeedReqInfoForEntrcSrc:(long long)arg1;
- (void)cachePivotReplayFeedReqInfo:(id)arg1 forEntrcSrc:(long long)arg2;

@end


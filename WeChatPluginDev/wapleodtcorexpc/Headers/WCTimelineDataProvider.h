//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCTimelineDataProviderDelegate;

@interface WCTimelineDataProvider
{
    unsigned long long uiClientLatestID;
    NSString *fpHash;
    _Bool isWorking;
    id <WCTimelineDataProviderDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCTimelineDataProviderDelegate> delegate; // @synthesize delegate;
- (void)saveServerSession:(id)arg1;
- (void)parsePattern:(id)arg1;
- (void)updateConfig:(id)arg1 isFirstPage:(_Bool)arg2;
- (void)reportKVStatSightRecieveWithMeidaItem:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)parseResposeWsInfo:(id)arg1 requestIdentifier:(id)arg2 output:(id *)arg3;
- (_Bool)responseForSnsTimeLineResponse:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)requestForSnsTimeLineRequest:(unsigned long long)arg1 minId:(unsigned long long)arg2 lastRequestTime:(unsigned int)arg3 pageType:(long long)arg4;
- (unsigned int)getNetworkType;
- (id)converListToList:(id)arg1;
- (void)meggeObjectOperation:(id)arg1 snsObject:(id)arg2;
- (void)dealloc;
- (void)SafeMD5;
- (id)init;
- (unsigned int)onServiceCleanCache;
- (_Bool)updateNextPage:(unsigned long long)arg1 bottomId:(unsigned long long)arg2 minChangedTime:(unsigned int)arg3;
- (_Bool)updatePrePage:(unsigned long long)arg1;
- (_Bool)updateFirstPage:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isUpdating;
- (_Bool)checkAdDataValid:(id)arg1 sessionKeyAd:(id)arg2;
- (void)onTimelinePullResponseWithAdDataList:(id)arg1 forRequest:(id)arg2;
- (void)processAdPullResponse:(id)arg1 adDataItem:(id)arg2;
- (void)responseForSnsAdPullResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)tryToPullSnsAd:(id)arg1;
- (void)reportTimelinePullCost:(id)arg1 timelineRequest:(id)arg2 userData:(id)arg3;
- (void)processAdOperationReplace:(id)arg1;
- (void)reportAdLift:(long long)arg1 uxInfo:(id)arg2 snsId:(id)arg3;
- (void)processAdOperationLift:(id)arg1 feedList:(id)arg2 adList:(id)arg3;
- (void)processAdOperation:(id)arg1 feedList:(id)arg2 adList:(id)arg3;
- (void)changeAdTimeForPosition:(id)arg1 retList:(id)arg2;
- (void)delAdList:(id)arg1 retAdList:(id)arg2;
- (void)addUbdXmlAdtoAdList:(id)arg1;
- (void)addRecList:(id)arg1 toAdList:(id)arg2;
- (void)clearSnsAdExpInfo:(id)arg1;
- (void)onBrandContactHeadImageURLChange:(id)arg1;
- (void)onStrangerBrandHeadImageURLChange:(id)arg1;
- (void)updateAdvertiserInfo:(id)arg1;
- (_Bool)isAdCommentOrLikeBySelf:(id)arg1;
- (void)dumpAllNewAdList:(id)arg1;
- (void)delAdWithSnsId:(id)arg1 SnsId:(id)arg2;
- (id)convertServerRecList2List:(id)arg1;
- (id)converServerAdList2List:(id)arg1;
- (_Bool)hasExistAdItem:(id)arg1;
- (id)convertAdvertiseMsgListToList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


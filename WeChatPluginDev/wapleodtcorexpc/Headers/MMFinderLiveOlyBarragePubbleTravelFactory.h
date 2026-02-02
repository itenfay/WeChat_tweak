//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveActivityTask, MMFinderLiveOlyBarrageTravel, NSMutableArray, NSString;

@interface MMFinderLiveOlyBarragePubbleTravelFactory
{
    NSMutableArray *_barragePubbleTravelRouteList;
    MMFinderLiveOlyBarrageTravel *_barrageTravel;
}

+ (id)innerGetBarrageTravel;
+ (id)createBarragePubbleTravelListForLayoutStyleV3;
+ (double)getTravelAngleForIndex:(int)arg1;
+ (id)createBarragePubbleTravelListForLayoutStyleV2;
+ (id)createBarragePubbleTravelListForLayoutStyleV1;
+ (id)createBarragePubbleTravelListForLayoutStyleV0;
+ (id)getBarrageTravel;
+ (unsigned long long)getBarragePubbleTravelCountForLayoutStyle:(long long)arg1;
+ (id)createBarragePubbleTravelListForLayoutStyle:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveOlyBarrageTravel *barrageTravel; // @synthesize barrageTravel=_barrageTravel;
@property(retain, nonatomic) NSMutableArray *barragePubbleTravelRouteList; // @synthesize barragePubbleTravelRouteList=_barragePubbleTravelRouteList;
- (id)convertToBarrageTrailStageListFromInitialList:(id)arg1;
- (id)convertToBarragePubbleTravelListFromInitialList:(id)arg1;
- (void)updateBarrageTravelConfigResource:(id)arg1;
- (void)updateBarragePubbleRouteConfigResource:(id)arg1;
- (void)initBarrageTravel;
- (void)initBarragePubbleTravelRouteList;
- (void)initDefaultSrc;
@property(readonly, nonatomic) MMFinderLiveActivityTask *currentActivityTask;
- (void)updateResource:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


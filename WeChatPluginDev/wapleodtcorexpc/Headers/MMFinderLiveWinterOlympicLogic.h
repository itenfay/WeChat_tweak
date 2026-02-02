//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveActivityTask, MMFinderLiveActivityTaskId;
@protocol MMFinderLiveWinterOlympicLogicDelegate;

@interface MMFinderLiveWinterOlympicLogic
{
    _Bool _hasInitTorch;
    id <MMFinderLiveWinterOlympicLogicDelegate> _liveLogicDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasInitTorch; // @synthesize hasInitTorch=_hasInitTorch;
@property(nonatomic) __weak id <MMFinderLiveWinterOlympicLogicDelegate> liveLogicDelegate; // @synthesize liveLogicDelegate=_liveLogicDelegate;
- (void)onGetFinderActivityLiveWinterOlympicsStartStatusUpdated:(_Bool)arg1 withTaskId:(id)arg2;
- (void)onGetFinderActivityLiveWinterOlympicsTocherTotalUpdated:(unsigned long long)arg1 withTaskId:(id)arg2;
- (void)onJoinFinderLiveError:(id)arg1 finderDataItem:(id)arg2 joinLiveContext:(id)arg3 errorPage:(id)arg4;
- (void)fetchRewardGiftList;
- (_Bool)shouldDisplayLawTips;
- (unsigned long long)torchSourceFromFinderLiveRoomStartScene:(unsigned long long)arg1;
- (void)loadFont;
@property(readonly, nonatomic) MMFinderLiveActivityTask *activityTask;
@property(readonly, nonatomic) MMFinderLiveActivityTaskId *activityTaskId;
- (void)dealloc;
- (id)init;
- (id)initWithTaskId:(id)arg1;

@end


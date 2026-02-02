//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveMilestoneLotteryInfo, MMFinderLiveMilestoneLotteryDetailWinnerResultView, NSString;

@interface MMFinderLiveMilestoneLotteryDetailResultView
{
    _Bool _hasCheckedGiftAnimation;
    FinderLiveMilestoneLotteryInfo *_lotteryInfo;
    MMFinderLiveMilestoneLotteryDetailWinnerResultView *_winnerResultView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasCheckedGiftAnimation; // @synthesize hasCheckedGiftAnimation=_hasCheckedGiftAnimation;
@property(retain, nonatomic) MMFinderLiveMilestoneLotteryDetailWinnerResultView *winnerResultView; // @synthesize winnerResultView=_winnerResultView;
@property(retain, nonatomic) FinderLiveMilestoneLotteryInfo *lotteryInfo; // @synthesize lotteryInfo=_lotteryInfo;
- (void)onCurrentMilestoneLotteryMetaInfoChanged:(id)arg1 prevInfo:(id)arg2;
- (void)onOngoingMilestoneLotteryInfoUpdated:(id)arg1;
- (void)onOngoingMilestoneLotteryInfoChanged:(id)arg1 prevInfo:(id)arg2;
- (_Bool)updateLotteryAdaptedPercentIfNeeded;
- (_Bool)checkParamValid;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)commonInit;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 lotteryId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


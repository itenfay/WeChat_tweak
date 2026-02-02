//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveMilestoneLotteryDetailAttendView, MMFinderLiveMilestoneLotteryDetailMenuView, MMFinderLiveMilestoneLotteryDetailQuestionView, MMFinderLiveMilestoneLotteryDetailWinnerResultView, MMFinderLiveTaskId, NSString;

@interface MMFinderLiveMilestoneLotteryDetailView
{
    MMFinderLiveMilestoneLotteryDetailMenuView *_mainMenuView;
    MMFinderLiveMilestoneLotteryDetailAttendView *_attendView;
    MMFinderLiveMilestoneLotteryDetailQuestionView *_questionView;
    MMFinderLiveMilestoneLotteryDetailWinnerResultView *_winnerResultView;
    MMFinderLiveTaskId *_taskId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak MMFinderLiveMilestoneLotteryDetailWinnerResultView *winnerResultView; // @synthesize winnerResultView=_winnerResultView;
@property(nonatomic) __weak MMFinderLiveMilestoneLotteryDetailQuestionView *questionView; // @synthesize questionView=_questionView;
@property(nonatomic) __weak MMFinderLiveMilestoneLotteryDetailAttendView *attendView; // @synthesize attendView=_attendView;
@property(nonatomic) __weak MMFinderLiveMilestoneLotteryDetailMenuView *mainMenuView; // @synthesize mainMenuView=_mainMenuView;
- (void)openQuestionViewWithLotteryId:(id)arg1;
- (void)openAttendViewWithLotteryId:(id)arg1 animated:(_Bool)arg2;
- (void)reportMenuItemExposeWithItems:(id)arg1 prevItems:(id)arg2;
- (void)reloadMenuView;
- (void)onCurrentMilestoneLotteryMetaInfoUpdated:(id)arg1;
- (void)onCurrentMilestoneLotteryMetaInfoChanged:(id)arg1 prevInfo:(id)arg2;
- (void)showInView:(id)arg1 aniamted:(_Bool)arg2;
- (_Bool)updateLotteryAdaptedPercentIfNeeded;
- (void)_gotoLotteryDetailWithLotteryInfo:(id)arg1;
- (void)handleItemDidSelect:(id)arg1;
- (id)convertedMenuItems;
- (void)commonInit;
- (void)refreshOnViewAppear;
- (id)initWithViewModel:(id)arg1 taskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


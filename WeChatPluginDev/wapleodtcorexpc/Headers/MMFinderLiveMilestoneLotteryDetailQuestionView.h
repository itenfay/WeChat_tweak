//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveMilestoneLotteryDetailQuestionOptionView, MMFinderLiveMilestoneLotteryViewModel, MMUIButton, NSString, UILabel, UIScrollView, UIView;

@interface MMFinderLiveMilestoneLotteryDetailQuestionView
{
    CDUnknownBlockType _onSubmitAction;
    MMFinderLiveMilestoneLotteryViewModel *_vm;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_questionLabel;
    UIView *_optionContainerView;
    UIScrollView *_optionScrollView;
    UILabel *_countdownLabel;
    MMUIButton *_submitButton;
    MMFinderLiveMilestoneLotteryDetailQuestionOptionView *_lastSelectedOptionView;
    NSString *_lotteryId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lotteryId; // @synthesize lotteryId=_lotteryId;
@property(nonatomic) __weak MMFinderLiveMilestoneLotteryDetailQuestionOptionView *lastSelectedOptionView; // @synthesize lastSelectedOptionView=_lastSelectedOptionView;
@property(retain, nonatomic) MMUIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
@property(retain, nonatomic) UIScrollView *optionScrollView; // @synthesize optionScrollView=_optionScrollView;
@property(retain, nonatomic) UIView *optionContainerView; // @synthesize optionContainerView=_optionContainerView;
@property(retain, nonatomic) UILabel *questionLabel; // @synthesize questionLabel=_questionLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMFinderLiveMilestoneLotteryViewModel *vm; // @synthesize vm=_vm;
@property(copy, nonatomic) CDUnknownBlockType onSubmitAction; // @synthesize onSubmitAction=_onSubmitAction;
- (void)onSubmitButtonTapped;
- (void)reloadUIForLotteryUpdate;
- (void)updateSubmitButtonEnableState;
- (_Bool)isCurrentLotteryStillRunning;
- (_Bool)hasAttendLottery;
- (void)onOngoingLotteryCountdown:(id)arg1 remainingSeconds:(unsigned int)arg2;
- (void)onOngoingMilestoneLotteryInfoUpdated:(id)arg1;
- (void)onOngoingMilestoneLotteryInfoChanged:(id)arg1 prevInfo:(id)arg2;
- (void)reloadSubmitButton;
- (void)rebuildOptionViews;
- (void)layoutGradientMask;
- (id)backButtonColor;
- (void)initUI;
- (void)layoutCountdownLabel;
- (void)layoutSubviews;
- (void)didAppear;
- (id)currentQuestionInfo;
- (void)updateCountdownString:(id)arg1;
- (id)initWithViewModel:(id)arg1 lotteryId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


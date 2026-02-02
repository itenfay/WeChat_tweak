//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveMilestoneLotteryCouponInfo, MMFinderLiveMilestoneLotteryViewModel, MMUIButton, MMWebImageView, NSString, UIButton, UILabel, UIView;

@interface MMFinderLiveMilestoneLotteryDetailAttendView
{
    _Bool _accountAlreadyFollowed;
    CDUnknownBlockType _onAttendAction;
    MMFinderLiveMilestoneLotteryViewModel *_vm;
    MMFinderLiveMilestoneLotteryCouponInfo *_couponInfo;
    NSString *_lotteryId;
    MMUIButton *_attendButton;
    MMUIButton *_awardDetailButton;
    UILabel *_awardLabel;
    MMWebImageView *_awardImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UILabel *_countdownLabel;
    UIView *_followTopLineView;
    UIView *_followBottomLineView;
    MMWebImageView *_followAccountImageView;
    UILabel *_followAccountNameLabel;
    UILabel *_followAccountDescLabel;
    MMWebImageView *_followAccountIconImageView;
    UIButton *_accountProfileButton;
    unsigned long long _countdownSeconds;
    struct CGSize _lastLayoutSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize lastLayoutSize; // @synthesize lastLayoutSize=_lastLayoutSize;
@property(nonatomic) unsigned long long countdownSeconds; // @synthesize countdownSeconds=_countdownSeconds;
@property(retain, nonatomic) UIButton *accountProfileButton; // @synthesize accountProfileButton=_accountProfileButton;
@property(nonatomic) _Bool accountAlreadyFollowed; // @synthesize accountAlreadyFollowed=_accountAlreadyFollowed;
@property(retain, nonatomic) MMWebImageView *followAccountIconImageView; // @synthesize followAccountIconImageView=_followAccountIconImageView;
@property(retain, nonatomic) UILabel *followAccountDescLabel; // @synthesize followAccountDescLabel=_followAccountDescLabel;
@property(retain, nonatomic) UILabel *followAccountNameLabel; // @synthesize followAccountNameLabel=_followAccountNameLabel;
@property(retain, nonatomic) MMWebImageView *followAccountImageView; // @synthesize followAccountImageView=_followAccountImageView;
@property(retain, nonatomic) UIView *followBottomLineView; // @synthesize followBottomLineView=_followBottomLineView;
@property(retain, nonatomic) UIView *followTopLineView; // @synthesize followTopLineView=_followTopLineView;
@property(retain, nonatomic) UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *awardImageView; // @synthesize awardImageView=_awardImageView;
@property(retain, nonatomic) UILabel *awardLabel; // @synthesize awardLabel=_awardLabel;
@property(retain, nonatomic) MMUIButton *awardDetailButton; // @synthesize awardDetailButton=_awardDetailButton;
@property(retain, nonatomic) MMUIButton *attendButton; // @synthesize attendButton=_attendButton;
@property(retain, nonatomic) NSString *lotteryId; // @synthesize lotteryId=_lotteryId;
@property(retain, nonatomic) MMFinderLiveMilestoneLotteryCouponInfo *couponInfo; // @synthesize couponInfo=_couponInfo;
@property(retain, nonatomic) MMFinderLiveMilestoneLotteryViewModel *vm; // @synthesize vm=_vm;
@property(copy, nonatomic) CDUnknownBlockType onAttendAction; // @synthesize onAttendAction=_onAttendAction;
- (id)audienceLogReporter;
- (void)onLoadImageOK:(id)arg1;
- (void)onTapAccountProfile;
- (void)onAwardDetailButtonClicked;
- (void)onAttendButtonTapped;
- (void)updateCountdownLabelWithAnimation:(_Bool)arg1;
- (void)updateCountdownLabel;
- (void)refreshFollowStateIfNeeded;
- (void)reloadAttendButtonState;
- (void)reloadFollowAccountDescLabel;
- (void)reloadDescLabel;
- (_Bool)isAttendTypeFollow;
- (double)getAwardImageLen;
- (id)makeLineView;
- (id)backButtonColor;
- (void)initUI;
- (id)curLotteryInfo;
- (void)layoutCountdownLabel;
- (void)layoutAttendButton;
- (void)layoutSubviews;
- (void)onOngoingMilestoneLotteryInfoChanged:(id)arg1 prevInfo:(id)arg2;
- (void)onOngoingLotteryCountdown:(id)arg1 remainingSeconds:(unsigned int)arg2;
- (void)onOngoingMilestoneLotteryInfoUpdated:(id)arg1;
- (id)initWithViewModel:(id)arg1 lotteryId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


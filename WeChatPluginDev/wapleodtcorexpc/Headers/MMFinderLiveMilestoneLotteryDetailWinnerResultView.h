//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveMilestoneLotteryInfo, MMFinderLiveMilestoneLotteryViewModel, MMHeadImageView, MMUIButton, MMWebImageView, NSString, RichTextView, UIImageView, UILabel;

@interface MMFinderLiveMilestoneLotteryDetailWinnerResultView
{
    _Bool _forceHideReceiveButton;
    _Bool _shouldPlayPrizeGiftAnimation;
    MMFinderLiveMilestoneLotteryViewModel *_vm;
    NSString *_lotteryId;
    FinderLiveMilestoneLotteryInfo *_lotteryInfo;
    MMHeadImageView *_winnerAvatarView;
    UILabel *_winnerNameLabel;
    UILabel *_winTipLabel;
    UILabel *_prizeNameLabel;
    UIImageView *_prizeLeftDecorationImageView;
    UIImageView *_prizeRightDecorationImageView;
    UILabel *_prizeDescLabel;
    MMUIButton *_receivePrizeBtn;
    UILabel *_receivePrizeLabel;
    MMWebImageView *_prizeImageView;
    UILabel *_lostTitleLabel;
    MMWebImageView *_lostEncourageImageView;
    MMUIButton *_voteResultBtn;
    RichTextView *_supplementLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *supplementLabel; // @synthesize supplementLabel=_supplementLabel;
@property(retain, nonatomic) MMUIButton *voteResultBtn; // @synthesize voteResultBtn=_voteResultBtn;
@property(retain, nonatomic) MMWebImageView *lostEncourageImageView; // @synthesize lostEncourageImageView=_lostEncourageImageView;
@property(retain, nonatomic) UILabel *lostTitleLabel; // @synthesize lostTitleLabel=_lostTitleLabel;
@property(retain, nonatomic) MMWebImageView *prizeImageView; // @synthesize prizeImageView=_prizeImageView;
@property(retain, nonatomic) UILabel *receivePrizeLabel; // @synthesize receivePrizeLabel=_receivePrizeLabel;
@property(retain, nonatomic) MMUIButton *receivePrizeBtn; // @synthesize receivePrizeBtn=_receivePrizeBtn;
@property(retain, nonatomic) UILabel *prizeDescLabel; // @synthesize prizeDescLabel=_prizeDescLabel;
@property(retain, nonatomic) UIImageView *prizeRightDecorationImageView; // @synthesize prizeRightDecorationImageView=_prizeRightDecorationImageView;
@property(retain, nonatomic) UIImageView *prizeLeftDecorationImageView; // @synthesize prizeLeftDecorationImageView=_prizeLeftDecorationImageView;
@property(retain, nonatomic) UILabel *prizeNameLabel; // @synthesize prizeNameLabel=_prizeNameLabel;
@property(retain, nonatomic) UILabel *winTipLabel; // @synthesize winTipLabel=_winTipLabel;
@property(retain, nonatomic) UILabel *winnerNameLabel; // @synthesize winnerNameLabel=_winnerNameLabel;
@property(retain, nonatomic) MMHeadImageView *winnerAvatarView; // @synthesize winnerAvatarView=_winnerAvatarView;
@property(retain, nonatomic) FinderLiveMilestoneLotteryInfo *lotteryInfo; // @synthesize lotteryInfo=_lotteryInfo;
@property(copy, nonatomic) NSString *lotteryId; // @synthesize lotteryId=_lotteryId;
@property(retain, nonatomic) MMFinderLiveMilestoneLotteryViewModel *vm; // @synthesize vm=_vm;
@property(nonatomic) _Bool shouldPlayPrizeGiftAnimation; // @synthesize shouldPlayPrizeGiftAnimation=_shouldPlayPrizeGiftAnimation;
@property(nonatomic) _Bool forceHideReceiveButton; // @synthesize forceHideReceiveButton=_forceHideReceiveButton;
- (void)onLotteryCardWillCloseByCloseButton;
- (void)onVoteResultBtnTapped;
- (void)onReceivePrizeBtnTapped;
- (id)getVoteResultReportCustomDict;
- (void)reportReceivePrizeBtnTapped;
- (void)reportReceivePrizeBtnExpose;
- (void)reportVoteButtonExpose;
- (void)reloadReceivePrizeButton;
- (void)refreshData;
- (_Bool)isPrizeMiniApp;
- (_Bool)isPrizeGift;
- (_Bool)isPrizeImageStyle;
- (_Bool)currentLostInfoHasEncouragement;
- (_Bool)didParicipate;
- (_Bool)didWin;
- (id)prizeDesc;
- (id)couponInfo;
- (id)getUserDisplayName;
- (id)getUserHeadImageUrl;
- (void)onWinnerRedPacketStatusUpdated:(id)arg1;
- (void)onWinnerCouponInfoUpdated:(id)arg1 prevInfo:(id)arg2 lotteryId:(id)arg3;
- (void)playPrizeGiftAnimationIfNeeded;
- (_Bool)shouldHideReceiveButton;
- (void)updateLotteryInfo:(id)arg1 equalCompare:(_Bool)arg2;
- (void)layoutLostEncouragementImageView;
- (void)layoutLostTitleLabel;
- (void)layoutPrizeDescLabel;
- (void)layoutReceivePrizeLabel;
- (void)layoutReceivePrizeBtn;
- (void)layoutVoteResultBtn;
- (void)layoutSupplementLabel;
- (double)bottomForBottomComponent;
- (id)buildDecorationImageView;
- (void)layoutPrizeDecorationImageViews;
- (void)layoutPrizeImageView;
- (void)layoutPrizeNameLabel;
- (void)layoutWinTipLabel;
- (void)layoutWinnerAvatarAndNameInSameLine;
- (void)layoutWinnerNameLabel;
- (void)layoutWinnerAvatarView;
- (void)layoutUI;
- (id)backButtonColor;
- (void)initUI;
- (void)layoutSubviews;
- (void)didAppear;
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


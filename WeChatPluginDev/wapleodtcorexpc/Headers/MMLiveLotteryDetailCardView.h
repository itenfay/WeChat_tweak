//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveLotteryDisplayLogic, MMFinderLiveLotteryInfo, MMFinderLiveTask, MMFinderLiveTaskId, MMHeadImageView, MMLiveLotteryCardGoodsView, MMLiveLotteryDetailCardGiftView, MMLiveLotteryWinnerRecordListView, MMUIButton, MMUILabel, NSString, RichTextView, UIImage, UIImageView, UILabel, WCAddressBaseAddress;
@protocol MMLiveLotteryDetailCardViewDelegate;

@interface MMLiveLotteryDetailCardView : UIView
{
    _Bool _isAudience;
    _Bool _inWinnersDetailView;
    _Bool _hasRefreshedWinnersListView;
    id <MMLiveLotteryDetailCardViewDelegate> _actionDelegate;
    MMFinderLiveLotteryInfo *_lotteryInfo;
    MMFinderLiveLotteryDisplayLogic *_lotteryDisplayLogic;
    MMFinderLiveTaskId *_liveTaskId;
    unsigned long long _remainingTime;
    NSString *_currentHeadImageUrl;
    WCAddressBaseAddress *_addressInfo;
    UIImage *_defaultBackgroundImage;
    UIImage *_winnerBackgroundImage;
    MMUIButton *_closeButton;
    UIView *_cardView;
    UIImageView *_lotteryInfoView;
    UIImageView *_winnersDetailView;
    MMLiveLotteryWinnerRecordListView *_winnersListView;
    UILabel *_titleLabel;
    RichTextView *_agreementText;
    UILabel *_noParticipateResultTitle;
    MMUIButton *_redTipButton;
    MMLiveLotteryDetailCardGiftView *_giftView;
    UILabel *_prizeLabel;
    MMUIButton *_participateButton;
    UILabel *_remainingTimeLabel;
    UILabel *_participateCountLabel;
    MMUIButton *_fillWinInformationButton;
    MMUILabel *_timeOutLabel;
    MMHeadImageView *_winnerAvatarView;
    UILabel *_winnerNameLabel;
    UIImageView *_leftLotteryImageView;
    UIImageView *_rightLotteryImageView;
    MMUIButton *_winTitleButton;
    UILabel *_loseTitle;
    UIView *_resultTipView;
    UILabel *_resultTipLabel;
    UIImageView *_resultTipArrow;
    MMLiveLotteryCardGoodsView *_goodsView;
    UIImageView *_gameTeamUpImageView;
    UILabel *_anchorTimeTipLabel;
    UILabel *_anchorParticipateCountLabel;
    MMUILabel *_anchorWinnerCountLabel;
    MMUIButton *_anchorCancelButton;
    UILabel *_winnersDetailTitleLabel;
    UILabel *_winnersDetailParticipateCountLabel;
    UILabel *_winnersDetailResultTipLabel;
    MMUIButton *_winnersDetailBackButton;
    double _cardViewWidthPortrait;
    double _cardViewWidthLandScape;
    double _cardViewHeightPortrait;
    double _cardViewHeightLandScape;
}

+ (long long)transferAliasRoleTypeFromPersonalMsgScene:(unsigned int)arg1;
- (void).cxx_destruct;
@property(nonatomic) double cardViewHeightLandScape; // @synthesize cardViewHeightLandScape=_cardViewHeightLandScape;
@property(nonatomic) double cardViewHeightPortrait; // @synthesize cardViewHeightPortrait=_cardViewHeightPortrait;
@property(nonatomic) double cardViewWidthLandScape; // @synthesize cardViewWidthLandScape=_cardViewWidthLandScape;
@property(nonatomic) double cardViewWidthPortrait; // @synthesize cardViewWidthPortrait=_cardViewWidthPortrait;
@property(retain, nonatomic) MMUIButton *winnersDetailBackButton; // @synthesize winnersDetailBackButton=_winnersDetailBackButton;
@property(retain, nonatomic) UILabel *winnersDetailResultTipLabel; // @synthesize winnersDetailResultTipLabel=_winnersDetailResultTipLabel;
@property(retain, nonatomic) UILabel *winnersDetailParticipateCountLabel; // @synthesize winnersDetailParticipateCountLabel=_winnersDetailParticipateCountLabel;
@property(retain, nonatomic) UILabel *winnersDetailTitleLabel; // @synthesize winnersDetailTitleLabel=_winnersDetailTitleLabel;
@property(retain, nonatomic) MMUIButton *anchorCancelButton; // @synthesize anchorCancelButton=_anchorCancelButton;
@property(retain, nonatomic) MMUILabel *anchorWinnerCountLabel; // @synthesize anchorWinnerCountLabel=_anchorWinnerCountLabel;
@property(retain, nonatomic) UILabel *anchorParticipateCountLabel; // @synthesize anchorParticipateCountLabel=_anchorParticipateCountLabel;
@property(retain, nonatomic) UILabel *anchorTimeTipLabel; // @synthesize anchorTimeTipLabel=_anchorTimeTipLabel;
@property(retain, nonatomic) UIImageView *gameTeamUpImageView; // @synthesize gameTeamUpImageView=_gameTeamUpImageView;
@property(retain, nonatomic) MMLiveLotteryCardGoodsView *goodsView; // @synthesize goodsView=_goodsView;
@property(retain, nonatomic) UIImageView *resultTipArrow; // @synthesize resultTipArrow=_resultTipArrow;
@property(retain, nonatomic) UILabel *resultTipLabel; // @synthesize resultTipLabel=_resultTipLabel;
@property(retain, nonatomic) UIView *resultTipView; // @synthesize resultTipView=_resultTipView;
@property(retain, nonatomic) UILabel *loseTitle; // @synthesize loseTitle=_loseTitle;
@property(retain, nonatomic) MMUIButton *winTitleButton; // @synthesize winTitleButton=_winTitleButton;
@property(retain, nonatomic) UIImageView *rightLotteryImageView; // @synthesize rightLotteryImageView=_rightLotteryImageView;
@property(retain, nonatomic) UIImageView *leftLotteryImageView; // @synthesize leftLotteryImageView=_leftLotteryImageView;
@property(retain, nonatomic) UILabel *winnerNameLabel; // @synthesize winnerNameLabel=_winnerNameLabel;
@property(retain, nonatomic) MMHeadImageView *winnerAvatarView; // @synthesize winnerAvatarView=_winnerAvatarView;
@property(retain, nonatomic) MMUILabel *timeOutLabel; // @synthesize timeOutLabel=_timeOutLabel;
@property(retain, nonatomic) MMUIButton *fillWinInformationButton; // @synthesize fillWinInformationButton=_fillWinInformationButton;
@property(retain, nonatomic) UILabel *participateCountLabel; // @synthesize participateCountLabel=_participateCountLabel;
@property(retain, nonatomic) UILabel *remainingTimeLabel; // @synthesize remainingTimeLabel=_remainingTimeLabel;
@property(retain, nonatomic) MMUIButton *participateButton; // @synthesize participateButton=_participateButton;
@property(retain, nonatomic) UILabel *prizeLabel; // @synthesize prizeLabel=_prizeLabel;
@property(retain, nonatomic) MMLiveLotteryDetailCardGiftView *giftView; // @synthesize giftView=_giftView;
@property(retain, nonatomic) MMUIButton *redTipButton; // @synthesize redTipButton=_redTipButton;
@property(retain, nonatomic) UILabel *noParticipateResultTitle; // @synthesize noParticipateResultTitle=_noParticipateResultTitle;
@property(retain, nonatomic) RichTextView *agreementText; // @synthesize agreementText=_agreementText;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMLiveLotteryWinnerRecordListView *winnersListView; // @synthesize winnersListView=_winnersListView;
@property(retain, nonatomic) UIImageView *winnersDetailView; // @synthesize winnersDetailView=_winnersDetailView;
@property(retain, nonatomic) UIImageView *lotteryInfoView; // @synthesize lotteryInfoView=_lotteryInfoView;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImage *winnerBackgroundImage; // @synthesize winnerBackgroundImage=_winnerBackgroundImage;
@property(retain, nonatomic) UIImage *defaultBackgroundImage; // @synthesize defaultBackgroundImage=_defaultBackgroundImage;
@property(retain, nonatomic) WCAddressBaseAddress *addressInfo; // @synthesize addressInfo=_addressInfo;
@property(copy, nonatomic) NSString *currentHeadImageUrl; // @synthesize currentHeadImageUrl=_currentHeadImageUrl;
@property(nonatomic) _Bool hasRefreshedWinnersListView; // @synthesize hasRefreshedWinnersListView=_hasRefreshedWinnersListView;
@property(nonatomic) unsigned long long remainingTime; // @synthesize remainingTime=_remainingTime;
@property(nonatomic) _Bool inWinnersDetailView; // @synthesize inWinnersDetailView=_inWinnersDetailView;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(nonatomic) _Bool isAudience; // @synthesize isAudience=_isAudience;
@property(nonatomic) __weak MMFinderLiveLotteryDisplayLogic *lotteryDisplayLogic; // @synthesize lotteryDisplayLogic=_lotteryDisplayLogic;
@property(retain, nonatomic) MMFinderLiveLotteryInfo *lotteryInfo; // @synthesize lotteryInfo=_lotteryInfo;
@property(nonatomic) __weak id <MMLiveLotteryDetailCardViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)gotoChatViewVCWithContact:(id)arg1;
- (id)getRemainingTimeAttributedString;
- (id)getActionButtonChangeText:(id)arg1 color:(id)arg2 font:(id)arg3 isFinishOrder:(_Bool)arg4;
- (void)updateAnchorWinnerLabelTitle;
- (void)updateInformationButtonTitle;
- (id)getAddressDetailString:(id)arg1;
- (void)didSelectAddress:(id)arg1;
- (void)onShowMyAddress;
- (void)handelMsgEdit:(id)arg1 type:(int)arg2;
- (void)handleClaimMethodFreeOrder:(unsigned long long)arg1;
- (void)handleClaimMethodFreeGameTeamUp;
- (void)handlPackageGiftClick;
- (void)handleActionButtonClick:(id)arg1;
- (_Bool)isShowFillButton;
- (_Bool)isShowTimeOutLabel;
- (_Bool)isFinishOrder;
- (_Bool)isFinishEdit;
- (_Bool)isLotteryRichTextView:(id)arg1;
- (void)onLinkHighlighted:(_Bool)arg1 url:(id)arg2 frame:(struct CGRect)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (double)getParticipateButtonWidth;
- (_Bool)hasJoinedFansClub;
- (_Bool)isFollowState;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (id)getWinnerHeadImageUrl;
- (id)getWinnerDisplayName;
- (void)changeToWinnersDetailView;
- (void)onTapWinnersDetailBackButton;
- (void)onTapAnchorCancelButton;
- (void)onTapParticipateButton;
- (void)_internalCloseWithEndState:(unsigned long long)arg1;
- (void)closeViewWithEndState:(unsigned long long)arg1;
- (void)closeView;
- (void)onCardViewTap;
- (void)_internalShowCardView;
- (void)showCardView;
- (void)updateRemainingTime:(unsigned long long)arg1;
- (void)updateLotteryInfo:(id)arg1;
- (void)updateTimeLabelAndParticipateCountLabelFrame;
- (void)updateTimeLabelText;
- (void)updatePrizeLabelFrame;
- (_Bool)isShowPackageGift;
- (_Bool)isShowGameTeamUp;
- (_Bool)isShowGoodsView;
- (void)updatePackageGiftFrame;
- (void)updateGameTeamUpImageViewFrame;
- (void)updateGoodsViewFrame;
- (void)updateTitleLabelFrame;
- (void)updateAgreementText;
- (void)updateDefaultBackgroundImage;
- (void)updateGiftView;
- (void)updateGameTeamUpImageView;
- (void)updateGoodsView;
- (void)updatePrizeLabelText;
- (void)updateTitleLabelText;
- (void)layoutWinnerResultTipLabel;
- (void)layoutWinnersListView;
- (void)refreshWinnersListView;
- (void)updateViewsFrame;
- (void)updateParticipateButtonTitle;
- (void)resetParticipateButtonUnableState;
- (void)resetParticipateButtonNormalState;
- (void)updateViews;
- (void)addGestureRecognizers;
- (id)initWithFrame:(struct CGRect)arg1 andLiveTaskId:(id)arg2;
- (void)layoutSubviews;
- (double)liveAdaptedValue:(double)arg1;
@property(readonly, nonatomic) double cardViewHeightIpad;
@property(readonly, nonatomic) double cardViewWidthIpad;
@property(readonly, nonatomic) double cardViewHeight;
@property(readonly, nonatomic) double cardViewWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


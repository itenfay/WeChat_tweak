//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMCPLabel, MMFinderLiveFansGroupSignView, MMFinderLiveGlobalRankSignView, MMFinderLiveLiveRoleSignView, MMFinderLiveNormalTextSignView, MMFinderLiveSharePubbleTipView, MMFinderLiveTask, MMFinderLiveUserStateItem, MMLiveHeatAndIconButton, MMUIImageView, MMUILabel, UITapGestureRecognizer, UIView, WCFinderHeadImageView;
@protocol MMFinderLiveOnlineStateCollectionViewCellDelegate;

@interface MMFinderLiveOnlineStateCollectionViewCell : UICollectionViewCell
{
    _Bool _bNeedSeparatorLine;
    _Bool _forceDarkByBiz;
    _Bool _showHeadImage;
    id <MMFinderLiveOnlineStateCollectionViewCellDelegate> _cellDelegate;
    MMFinderLiveSharePubbleTipView *_tipsPubbleView;
    MMUILabel *_rankLabel;
    WCFinderHeadImageView *_headImageView;
    MMCPLabel *_displayNameLabel;
    MMUILabel *_descLabel;
    MMUIImageView *_banCommentIconImageView;
    MMUIImageView *_roleIconImageView;
    MMUIImageView *_genderIconImageView;
    MMUILabel *_signLabel;
    MMFinderLiveGlobalRankSignView *_globalRankSignView;
    MMFinderLiveFansGroupSignView *_fansGroupSignView;
    MMFinderLiveLiveRoleSignView *_roleSignView;
    MMFinderLiveLiveRoleSignView *_mysteriousSignView;
    MMFinderLiveNormalTextSignView *_buySignView;
    MMFinderLiveNormalTextSignView *_frequentWatchSignView;
    MMFinderLiveNormalTextSignView *_followerSignView;
    MMUIImageView *_switchAccountImageView;
    MMUILabel *_rewardAmountLabel;
    MMLiveHeatAndIconButton *_selectGiftButton;
    UIView *_separatorLine;
    MMUILabel *_scoreAmountLabel;
    MMFinderLiveUserStateItem *_onlineUserItem;
    UITapGestureRecognizer *_tipsPubbleViewTapGesture;
}

+ (id)ReuseIdentifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool showHeadImage; // @synthesize showHeadImage=_showHeadImage;
@property(retain, nonatomic) UITapGestureRecognizer *tipsPubbleViewTapGesture; // @synthesize tipsPubbleViewTapGesture=_tipsPubbleViewTapGesture;
@property(retain, nonatomic) MMFinderLiveUserStateItem *onlineUserItem; // @synthesize onlineUserItem=_onlineUserItem;
@property(retain, nonatomic) MMUILabel *scoreAmountLabel; // @synthesize scoreAmountLabel=_scoreAmountLabel;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) MMLiveHeatAndIconButton *selectGiftButton; // @synthesize selectGiftButton=_selectGiftButton;
@property(retain, nonatomic) MMUILabel *rewardAmountLabel; // @synthesize rewardAmountLabel=_rewardAmountLabel;
@property(retain, nonatomic) MMUIImageView *switchAccountImageView; // @synthesize switchAccountImageView=_switchAccountImageView;
@property(retain, nonatomic) MMFinderLiveNormalTextSignView *followerSignView; // @synthesize followerSignView=_followerSignView;
@property(retain, nonatomic) MMFinderLiveNormalTextSignView *frequentWatchSignView; // @synthesize frequentWatchSignView=_frequentWatchSignView;
@property(retain, nonatomic) MMFinderLiveNormalTextSignView *buySignView; // @synthesize buySignView=_buySignView;
@property(retain, nonatomic) MMFinderLiveLiveRoleSignView *mysteriousSignView; // @synthesize mysteriousSignView=_mysteriousSignView;
@property(retain, nonatomic) MMFinderLiveLiveRoleSignView *roleSignView; // @synthesize roleSignView=_roleSignView;
@property(retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView; // @synthesize fansGroupSignView=_fansGroupSignView;
@property(retain, nonatomic) MMFinderLiveGlobalRankSignView *globalRankSignView; // @synthesize globalRankSignView=_globalRankSignView;
@property(retain, nonatomic) MMUILabel *signLabel; // @synthesize signLabel=_signLabel;
@property(retain, nonatomic) MMUIImageView *genderIconImageView; // @synthesize genderIconImageView=_genderIconImageView;
@property(retain, nonatomic) MMUIImageView *roleIconImageView; // @synthesize roleIconImageView=_roleIconImageView;
@property(retain, nonatomic) MMUIImageView *banCommentIconImageView; // @synthesize banCommentIconImageView=_banCommentIconImageView;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMCPLabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMUILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(nonatomic) _Bool forceDarkByBiz; // @synthesize forceDarkByBiz=_forceDarkByBiz;
@property(nonatomic) _Bool bNeedSeparatorLine; // @synthesize bNeedSeparatorLine=_bNeedSeparatorLine;
@property(retain, nonatomic) MMFinderLiveSharePubbleTipView *tipsPubbleView; // @synthesize tipsPubbleView=_tipsPubbleView;
@property(nonatomic) __weak id <MMFinderLiveOnlineStateCollectionViewCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void)hidePubbleTipsView;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)onSelectGiftButtonClicked;
- (_Bool)forceDark;
- (id)iconColor;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)configCommonSignView:(id)arg1 text:(id)arg2;
- (void)updateWithOnlineUserItem:(id)arg1 showRewardAmount:(_Bool)arg2 showHeadImage:(_Bool)arg3 isSelf:(_Bool)arg4 showSelectGiftBtn:(_Bool)arg5;
- (void)updateWithOnlineUserItem:(id)arg1 showRewardAmount:(_Bool)arg2 showHeadImage:(_Bool)arg3 showSelectGiftBtn:(_Bool)arg4;
- (void)layoutSelectGiftBtn;
- (void)layoutTipsPubbleView;
- (void)layoutRankLabel;
- (void)initFollowerSignView;
- (void)initFrequentWatchSignView;
- (void)initBuySignView;
- (void)initMysteriousSignView;
- (void)initRoleSignView;
- (void)initGenderIconImageView;
- (void)initSeperatorLine;
- (void)initScoreAmountLabel;
- (void)initRewardAmountLabel;
- (void)initFansGroupSignView;
- (void)initGlobalRankSignView;
- (void)initRoleIconImageView;
- (void)updateBanCommentIconImageView;
- (void)initBanCommentIconImageView;
- (void)initSignLabel;
- (void)initDescLabel;
- (void)initNameLabel;
- (void)initHeadImageView;
- (void)initSwitchAccountView;
- (void)onTipsPubbleViewTaped:(id)arg1;
- (void)setTapGestureDelegate:(id)arg1;
- (void)initSwitchAccountTips;
- (id)initWithFrame:(struct CGRect)arg1;

@end


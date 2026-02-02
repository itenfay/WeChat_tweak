//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMFinderLiveFansGroupSignView, MMFinderLiveGameEsportSignView, MMFinderLiveGameRankSignView, MMFinderLiveGlobalRankSignView, MMFinderLiveLiveRoleSignView, MMFinderLiveNormalTextSignView, MMFinderLiveProductQuestionSignView, MMHeadImageView, MMUILabel, MMUIView, NSArray, NSMutableArray, PAGView, UIImageView, UIView;

@interface MMFinderLiveTableStyleCommentPubbleUserCell
{
    _Bool _disablePAGAnimation;
    UIImageView *_barrageBackgroundImgView;
    UIView *_barrageBackgroundMaskView;
    NSArray *_textGradientCGColorArray;
    unsigned long long _badgeSignCnt;
    MMHeadImageView *_headImageView;
    CAGradientLayer *_barrageBorderGradientLayer;
    UIImageView *_barrageSignIconView;
    MMFinderLiveProductQuestionSignView *_barrageProductQueSignView;
    MMUILabel *_signLabel;
    MMUIView *_signBackView;
    MMFinderLiveProductQuestionSignView *_productQuestionSignView;
    MMFinderLiveGlobalRankSignView *_globalRankSignView;
    MMFinderLiveFansGroupSignView *_fansGroupSignView;
    MMFinderLiveGameRankSignView *_gameRankSignView;
    MMFinderLiveGameEsportSignView *_gameEsportSignView;
    MMFinderLiveLiveRoleSignView *_roleSignView;
    MMFinderLiveLiveRoleSignView *_mysteriousSignView;
    MMFinderLiveNormalTextSignView *_buySignView;
    MMFinderLiveNormalTextSignView *_frequentWatchSignView;
    MMFinderLiveNormalTextSignView *_followerSignView;
    NSMutableArray *_signViewArraryForLayout;
    UIImageView *_arrowImageView;
    UIImageView *_barrageLeadingImageView;
    UIImageView *_barrageTrailingImageView;
    PAGView *_barrageLeadingPAGView;
    PAGView *_barrageTrailingPAGView;
    struct CGPoint _textGradientStartPoint;
    struct CGPoint _textGradientEndPoint;
    struct CGSize _lastTextGradientSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PAGView *barrageTrailingPAGView; // @synthesize barrageTrailingPAGView=_barrageTrailingPAGView;
@property(retain, nonatomic) PAGView *barrageLeadingPAGView; // @synthesize barrageLeadingPAGView=_barrageLeadingPAGView;
@property(retain, nonatomic) UIImageView *barrageTrailingImageView; // @synthesize barrageTrailingImageView=_barrageTrailingImageView;
@property(retain, nonatomic) UIImageView *barrageLeadingImageView; // @synthesize barrageLeadingImageView=_barrageLeadingImageView;
@property(nonatomic) struct CGSize lastTextGradientSize; // @synthesize lastTextGradientSize=_lastTextGradientSize;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) NSMutableArray *signViewArraryForLayout; // @synthesize signViewArraryForLayout=_signViewArraryForLayout;
@property(retain, nonatomic) MMFinderLiveNormalTextSignView *followerSignView; // @synthesize followerSignView=_followerSignView;
@property(retain, nonatomic) MMFinderLiveNormalTextSignView *frequentWatchSignView; // @synthesize frequentWatchSignView=_frequentWatchSignView;
@property(retain, nonatomic) MMFinderLiveNormalTextSignView *buySignView; // @synthesize buySignView=_buySignView;
@property(retain, nonatomic) MMFinderLiveLiveRoleSignView *mysteriousSignView; // @synthesize mysteriousSignView=_mysteriousSignView;
@property(retain, nonatomic) MMFinderLiveLiveRoleSignView *roleSignView; // @synthesize roleSignView=_roleSignView;
@property(retain, nonatomic) MMFinderLiveGameEsportSignView *gameEsportSignView; // @synthesize gameEsportSignView=_gameEsportSignView;
@property(retain, nonatomic) MMFinderLiveGameRankSignView *gameRankSignView; // @synthesize gameRankSignView=_gameRankSignView;
@property(retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView; // @synthesize fansGroupSignView=_fansGroupSignView;
@property(retain, nonatomic) MMFinderLiveGlobalRankSignView *globalRankSignView; // @synthesize globalRankSignView=_globalRankSignView;
@property(retain, nonatomic) MMFinderLiveProductQuestionSignView *productQuestionSignView; // @synthesize productQuestionSignView=_productQuestionSignView;
@property(retain, nonatomic) MMUIView *signBackView; // @synthesize signBackView=_signBackView;
@property(retain, nonatomic) MMUILabel *signLabel; // @synthesize signLabel=_signLabel;
@property(retain, nonatomic) MMFinderLiveProductQuestionSignView *barrageProductQueSignView; // @synthesize barrageProductQueSignView=_barrageProductQueSignView;
@property(retain, nonatomic) UIImageView *barrageSignIconView; // @synthesize barrageSignIconView=_barrageSignIconView;
@property(retain, nonatomic) CAGradientLayer *barrageBorderGradientLayer; // @synthesize barrageBorderGradientLayer=_barrageBorderGradientLayer;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) unsigned long long badgeSignCnt; // @synthesize badgeSignCnt=_badgeSignCnt;
@property(nonatomic) _Bool disablePAGAnimation; // @synthesize disablePAGAnimation=_disablePAGAnimation;
@property(nonatomic) struct CGPoint textGradientEndPoint; // @synthesize textGradientEndPoint=_textGradientEndPoint;
@property(nonatomic) struct CGPoint textGradientStartPoint; // @synthesize textGradientStartPoint=_textGradientStartPoint;
@property(retain, nonatomic) NSArray *textGradientCGColorArray; // @synthesize textGradientCGColorArray=_textGradientCGColorArray;
@property(retain, nonatomic) UIView *barrageBackgroundMaskView; // @synthesize barrageBackgroundMaskView=_barrageBackgroundMaskView;
@property(retain, nonatomic) UIImageView *barrageBackgroundImgView; // @synthesize barrageBackgroundImgView=_barrageBackgroundImgView;
- (id)getQuestionProductLinkRectList;
- (_Bool)isPubbleCellTapActionNeedJumpGoodsPanelAtPoint:(struct CGPoint)arg1;
- (_Bool)isPubbleCellTapActionNeedJumpGoodsPanel:(id)arg1;
- (id)getPOIIconRectList;
- (id)getPOILinkRectList;
- (_Bool)isPubbleCellTapActionNeedJumpPOIAtPoint:(struct CGPoint)arg1;
- (_Bool)isPubbleCellTapActionNeedJumpPOI:(id)arg1;
- (id)getSelfAccessibility;
- (_Bool)needSignLabel;
- (_Bool)reuseWithCellFrame:(id)arg1;
- (void)updateSignViewOrigins;
- (void)updateCommentLabelOrigin;
- (void)updateTextLabelOnGradientConfigFinished;
- (void)updateTextGradientIfNeeded;
- (void)layoutCommentLabel;
- (void)updateBarrageSignIconFrame;
- (void)updateBarrageSignIconImage;
- (void)updateBarrageBackgroundImage;
- (void)updateBarrageBorderLayerColor;
- (void)updateHeaderImageOrigin;
- (void)layoutFollowerSignView;
- (void)layoutFrequentWatchSignView;
- (void)layoutBuySignView;
- (void)layoutGameRankSignView;
- (void)layoutGameEsportSignView;
- (void)layoutFansGroupSignView;
- (void)layoutLiveRoleSignView;
- (void)layoutProductQuestionSignView;
- (void)layoutMysteriousSignView;
- (void)layoutGlobalRankSignView;
- (void)layoutSignLabel;
- (void)layoutBarrageProductQueSignView;
- (void)layoutBarrageSignIconView;
- (void)layoutHeadImageView;
- (void)layoutBarrageBackgroundMaskView;
- (void)layoutBarrageBackgroundImgView;
- (void)updateBorderGradientLayerMask;
- (_Bool)needDisplayBorderForPaidBarrage;
- (unsigned int)getCurrentPaidBarrageLevel;
- (_Bool)isPaidBarrage;
- (double)getBorderGradientLineWidth;
- (struct CGRect)borderGradientLayerFrame;
- (void)layoutPaidBarrageViews;
- (void)layoutBarrageBorderGradientLayer;
- (id)signText;
- (void)updateBackGroundColor;
- (void)layoutUI;
- (double)maxCornerRadius;
- (_Bool)isUITypeValid;
- (id)initWithCellFrame:(id)arg1;

@end


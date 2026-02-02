//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSMutableArray, RichTextView, SightIconView, UIImageView, UIView, WCMomentsFinderRecommendationViewModel;

@interface WCMomentsFinderRecommendationButton
{
    WCMomentsFinderRecommendationViewModel *_viewModel;
    NSMutableArray *_headImageViews;
    MMUILabel *_seeLabel;
    RichTextView *_userTextView;
    RichTextView *_contentTypeTextView;
    UIImageView *_finderLogoView;
    UIImageView *_arrowImageView;
    UIView *_bannerContainerView;
    RichTextView *_singleRichTextView;
    UIView *_cardContainerView;
    UIView *_separatorLine;
    UIImageView *_thumbImageView;
    SightIconView *_playIconView;
    RichTextView *_descriptionTextView;
}

+ (void)updateRichTextView:(id)arg1 withFont:(id)arg2;
+ (id)createSingleRichTextView;
+ (double)heightForCardView:(id)arg1;
+ (double)heightForBannerView:(id)arg1;
+ (double)heightForViewModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UIView *cardContainerView; // @synthesize cardContainerView=_cardContainerView;
@property(retain, nonatomic) RichTextView *singleRichTextView; // @synthesize singleRichTextView=_singleRichTextView;
@property(retain, nonatomic) UIView *bannerContainerView; // @synthesize bannerContainerView=_bannerContainerView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIImageView *finderLogoView; // @synthesize finderLogoView=_finderLogoView;
@property(retain, nonatomic) RichTextView *contentTypeTextView; // @synthesize contentTypeTextView=_contentTypeTextView;
@property(retain, nonatomic) RichTextView *userTextView; // @synthesize userTextView=_userTextView;
@property(retain, nonatomic) MMUILabel *seeLabel; // @synthesize seeLabel=_seeLabel;
@property(retain, nonatomic) NSMutableArray *headImageViews; // @synthesize headImageViews=_headImageViews;
@property(retain, nonatomic) WCMomentsFinderRecommendationViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)layoutSubviews;
- (void)layoutHeadImageViews:(id)arg1 fromRight:(double)arg2 toLeftEx:(out double *)arg3 centerY:(double)arg4;
- (void)layoutHeadImageViews:(id)arg1 fromLeft:(double)arg2 toRightEx:(out double *)arg3 centerY:(double)arg4;
- (void)_Card_fitSizeAndLayoutSubviews;
- (void)_Banner_E_SingleText_fitSizeAndLayoutSubviews;
- (void)_Banner_E_SingleText_fitContentForSubviews;
- (void)_Banner_E_fitSizeAndLayoutSubviews;
- (void)_Banner_E_fitContentForSubviews;
- (void)_Banner_BD_fitSizeAndLayoutSubviews;
- (void)_Banner_BD_fitContentForSubviews;
- (void)_Banner_AC_fitSizeAndLayoutSubviews;
- (void)_Banner_AC_fitContentForSubviews;
- (void)_Banner_fitSizeAndLayoutSubviews;
- (void)_Banner_fitContentForSubviews;
- (void)_fitSizeAndLayoutContainerViews;
- (void)fitSizeAndSubviews;
- (void)updateAccessibility;
- (void)reloadDescriptionTextView;
- (void)reloadThumbImageView;
- (void)loadSeparatorLine;
- (void)loadCardContainerView;
- (void)reloadCardViews;
- (void)reloadSingleRichTextView;
- (void)loadArrowImageView;
- (void)loadFinderLogoView;
- (void)updateContentTypeTextView:(_Bool)arg1;
- (void)reloadContentTypeTextView;
- (void)reloadUserTextView;
- (void)reloadSeeLabel;
- (id)createHeadImageView;
- (void)reloadHeadImageViews;
- (void)loadBannerContainerView;
- (void)reloadBannerViews;
- (void)updateSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateParamsForReporter;
- (void)initParamsForReporter;

@end


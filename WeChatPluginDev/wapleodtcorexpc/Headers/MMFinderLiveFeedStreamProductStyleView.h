//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FeedsPreviewLiveMultiStyleInfo_StyleFive, FeedsPreviewLiveMultiStyleInfo_StyleOne, FeedsPreviewLiveMultiStyleInfo_StyleTwo, FinderLiveSyncFeedPreviewMultiStyleInfoResp_HotShopInfo, FinderLiveSyncFeedPreviewMultiStyleInfoResp_RecommendCouponInfo, FinderWindowProductInfo, MMFinderLiveFeedStreamProductCardView, MMFinderLiveFeedStreamProductCouponView, MMFinderLiveFeedStreamProductExpandedCardView, MMFinderLiveFeedStreamProductGuideView, MMFinderLiveFeedStreamProductHotSellingView, MMFinderLiveFeedStreamWidgetBaseView, NSString;
@protocol MMFinderLiveFeedStreamProductStyleViewDelegate;

@interface MMFinderLiveFeedStreamProductStyleView
{
    id <MMFinderLiveFeedStreamProductStyleViewDelegate> _delegate;
    unsigned long long _style;
    FeedsPreviewLiveMultiStyleInfo_StyleOne *_productGuideStyleConf;
    FeedsPreviewLiveMultiStyleInfo_StyleTwo *_productCardStyleConf;
    FeedsPreviewLiveMultiStyleInfo_StyleFive *_productExpandedCardStyleConf;
    FinderWindowProductInfo *_productInfo;
    NSString *_productGuideRecommendTag;
    FinderLiveSyncFeedPreviewMultiStyleInfoResp_HotShopInfo *_hotSellingBubble;
    FinderLiveSyncFeedPreviewMultiStyleInfoResp_RecommendCouponInfo *_couponBubble;
    MMFinderLiveFeedStreamProductCardView *_cardStyleView;
    MMFinderLiveFeedStreamProductGuideView *_guideStyleView;
    MMFinderLiveFeedStreamProductExpandedCardView *_expandedCardStyleView;
    MMFinderLiveFeedStreamProductHotSellingView *_hotSellingStyleView;
    MMFinderLiveFeedStreamProductCouponView *_couponStyleView;
    double _maxWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) MMFinderLiveFeedStreamProductCouponView *couponStyleView; // @synthesize couponStyleView=_couponStyleView;
@property(retain, nonatomic) MMFinderLiveFeedStreamProductHotSellingView *hotSellingStyleView; // @synthesize hotSellingStyleView=_hotSellingStyleView;
@property(retain, nonatomic) MMFinderLiveFeedStreamProductExpandedCardView *expandedCardStyleView; // @synthesize expandedCardStyleView=_expandedCardStyleView;
@property(retain, nonatomic) MMFinderLiveFeedStreamProductGuideView *guideStyleView; // @synthesize guideStyleView=_guideStyleView;
@property(retain, nonatomic) MMFinderLiveFeedStreamProductCardView *cardStyleView; // @synthesize cardStyleView=_cardStyleView;
@property(retain, nonatomic) FinderLiveSyncFeedPreviewMultiStyleInfoResp_RecommendCouponInfo *couponBubble; // @synthesize couponBubble=_couponBubble;
@property(retain, nonatomic) FinderLiveSyncFeedPreviewMultiStyleInfoResp_HotShopInfo *hotSellingBubble; // @synthesize hotSellingBubble=_hotSellingBubble;
@property(retain, nonatomic) NSString *productGuideRecommendTag; // @synthesize productGuideRecommendTag=_productGuideRecommendTag;
@property(retain, nonatomic) FinderWindowProductInfo *productInfo; // @synthesize productInfo=_productInfo;
@property(retain, nonatomic) FeedsPreviewLiveMultiStyleInfo_StyleFive *productExpandedCardStyleConf; // @synthesize productExpandedCardStyleConf=_productExpandedCardStyleConf;
@property(retain, nonatomic) FeedsPreviewLiveMultiStyleInfo_StyleTwo *productCardStyleConf; // @synthesize productCardStyleConf=_productCardStyleConf;
@property(retain, nonatomic) FeedsPreviewLiveMultiStyleInfo_StyleOne *productGuideStyleConf; // @synthesize productGuideStyleConf=_productGuideStyleConf;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <MMFinderLiveFeedStreamProductStyleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderFeedStreamProductExpandedCardViewClick:(id)arg1;
- (void)onFinderFeedStreamProductGuideViewClick:(id)arg1;
- (void)onFinderFeedStreamProductCardViewClick:(id)arg1 jump2Type:(unsigned long long)arg2;
- (void)endExposeAction;
- (void)startExposeAction;
@property(readonly, nonatomic) _Bool validToShow;
- (void)setTaskId:(id)arg1;
- (void)updateProductGuideRecommendTag:(id)arg1 type:(unsigned long long)arg2;
- (void)addExpandAnimationBlock:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) MMFinderLiveFeedStreamWidgetBaseView *currentCard;
- (void)resetViews;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


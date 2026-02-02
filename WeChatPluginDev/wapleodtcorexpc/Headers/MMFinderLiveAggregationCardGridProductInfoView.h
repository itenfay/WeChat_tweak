//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, FinderLiveAggregationCardProduct, FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions, MMFinderLiveGoodsHotSaleAnimationView, MMFinderLiveHotSaleAnimationLogic, MMWebImageView, NSString, UILabel;
@protocol MMFinderLiveAggregationCardGridProductInfoViewDelegate;

@interface MMFinderLiveAggregationCardGridProductInfoView : UIView
{
    id <MMFinderLiveAggregationCardGridProductInfoViewDelegate> _delegate;
    FinderLiveAggregationCardProduct *_aggregationCardProduct;
    CDUnknownBlockType _onTapped;
    CDUnknownBlockType _getHotSellingPAGFile;
    MMWebImageView *_productImgView;
    UILabel *_promotingLabel;
    CAGradientLayer *_promotingGradientLayer;
    MMFinderLiveHotSaleAnimationLogic *_animationLogic;
    MMFinderLiveGoodsHotSaleAnimationView *_hotSaleAnimationView;
    FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions *_hotSellingOptions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions *hotSellingOptions; // @synthesize hotSellingOptions=_hotSellingOptions;
@property(retain, nonatomic) MMFinderLiveGoodsHotSaleAnimationView *hotSaleAnimationView; // @synthesize hotSaleAnimationView=_hotSaleAnimationView;
@property(retain, nonatomic) MMFinderLiveHotSaleAnimationLogic *animationLogic; // @synthesize animationLogic=_animationLogic;
@property(retain, nonatomic) CAGradientLayer *promotingGradientLayer; // @synthesize promotingGradientLayer=_promotingGradientLayer;
@property(retain, nonatomic) UILabel *promotingLabel; // @synthesize promotingLabel=_promotingLabel;
@property(retain, nonatomic) MMWebImageView *productImgView; // @synthesize productImgView=_productImgView;
@property(copy, nonatomic) CDUnknownBlockType getHotSellingPAGFile; // @synthesize getHotSellingPAGFile=_getHotSellingPAGFile;
@property(copy, nonatomic) CDUnknownBlockType onTapped; // @synthesize onTapped=_onTapped;
@property(retain, nonatomic) FinderLiveAggregationCardProduct *aggregationCardProduct; // @synthesize aggregationCardProduct=_aggregationCardProduct;
@property(nonatomic) __weak id <MMFinderLiveAggregationCardGridProductInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)hasAnimationResource;
- (void)finishHotSaleAnimation:(CDUnknownBlockType)arg1;
- (void)updateHotSaleAnimation:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startHotSaleAnimation:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (_Bool)enableHotSellingAnimation;
- (void)updateHotSellingOps:(id)arg1;
- (void)updateText:(id)arg1;
- (void)updateProductSales:(unsigned long long)arg1;
- (void)updateProductImageUrl:(id)arg1;
- (id)priceString:(unsigned long long)arg1;
- (void)updateAggregationCardProduct:(id)arg1;
- (void)onSelfTapped;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


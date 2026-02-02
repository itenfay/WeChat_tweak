//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions, FinderWindowProductInfo, MMFinderLiveGoodsHotSaleAnimationView, MMFinderLiveHotSaleAnimationLogic, MMWebImageView, NSString, PAGView, UILabel;

@interface WCFinderLiveTopicTemplateProductView : UIView
{
    FinderWindowProductInfo *_productInfo;
    CDUnknownBlockType _onTapped;
    CDUnknownBlockType _getPAGFile;
    FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions *_hotSellingOptions;
    MMWebImageView *_productImgView;
    UILabel *_promotingLabel;
    CAGradientLayer *_promotingGradientLayer;
    MMFinderLiveHotSaleAnimationLogic *_animationLogic;
    MMFinderLiveGoodsHotSaleAnimationView *_hotSaleAnimationView;
    PAGView *_playingIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PAGView *playingIconView; // @synthesize playingIconView=_playingIconView;
@property(retain, nonatomic) MMFinderLiveGoodsHotSaleAnimationView *hotSaleAnimationView; // @synthesize hotSaleAnimationView=_hotSaleAnimationView;
@property(retain, nonatomic) MMFinderLiveHotSaleAnimationLogic *animationLogic; // @synthesize animationLogic=_animationLogic;
@property(retain, nonatomic) CAGradientLayer *promotingGradientLayer; // @synthesize promotingGradientLayer=_promotingGradientLayer;
@property(retain, nonatomic) UILabel *promotingLabel; // @synthesize promotingLabel=_promotingLabel;
@property(retain, nonatomic) MMWebImageView *productImgView; // @synthesize productImgView=_productImgView;
@property(retain, nonatomic) FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions *hotSellingOptions; // @synthesize hotSellingOptions=_hotSellingOptions;
@property(copy, nonatomic) CDUnknownBlockType getPAGFile; // @synthesize getPAGFile=_getPAGFile;
@property(copy, nonatomic) CDUnknownBlockType onTapped; // @synthesize onTapped=_onTapped;
@property(retain, nonatomic) FinderWindowProductInfo *productInfo; // @synthesize productInfo=_productInfo;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (void)onLoadImageOK:(id)arg1;
- (_Bool)hasAnimationResource;
- (void)finishHotSaleAnimation:(CDUnknownBlockType)arg1;
- (void)updateHotSaleAnimation:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startHotSaleAnimation:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setPromotingViewsAlpha:(double)arg1;
- (void)onSelfTapped;
- (void)initPromotingViews;
- (void)layoutSubviews;
- (void)doInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


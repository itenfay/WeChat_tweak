//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, MMFinderLiveTagsLabel, MMUIButton, MMUILabel, MMWebImageView, NSString, UIImageView, UIView;

@interface MMFinderLiveGoodsLikeCell
{
    MMWebImageView *_goodsImageView;
    MMUILabel *_serialNumLabel;
    CAShapeLayer *_shapeLayer;
    UIView *_promotingBgView;
    UIImageView *_promotingIconView;
    MMUILabel *_promotingLabel;
    MMUIButton *_actionButton;
    MMFinderLiveTagsLabel *_goodsTitleLabel;
    UIView *_topSeparatorLine;
    UIView *_bottomSeparatorLine;
}

+ (double)imageWidthForCellWidth:(double)arg1;
+ (double)getPromotingCellHeight;
+ (double)getCellHeight;
+ (struct CGSize)defaultTagSize;
+ (double)titleSpacing;
+ (id)titleFont;
+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomSeparatorLine; // @synthesize bottomSeparatorLine=_bottomSeparatorLine;
@property(retain, nonatomic) UIView *topSeparatorLine; // @synthesize topSeparatorLine=_topSeparatorLine;
@property(retain, nonatomic) MMFinderLiveTagsLabel *goodsTitleLabel; // @synthesize goodsTitleLabel=_goodsTitleLabel;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *promotingLabel; // @synthesize promotingLabel=_promotingLabel;
@property(retain, nonatomic) UIImageView *promotingIconView; // @synthesize promotingIconView=_promotingIconView;
@property(retain, nonatomic) UIView *promotingBgView; // @synthesize promotingBgView=_promotingBgView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) MMUILabel *serialNumLabel; // @synthesize serialNumLabel=_serialNumLabel;
@property(retain, nonatomic) MMWebImageView *goodsImageView; // @synthesize goodsImageView=_goodsImageView;
- (void)onWebImageGetDifferentSize;
- (_Bool)isPromotingShow;
- (void)setIsPromoting:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setActionButtonPromotingState:(_Bool)arg1;
- (void)addSeparatorLine;
- (void)addGoodsTitleLabel;
- (void)addActionButton;
- (void)addPromotingViews;
- (void)addGoodsImageView;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


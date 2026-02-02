//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, CAShapeLayer, MMLiveEffectsBaseDataItem, MMWebImageView, SightIconView, UILabel, UIView;

@interface MMLiveBeautyEffectsItemCollectionCell : UICollectionViewCell
{
    _Bool _isSelected;
    MMLiveEffectsBaseDataItem *_dataItem;
    UIView *_imageBackgroundView;
    UIView *_bgBlurView;
    MMWebImageView *_coverImageView;
    UILabel *_titleLabel;
    UILabel *_disableLabel;
    CALayer *_borderLayer;
    CAShapeLayer *_shapeLayer;
    SightIconView *_stateView;
}

+ (struct CGSize)getCellSize;
+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SightIconView *stateView; // @synthesize stateView=_stateView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) CALayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(retain, nonatomic) UILabel *disableLabel; // @synthesize disableLabel=_disableLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *bgBlurView; // @synthesize bgBlurView=_bgBlurView;
@property(retain, nonatomic) UIView *imageBackgroundView; // @synthesize imageBackgroundView=_imageBackgroundView;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) MMLiveEffectsBaseDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)setIconType:(int)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


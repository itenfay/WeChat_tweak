//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, CAShapeLayer, MMBadgeView, MMLiveMakeupDetailDataItem, NSString, UIButton, UILabel, UIView;

@interface MMLiveMakeupDetailItemCollectionCell : UICollectionViewCell
{
    _Bool _isSelected;
    MMLiveMakeupDetailDataItem *_dataItem;
    UIView *_imageBackgroundView;
    UIButton *_coverImageButton;
    UILabel *_titleLabel;
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_shapeLayer;
    UIView *_adjustLogo;
    MMBadgeView *_badgeView;
}

+ (struct CGSize)getCellSize;
+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIView *adjustLogo; // @synthesize adjustLogo=_adjustLogo;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *coverImageButton; // @synthesize coverImageButton=_coverImageButton;
@property(retain, nonatomic) UIView *imageBackgroundView; // @synthesize imageBackgroundView=_imageBackgroundView;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) MMLiveMakeupDetailDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)onBeautyBadgeDismissed:(id)arg1;
- (void)fitTitleLabel;
- (void)prepareForReuse;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


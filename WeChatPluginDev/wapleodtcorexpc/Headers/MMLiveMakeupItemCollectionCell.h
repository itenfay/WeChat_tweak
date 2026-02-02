//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, CAShapeLayer, MMBadgeView, MMLiveMakeupDataItem, MMUILabel, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol MMLiveMakeupItemCollectionCellDelegate;

@interface MMLiveMakeupItemCollectionCell : UICollectionViewCell
{
    _Bool _isSelected;
    MMLiveMakeupDataItem *_dataItem;
    id <MMLiveMakeupItemCollectionCellDelegate> _cellDelegate;
    UIView *_baseView;
    UIView *_imageBackgroundView;
    UIButton *_coverImageButton;
    UILabel *_titleLabel;
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_shapeLayer;
    UIView *_adjustLogo;
    UIView *_changeDetailContainer;
    MMUILabel *_changeDetailLabel;
    UIImageView *_changeDetailImage;
    MMBadgeView *_badgeView;
    MMBadgeView *_detailsBadgeView;
}

+ (struct CGSize)getCellSize;
+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMBadgeView *detailsBadgeView; // @synthesize detailsBadgeView=_detailsBadgeView;
@property(retain, nonatomic) MMBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIImageView *changeDetailImage; // @synthesize changeDetailImage=_changeDetailImage;
@property(retain, nonatomic) MMUILabel *changeDetailLabel; // @synthesize changeDetailLabel=_changeDetailLabel;
@property(retain, nonatomic) UIView *changeDetailContainer; // @synthesize changeDetailContainer=_changeDetailContainer;
@property(retain, nonatomic) UIView *adjustLogo; // @synthesize adjustLogo=_adjustLogo;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *coverImageButton; // @synthesize coverImageButton=_coverImageButton;
@property(retain, nonatomic) UIView *imageBackgroundView; // @synthesize imageBackgroundView=_imageBackgroundView;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(nonatomic) __weak id <MMLiveMakeupItemCollectionCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) MMLiveMakeupDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)onActiveBeautyBadgesChangedInCollection:(id)arg1;
- (void)onBeautyBadgeDismissed:(id)arg1;
- (void)onTappedChangeDetailLabel;
- (void)fitTitleLabel;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)initChangeDetailContainerView;
- (void)initBaseView;
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


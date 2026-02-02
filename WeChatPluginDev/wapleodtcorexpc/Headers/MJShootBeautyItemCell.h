//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MJShootBeautyItem, MMUIImageView, MMUILabel, MMUIView;

@interface MJShootBeautyItemCell : UICollectionViewCell
{
    _Bool _isCellSelected;
    MMUIImageView *_iconImageView;
    MMUIView *_iconContainerView;
    MMUILabel *_titleLabel;
    MMUIView *_borderView;
    MMUIView *_blurView;
    MMUIView *_dotView;
    MJShootBeautyItem *_item;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJShootBeautyItem *item; // @synthesize item=_item;
@property(retain, nonatomic) MMUIView *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) MMUIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) MMUIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIView *iconContainerView; // @synthesize iconContainerView=_iconContainerView;
@property(retain, nonatomic) MMUIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) _Bool isCellSelected; // @synthesize isCellSelected=_isCellSelected;
- (void)configCellWithItem:(id)arg1 isAdjustable:(_Bool)arg2;
- (void)updateModifyState;
- (void)reset;
- (void)prepareForReuse;
- (void)setupViews;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


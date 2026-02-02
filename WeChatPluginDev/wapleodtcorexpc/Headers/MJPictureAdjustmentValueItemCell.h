//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUILabel, MMWebImageView, NSString, UIView;

@interface MJPictureAdjustmentValueItemCell : UICollectionViewCell
{
    _Bool _isCellSelected;
    NSString *_iconName;
    MMUILabel *_titleLabel;
    MMUILabel *_valueLabel;
    MMWebImageView *_iconImageView;
    UIView *_iconContentView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCellSelected; // @synthesize isCellSelected=_isCellSelected;
@property(retain, nonatomic) UIView *iconContentView; // @synthesize iconContentView=_iconContentView;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) MMUILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
- (void)configCellWithItem:(id)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


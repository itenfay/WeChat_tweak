//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel, UIView;

@interface SightBeautyItemCollectionCell : UICollectionViewCell
{
    _Bool _isSelected;
    NSString *_beautyTitle;
    UIView *_textContainerView;
    UILabel *_titleLabel;
    UIView *_textContainerBlurView;
}

+ (struct CGSize)getCellSize;
+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) __weak UIView *textContainerBlurView; // @synthesize textContainerBlurView=_textContainerBlurView;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *textContainerView; // @synthesize textContainerView=_textContainerView;
@property(copy, nonatomic) NSString *beautyTitle; // @synthesize beautyTitle=_beautyTitle;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end


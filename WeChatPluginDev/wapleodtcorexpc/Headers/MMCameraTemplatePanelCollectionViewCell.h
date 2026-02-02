//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMWebImageView, UILabel, UIView;

@interface MMCameraTemplatePanelCollectionViewCell : UICollectionViewCell
{
    _Bool _isSelected;
    UIView *_borderView;
    MMWebImageView *_imageView;
    UILabel *_nonImageView;
    UILabel *_titleLabel;
}

+ (id)genLabel;
+ (struct CGSize)getCellSize;
+ (id)cellID;
- (void).cxx_destruct;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *nonImageView; // @synthesize nonImageView=_nonImageView;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
- (void)setTemplateItem:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end


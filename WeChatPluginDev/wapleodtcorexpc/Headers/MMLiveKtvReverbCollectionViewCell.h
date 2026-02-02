//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMWebImageView, UILabel, UIView;

@interface MMLiveKtvReverbCollectionViewCell : UICollectionViewCell
{
    MMWebImageView *_iconImageView;
    UILabel *_label;
    UIView *_borderView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)updateWithImageUri:(id)arg1 name:(id)arg2 isSelected:(_Bool)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMWebImageView, TextStateIcon, UIImage;

@interface TextStateEmojiBoardIconCollectionCell : UICollectionViewCell
{
    TextStateIcon *_iconWrap;
    MMWebImageView *_imageView;
    UIImage *_iconImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) TextStateIcon *iconWrap; // @synthesize iconWrap=_iconWrap;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


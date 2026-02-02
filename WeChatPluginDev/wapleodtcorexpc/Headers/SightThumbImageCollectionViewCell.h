//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSIndexPath, UIImage, UIImageView;

@interface SightThumbImageCollectionViewCell : UICollectionViewCell
{
    UIImage *_image;
    UIImageView *_imageView;
    NSIndexPath *_currentIndexPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


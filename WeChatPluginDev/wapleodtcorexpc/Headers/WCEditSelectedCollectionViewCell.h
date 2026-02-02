//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UIColor, UIImageView;

@interface WCEditSelectedCollectionViewCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIColor *_borderLineColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *borderLineColor; // @synthesize borderLineColor=_borderLineColor;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)showBorder:(_Bool)arg1;
- (void)setupSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end


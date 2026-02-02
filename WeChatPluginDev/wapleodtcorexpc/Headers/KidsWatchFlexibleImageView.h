//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface KidsWatchFlexibleImageView : UIView
{
    unsigned long long _alignment;
    UIImage *_image;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


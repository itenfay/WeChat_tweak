//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MusicDefualtImageView, UIImage;

@interface MMMusicTextStateCoverView : UIView
{
    MusicDefualtImageView *_imageView;
    UIImage *_defaultImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(retain, nonatomic) MusicDefualtImageView *imageView; // @synthesize imageView=_imageView;
- (void)setImageUrl:(id)arg1;
- (void)loadImageWithOpenParams:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


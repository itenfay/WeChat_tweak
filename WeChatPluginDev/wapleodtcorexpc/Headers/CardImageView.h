//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UIStackView;

@interface CardImageView
{
    UIStackView *_stackView;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
- (id)image;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (void)initView;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView, UILabel;

@interface MMMusicRoundCorneredBarButton : UIView
{
    _Bool _selected;
    _Bool _highlighted;
    double _paddingHorizontal;
    UILabel *_label;
    CDUnknownBlockType _tappedBlock;
    UIImage *_normalImage;
    UIImage *_highlightedImage;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *highlightedImage; // @synthesize highlightedImage=_highlightedImage;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
@property(copy, nonatomic) CDUnknownBlockType tappedBlock; // @synthesize tappedBlock=_tappedBlock;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) double paddingHorizontal; // @synthesize paddingHorizontal=_paddingHorizontal;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)handleTap:(id)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;

@end


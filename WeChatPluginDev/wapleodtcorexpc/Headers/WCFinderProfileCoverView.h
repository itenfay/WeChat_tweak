//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CALayer, UIImageView, WCFinderBGCover;

@interface WCFinderProfileCoverView : UIView
{
    WCFinderBGCover *_cover;
    UIImageView *_imageView;
    CALayer *_maskLayer;
    CAGradientLayer *_gradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) WCFinderBGCover *cover; // @synthesize cover=_cover;
- (void)layoutSubviews;
- (void)updateGradientColor:(id)arg1;
- (void)parseCoverColor:(id)arg1;
- (void)reloadCover;
- (id)initWithFrame:(struct CGRect)arg1;

@end


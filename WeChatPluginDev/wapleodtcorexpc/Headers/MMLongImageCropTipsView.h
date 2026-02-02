//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMUILabel, UIImageView;

@interface MMLongImageCropTipsView : UIView
{
    CAGradientLayer *_gradientLayer;
    UIImageView *_iconImgView;
    MMUILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
- (void)layoutSubviews;
- (void)setupSubviewsWithIconImage:(id)arg1 labelText:(id)arg2 gradientLayerLocations:(id)arg3 gradientLayerColors:(id)arg4;

@end


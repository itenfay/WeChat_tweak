//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UIImageView;

@interface TingTaskBarContainerView : UIView
{
    UIImageView *_backgroundView;
    UIView *_borderLayerView;
    CAGradientLayer *_gradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *borderLayerView; // @synthesize borderLayerView=_borderLayerView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMLiveGradientLayerView, UIColor, UIView;

@interface MMLiveRewardGiftCustomizationColorCell : UICollectionViewCell
{
    UIView *_containerView;
    UIView *_colorView;
    MMLiveGradientLayerView *_shadingView;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveGradientLayerView *shadingView; // @synthesize shadingView=_shadingView;
@property(retain, nonatomic) UIView *colorView; // @synthesize colorView=_colorView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
@property(retain, nonatomic) UIColor *color;
- (id)initWithFrame:(struct CGRect)arg1;

@end


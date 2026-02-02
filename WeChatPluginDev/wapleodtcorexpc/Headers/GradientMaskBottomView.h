//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer;

@interface GradientMaskBottomView : UIView
{
    double _paddingTop;
    double _paddingBottom;
    UIView *_contentView;
    CAGradientLayer *_gradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double paddingBottom; // @synthesize paddingBottom=_paddingBottom;
@property(nonatomic) double paddingTop; // @synthesize paddingTop=_paddingTop;
- (void)layoutMaskBottomOrigin;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateLayout;
- (void)safeAreaInsetsDidChange;
- (void)didMoveToSuperview;
- (void)addGradientMask;
- (double)heightWithoutSafeAreaInset;
- (id)initWithContentView:(id)arg1;

@end


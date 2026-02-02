//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CAShapeLayer;

@interface AppMusicBlurCoverView : UIView
{
    _Bool _isSender;
    _Bool _isDarkMode;
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_maskLayer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDarkMode; // @synthesize isDarkMode=_isDarkMode;
@property(nonatomic) _Bool isSender; // @synthesize isSender=_isSender;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
- (void)layoutSubviews;
- (void)doChange;
- (id)initWithFrame:(struct CGRect)arg1 isSender:(_Bool)arg2;

@end


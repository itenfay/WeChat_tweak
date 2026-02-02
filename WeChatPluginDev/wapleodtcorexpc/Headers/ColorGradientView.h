//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer;

@interface ColorGradientView : UIView
{
    CAGradientLayer *_gradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
- (void)layoutSubviews;
- (void)commonConfiWithColor:(id)arg1 alphaTop:(double)arg2 alphaBottom:(double)arg3;
- (unsigned long long)countOfSubLayers;
- (void)configureWithLocationTop:(double)arg1 locationBottom:(double)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4;
- (void)configureWithColor:(id)arg1 alphaTop:(double)arg2 alphaBottom:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2 alphaTop:(double)arg3 alphaBottom:(double)arg4;

@end


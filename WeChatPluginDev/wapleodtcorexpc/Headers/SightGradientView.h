//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer;

@interface SightGradientView : UIView
{
    CAGradientLayer *_gradientMaskLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientMaskLayer; // @synthesize gradientMaskLayer=_gradientMaskLayer;
- (void)_relayoutGradientLayer;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2 alphaTop:(double)arg3 alphaBottom:(double)arg4;

@end


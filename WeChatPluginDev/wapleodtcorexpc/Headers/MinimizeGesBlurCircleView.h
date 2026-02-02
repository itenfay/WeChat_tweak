//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIVisualEffectView;

@interface MinimizeGesBlurCircleView : UIView
{
    UIVisualEffectView *_blurView;
    UIView *_blurMaskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *blurMaskView; // @synthesize blurMaskView=_blurMaskView;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


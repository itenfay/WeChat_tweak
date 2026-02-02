//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMGradientView, UIColor;

@interface MMGradientBottomView : UIView
{
    _Bool _ignoreHitTest;
    MMGradientView *_gradientView;
    UIView *_contentView;
    UIColor *_color;
}

+ (double)gradientHeight;
- (void).cxx_destruct;
@property(nonatomic) _Bool ignoreHitTest; // @synthesize ignoreHitTest=_ignoreHitTest;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMGradientView *gradientView; // @synthesize gradientView=_gradientView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, NSMutableArray;

@interface MMLiveDotLoadingView : UIView
{
    _Bool _animate;
    int _animationCount;
    MMTimer *_animationTimer;
    NSMutableArray *_animationDots;
    UIView *_dotContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *dotContainerView; // @synthesize dotContainerView=_dotContainerView;
@property(retain, nonatomic) NSMutableArray *animationDots; // @synthesize animationDots=_animationDots;
@property(retain, nonatomic) MMTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(nonatomic) int animationCount; // @synthesize animationCount=_animationCount;
@property(nonatomic) _Bool animate; // @synthesize animate=_animate;
- (void)animationTimerCheck;
- (void)layoutDotViews;
- (void)layoutSubviews;

@end


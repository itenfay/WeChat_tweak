//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIColor, UIFont;
@protocol IZCWScrollNumViewDelegate;

@interface ZCWScrollNumView : UIView
{
    NSMutableArray *_numberViews;
    _Bool _isDotViewTransparent;
    _Bool _isNeedShowMaskView;
    _Bool _isAnimating;
    unsigned long long numberSize;
    unsigned long long numberValue;
    UIView *backgroundView;
    UIView *digitBackgroundView;
    UIFont *digitFont;
    double splitSpaceWidth;
    double topAndBottomPadding;
    UIColor *_digitColor;
    unsigned long long _randomLength;
    long long _dotPos;
    UIView *_dotView;
    double _dotWidth;
    id <IZCWScrollNumViewDelegate> _delegate;
}

+ (id)dotImageWithColor:(id)arg1 width:(double)arg2 height:(double)arg3;
+ (unsigned long long)digitFromNum:(unsigned long long)arg1 withIndex:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IZCWScrollNumViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool isNeedShowMaskView; // @synthesize isNeedShowMaskView=_isNeedShowMaskView;
@property(nonatomic) _Bool isDotViewTransparent; // @synthesize isDotViewTransparent=_isDotViewTransparent;
@property(nonatomic) double dotWidth; // @synthesize dotWidth=_dotWidth;
@property(retain, nonatomic) UIView *dotView; // @synthesize dotView=_dotView;
@property(nonatomic) long long dotPos; // @synthesize dotPos=_dotPos;
@property(nonatomic) unsigned long long randomLength; // @synthesize randomLength=_randomLength;
@property(retain, nonatomic) UIColor *digitColor; // @synthesize digitColor=_digitColor;
@property(nonatomic) double topAndBottomPadding; // @synthesize topAndBottomPadding;
@property(nonatomic) double splitSpaceWidth; // @synthesize splitSpaceWidth;
@property(readonly, nonatomic) NSArray *numberViews; // @synthesize numberViews=_numberViews;
@property(retain, nonatomic) UIFont *digitFont; // @synthesize digitFont;
@property(retain, nonatomic) UIView *digitBackgroundView; // @synthesize digitBackgroundView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView;
@property(readonly, nonatomic) unsigned long long numberValue; // @synthesize numberValue;
@property(nonatomic) unsigned long long numberSize; // @synthesize numberSize;
- (void)didConfigFinish;
- (id)getDefaultDotView;
- (unsigned long long)digitIndex:(unsigned long long)arg1;
- (void)animationDidStop;
- (void)setNumber:(unsigned long long)arg1 withAnimationType:(int)arg2 animationTime:(double)arg3 stopTimeStep:(double)arg4;
- (double)getBaseLine;
- (void)initScrollNumView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


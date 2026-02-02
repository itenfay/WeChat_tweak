//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class StrokeView, UIColor, UIImageView;

@interface SightFocusView : UIView
{
    _Bool _showLightingBar;
    _Bool _isLightingBarShowing;
    double _currentPercent;
    double _increasePercent;
    UIColor *_strokeColor;
    UIColor *_shadowColor;
    StrokeView *_focusRectView;
    UIImageView *_lightIconView;
    UIView *_topProgressLine;
    UIView *_bottomProgressLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomProgressLine; // @synthesize bottomProgressLine=_bottomProgressLine;
@property(retain, nonatomic) UIView *topProgressLine; // @synthesize topProgressLine=_topProgressLine;
@property(retain, nonatomic) UIImageView *lightIconView; // @synthesize lightIconView=_lightIconView;
@property(retain, nonatomic) StrokeView *focusRectView; // @synthesize focusRectView=_focusRectView;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (double)increaseLightingBarPercent:(double)arg1;
- (void)setLightingBarPercent:(double)arg1;
- (void)setLightingBarInRight:(_Bool)arg1;
- (void)disableLightingBarMoving;
- (_Bool)showLightingBar;
- (id)getShineAnim:(double)arg1 count:(unsigned int)arg2;
- (void)hide:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shine;
- (void)showAtFocusCenter:(struct CGPoint)arg1 showCompletion:(CDUnknownBlockType)arg2 hideCompletion:(CDUnknownBlockType)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)preferredSize;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1 showLightingBar:(_Bool)arg2;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAAnimation, MMMusicFadeOutLayer, UILabel;

@interface MMMusicAutoscrollLabelView : UIView
{
    _Bool _isOpenShadow;
    _Bool _isOpenMarquee;
    _Bool _infiniteScrolling;
    UILabel *_label;
    double _maxWidth;
    double _scrollBackDelay;
    double _animationInterval;
    MMMusicFadeOutLayer *_fadeOutLayer;
    CAAnimation *_currentScrollAnim;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAAnimation *currentScrollAnim; // @synthesize currentScrollAnim=_currentScrollAnim;
@property(retain, nonatomic) MMMusicFadeOutLayer *fadeOutLayer; // @synthesize fadeOutLayer=_fadeOutLayer;
@property(nonatomic) double animationInterval; // @synthesize animationInterval=_animationInterval;
@property(nonatomic) double scrollBackDelay; // @synthesize scrollBackDelay=_scrollBackDelay;
@property(nonatomic) _Bool infiniteScrolling; // @synthesize infiniteScrolling=_infiniteScrolling;
@property(nonatomic) _Bool isOpenMarquee; // @synthesize isOpenMarquee=_isOpenMarquee;
@property(nonatomic) _Bool isOpenShadow; // @synthesize isOpenShadow=_isOpenShadow;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)setCorrectSize:(struct CGSize)arg1;
- (double)getAnimationInterval;
- (double)getScrollBackDelay;
- (void)resetAnimationWithFitSize:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


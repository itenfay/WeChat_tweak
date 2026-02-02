//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, ScrollNumber, UILabel;

@interface TimeoutNumber : UIView
{
    _Bool _isYogaRightAlignment;
    _Bool _timeout;
    _Bool _grayIndicator;
    ScrollNumber *_scrollNumber;
    MMUIActivityIndicatorView *_indicatorView;
    UILabel *_unitLabel;
    double _indicatorViewMargin;
    long long _indicatorAlign;
    long long _textAlign;
    double _delay;
    unsigned long long _noAnimationStart;
    double _noAnimationDelay;
}

- (void).cxx_destruct;
@property double noAnimationDelay; // @synthesize noAnimationDelay=_noAnimationDelay;
@property unsigned long long noAnimationStart; // @synthesize noAnimationStart=_noAnimationStart;
@property double delay; // @synthesize delay=_delay;
@property long long textAlign; // @synthesize textAlign=_textAlign;
@property long long indicatorAlign; // @synthesize indicatorAlign=_indicatorAlign;
@property double indicatorViewMargin; // @synthesize indicatorViewMargin=_indicatorViewMargin;
@property _Bool grayIndicator; // @synthesize grayIndicator=_grayIndicator;
@property(retain) UILabel *unitLabel; // @synthesize unitLabel=_unitLabel;
@property _Bool timeout; // @synthesize timeout=_timeout;
@property(retain) MMUIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain) ScrollNumber *scrollNumber; // @synthesize scrollNumber=_scrollNumber;
@property(nonatomic) _Bool isYogaRightAlignment; // @synthesize isYogaRightAlignment=_isYogaRightAlignment;
- (id)getAccessibilityLabelString;
- (id)unit;
- (double)animationTime;
- (struct CGSize)scrollNumberSize;
- (void)defaultNumber:(unsigned long long)arg1;
- (unsigned long long)numWidth:(unsigned long long)arg1;
- (void)updateNumber:(unsigned long long)arg1;
- (void)updateNumberInternal:(unsigned long long)arg1;
- (void)updateAnimationDelay:(double)arg1;
- (void)updateAnimationTime:(double)arg1;
- (void)updateDotPos:(unsigned int)arg1;
- (void)updateColor:(id)arg1;
- (void)updateFont:(id)arg1;
- (void)adjustIndicator;
- (void)updateActivity;
- (void)updateScrollNumber;
- (void)updateUnitLabel;
- (void)layoutSubviews;
- (void)stopTimeout;
- (void)startTimeout:(double)arg1;
- (void)updateUnit:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;
- (void)useGrayIndicator:(_Bool)arg1;
- (void)updateIndicatorAlign:(long long)arg1;
- (void)updateIndicatorMargin:(double)arg1;
- (void)updateTextAlignment:(long long)arg1;
- (struct CGSize)unitSize;
- (struct CGSize)dotSize;
- (struct CGSize)singleNumberSize;
- (void)noAnimationDelay:(double)arg1;

@end


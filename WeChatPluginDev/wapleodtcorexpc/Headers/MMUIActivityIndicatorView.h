//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIImageView;
@protocol MMUIActivityIndicatorViewDelegate;

@interface MMUIActivityIndicatorView : UIView
{
    _Bool _hidesWhenStopped;
    _Bool _animating;
    id <MMUIActivityIndicatorViewDelegate> _delegate;
    unsigned long long _style;
    UIColor *_color;
    double _sideLength;
    UIImageView *_indicatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) double sideLength; // @synthesize sideLength=_sideLength;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) _Bool hidesWhenStopped; // @synthesize hidesWhenStopped=_hidesWhenStopped;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <MMUIActivityIndicatorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)willEnterForeground;
- (void)didMoveToWindow;
- (void)restoreAnimation;
- (void)refreshIndicatorView;
- (void)startAnimatingFromRadian:(id)arg1 needSetAnimating:(_Bool)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)setFrame:(struct CGRect)arg1;
- (void)stopAnimating;
- (void)startAnimating;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)gcEndLoading;
- (void)gcBeginLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMGradientView;

@interface WCFinderPlayerLoadingView : UIView
{
    _Bool _stopAnimatingFlag;
    MMGradientView *_lineView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool stopAnimatingFlag; // @synthesize stopAnimatingFlag=_stopAnimatingFlag;
@property(retain, nonatomic) MMGradientView *lineView; // @synthesize lineView=_lineView;
- (_Bool)isAnimating;
- (void)stopAnimation;
- (void)_startAnimation;
- (void)startAnimation;
- (void)setUpUI;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MovingRhombusView;

@interface WAGameRollProgressView : UIView
{
    double _currentProgress;
    MovingRhombusView *_view1;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MovingRhombusView *view1; // @synthesize view1=_view1;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
- (void)endLoadingAnimation;
- (void)beginLoadingAnimation;
- (void)updateProgress:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 progressBarColor:(id)arg2;

@end


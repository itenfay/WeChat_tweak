//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface WCFinderMinimizeFloatingAudioSoundView : UIView
{
    _Bool _soundActive;
    _Bool _isStub;
    UIView *_containerView;
    UIView *_indicatorViewA;
    UIView *_indicatorViewB;
    UIView *_indicatorViewC;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isStub; // @synthesize isStub=_isStub;
@property(retain, nonatomic) UIView *indicatorViewC; // @synthesize indicatorViewC=_indicatorViewC;
@property(retain, nonatomic) UIView *indicatorViewB; // @synthesize indicatorViewB=_indicatorViewB;
@property(retain, nonatomic) UIView *indicatorViewA; // @synthesize indicatorViewA=_indicatorViewA;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool soundActive; // @synthesize soundActive=_soundActive;
- (void)updateSoundActive:(_Bool)arg1;
- (void)startIndicatorAnimationOnIndicatorView:(id)arg1 duration:(double)arg2 delay:(double)arg3;
- (void)stopIndicatorAnimation;
- (void)startIndicatorAnimation;
- (struct CGPath *)indicatorShapeMaskPathWithDimension:(double)arg1 innerRadius:(double)arg2 outerRadius:(double)arg3;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 isStub:(_Bool)arg2;

@end


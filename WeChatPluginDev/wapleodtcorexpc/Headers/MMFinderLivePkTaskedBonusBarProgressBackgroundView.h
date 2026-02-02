//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, MMFinderLivePkTaskedBonusModel, MMTimer, NSArray, NSString;

@interface MMFinderLivePkTaskedBonusBarProgressBackgroundView : UIView
{
    UIView *_backgroundView;
    UIView *_foregroundView;
    CAShapeLayer *_foregroundMaskLayer;
    MMFinderLivePkTaskedBonusModel *_model;
    NSArray *_progressItems;
    double _progress;
    MMTimer *_timer;
    unsigned long long _elapsedTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSArray *progressItems; // @synthesize progressItems=_progressItems;
@property(retain, nonatomic) MMFinderLivePkTaskedBonusModel *model; // @synthesize model=_model;
@property(retain, nonatomic) CAShapeLayer *foregroundMaskLayer; // @synthesize foregroundMaskLayer=_foregroundMaskLayer;
@property(retain, nonatomic) UIView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)updateForegroundViewTransformForProgress:(double)arg1;
- (struct CGPath *)createMaskingPathWithSize:(struct CGSize)arg1;
- (void)onTimerTick;
- (void)layoutSubviews;
- (void)updateWithModel:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLivePkTaskedBonusModel, MMFinderLiveSpinnerLabel, MMTimer, NSArray, NSString, UIColor, UILabel;

@interface MMFinderLivePkTaskedBonusBarProgressContentView : UIView
{
    UIView *_scalingContainerView;
    UILabel *_countdownLabel;
    MMFinderLiveSpinnerLabel *_progressLabel;
    MMFinderLivePkTaskedBonusModel *_model;
    NSArray *_progressItems;
    MMTimer *_timer;
    unsigned long long _elapsedTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSArray *progressItems; // @synthesize progressItems=_progressItems;
@property(retain, nonatomic) MMFinderLivePkTaskedBonusModel *model; // @synthesize model=_model;
@property(retain, nonatomic) MMFinderLiveSpinnerLabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
@property(retain, nonatomic) UIView *scalingContainerView; // @synthesize scalingContainerView=_scalingContainerView;
- (unsigned long long)currentCountdownSeconds;
- (void)layoutSubviews;
- (void)onTimerTick;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithModel:(id)arg1;
@property(readonly, nonatomic) NSString *currentPreferredGiftId;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly, nonatomic) UIColor *contentShadowColor;
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


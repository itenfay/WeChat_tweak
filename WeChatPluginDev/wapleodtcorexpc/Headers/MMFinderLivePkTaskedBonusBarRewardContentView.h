//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLivePkTaskedBonusModel, MMTimer, NSNumberFormatter, NSString, UIColor, UILabel;

@interface MMFinderLivePkTaskedBonusBarRewardContentView : UIView
{
    UIView *_scalingContainerView;
    UILabel *_countdownLabel;
    UILabel *_descriptionLabel;
    MMFinderLivePkTaskedBonusModel *_model;
    MMTimer *_timer;
    NSNumberFormatter *_multiplierFormatter;
    double _pointOfInterestInLabel;
}

- (void).cxx_destruct;
@property(nonatomic) double pointOfInterestInLabel; // @synthesize pointOfInterestInLabel=_pointOfInterestInLabel;
@property(retain, nonatomic) NSNumberFormatter *multiplierFormatter; // @synthesize multiplierFormatter=_multiplierFormatter;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) MMFinderLivePkTaskedBonusModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
@property(retain, nonatomic) UIView *scalingContainerView; // @synthesize scalingContainerView=_scalingContainerView;
- (unsigned long long)currentCountdownSeconds;
- (void)layoutSubviews;
- (void)onTimerTick;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithModel:(id)arg1;
@property(readonly, nonatomic) struct CGPoint highlightedPointOfInterest;
@property(readonly, nonatomic) UIColor *contentShadowColor;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *currentPreferredGiftId;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


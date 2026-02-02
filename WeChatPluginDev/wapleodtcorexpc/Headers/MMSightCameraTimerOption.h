//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIButton, NSString, UILabel, WCElasticLayoutView;
@protocol MMSightCameraTimerOptionDelegate;

@interface MMSightCameraTimerOption : NSObject
{
    long long _timerType;
    UILabel *_counterLabel;
    id <MMSightCameraTimerOptionDelegate> _delegate;
    WCElasticLayoutView *_elasticLayoutView;
    MMUIButton *_iconButton;
    MMUIButton *_timerButton_None;
    MMUIButton *_timerButton_3s;
    MMUIButton *_timerButton_10s;
    long long _currentOrientation;
    struct CGRect _containerFrame;
}

+ (long long)convertTimeSecFromTimerType:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(retain, nonatomic) MMUIButton *timerButton_10s; // @synthesize timerButton_10s=_timerButton_10s;
@property(retain, nonatomic) MMUIButton *timerButton_3s; // @synthesize timerButton_3s=_timerButton_3s;
@property(retain, nonatomic) MMUIButton *timerButton_None; // @synthesize timerButton_None=_timerButton_None;
@property(retain, nonatomic) MMUIButton *iconButton; // @synthesize iconButton=_iconButton;
@property(retain, nonatomic) WCElasticLayoutView *elasticLayoutView; // @synthesize elasticLayoutView=_elasticLayoutView;
@property(nonatomic) struct CGRect containerFrame; // @synthesize containerFrame=_containerFrame;
@property(nonatomic) __weak id <MMSightCameraTimerOptionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *counterLabel; // @synthesize counterLabel=_counterLabel;
@property(nonatomic) long long timerType; // @synthesize timerType=_timerType;
- (void)_initCounterLabel;
- (void)_initViews;
- (void)_transformViewsToOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_transformViewsToIdentityAnimated:(_Bool)arg1;
- (void)_onTimerTypeChanged:(long long)arg1;
- (void)_countTimerAtTimeSecNum:(id)arg1;
- (void)_cancelTimer;
- (void)_onClickTimerButton_10s;
- (void)_onClickTimerButton_3s;
- (void)_onClickTimerButton_None;
- (void)_onClickIconView;
- (void)rotateToOrientation:(long long)arg1;
@property(readonly, nonatomic) WCElasticLayoutView *optionView;
@property(nonatomic) _Bool active;
- (void)autoFitCounterLabelToWidth:(double)arg1;
- (void)cancelTimer;
- (void)startTimer;
- (void)dealloc;
- (id)initWithContainerFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


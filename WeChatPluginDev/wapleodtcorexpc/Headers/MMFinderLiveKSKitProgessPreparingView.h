//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, PAGView;

@interface MMFinderLiveKSKitProgessPreparingView : UIView
{
    _Bool _isStartPrepare;
    _Bool _isPrepareEnd;
    int _maxPrepareMs;
    int _remainMs;
    CDUnknownBlockType _prepareEndCallback;
    PAGView *_preparePAGView;
    long long _prepareAnimDuration;
    PAGView *_countDownPAGView;
    long long _countDownAnimDuration;
}

- (void).cxx_destruct;
@property(nonatomic) long long countDownAnimDuration; // @synthesize countDownAnimDuration=_countDownAnimDuration;
@property(retain, nonatomic) PAGView *countDownPAGView; // @synthesize countDownPAGView=_countDownPAGView;
@property(nonatomic) long long prepareAnimDuration; // @synthesize prepareAnimDuration=_prepareAnimDuration;
@property(retain, nonatomic) PAGView *preparePAGView; // @synthesize preparePAGView=_preparePAGView;
@property(nonatomic) int remainMs; // @synthesize remainMs=_remainMs;
@property(nonatomic) int maxPrepareMs; // @synthesize maxPrepareMs=_maxPrepareMs;
@property(copy, nonatomic) CDUnknownBlockType prepareEndCallback; // @synthesize prepareEndCallback=_prepareEndCallback;
@property(nonatomic) _Bool isPrepareEnd; // @synthesize isPrepareEnd=_isPrepareEnd;
@property(nonatomic) _Bool isStartPrepare; // @synthesize isStartPrepare=_isStartPrepare;
- (void)onAnimationEnd:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)manualStopIfNeed:(_Bool)arg1;
- (void)stopPrepare;
- (void)stopAnimations;
- (_Bool)tryStartCountDownAnimation;
- (_Bool)tryStartPrepareAnimation;
- (_Bool)tryStartAnimation;
- (void)reset;
- (void)updatePreparingRemainMs:(int)arg1;
- (void)updateMaxPreparingMs:(int)arg1;
- (void)notifyPrepareEnd;
- (void)startPrepare;
- (double)preferHeight;
- (void)createCountDownPagView;
- (void)createPreparePagView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initUI;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


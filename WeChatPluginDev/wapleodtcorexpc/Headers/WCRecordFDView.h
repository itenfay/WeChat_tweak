//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CALayer, MMTimer, NSMutableArray, NSString, UIColor;

@interface WCRecordFDView : UIView
{
    int _animatingCount;
    unsigned int _timerCount;
    unsigned int _pillarsCount;
    float _maxHeight;
    CALayer *_displayLayer;
    NSMutableArray *_curFeedbackPillars;
    NSMutableArray *_arrPillars;
    MMTimer *_timer;
    NSMutableArray *_arrPeakPower;
    NSMutableArray *_arrCurAnimation;
    UIColor *_pillarColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *pillarColor; // @synthesize pillarColor=_pillarColor;
@property(nonatomic) float maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) unsigned int pillarsCount; // @synthesize pillarsCount=_pillarsCount;
@property(nonatomic) unsigned int timerCount; // @synthesize timerCount=_timerCount;
@property(nonatomic) int animatingCount; // @synthesize animatingCount=_animatingCount;
@property(retain, nonatomic) NSMutableArray *arrCurAnimation; // @synthesize arrCurAnimation=_arrCurAnimation;
@property(retain, nonatomic) NSMutableArray *arrPeakPower; // @synthesize arrPeakPower=_arrPeakPower;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *arrPillars; // @synthesize arrPillars=_arrPillars;
@property(retain, nonatomic) NSMutableArray *curFeedbackPillars; // @synthesize curFeedbackPillars=_curFeedbackPillars;
@property(retain, nonatomic) CALayer *displayLayer; // @synthesize displayLayer=_displayLayer;
- (id)getAnimationGroup;
- (void)onAnimateTimerCallback;
- (void)stopTimer;
- (void)startAnimateTimer;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (unsigned long long)genCurrentTimeInMs;
- (void)configWithPillar:(id)arg1 Idex:(unsigned long long)arg2;
- (unsigned int)genCurrentTime;
- (id)getAnimationGroupWithStartFrom:(float)arg1 StartTo:(float)arg2 EndFrom:(float)arg3 EndTo:(float)arg4;
- (id)configPillar:(id)arg1 PeakPower:(float)arg2 Delay:(float)arg3 AddGroup:(_Bool)arg4;
- (void)configPillars:(id)arg1 PeakPower:(float)arg2 Delay:(float)arg3 AddGroup:(_Bool)arg4;
- (void)configPillarsWithPeakPower:(float)arg1;
- (void)generateAnimationWithPeakPower:(float)arg1;
- (void)setPeakPower:(float)arg1;
- (void)initPillars;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 PillarCount:(unsigned int)arg2 MaxHeight:(float)arg3 pillarColor:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


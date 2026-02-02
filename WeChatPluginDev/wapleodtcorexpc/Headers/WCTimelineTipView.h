//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCTimelineTipViewDelegate;

@interface WCTimelineTipView
{
    id <WCTimelineTipViewDelegate> _delegate;
    _Bool _showTipNow;
    _Bool _closeTipNow;
    _Bool _hidingTip;
}

+ (id)showTipWithDelegate:(id)arg1 parentView:(id)arg2 content:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool showTipNow; // @synthesize showTipNow=_showTipNow;
@property(nonatomic) __weak id <WCTimelineTipViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showTipView:(double)arg1 withAnimationTimes:(id)arg2 AnimationValues:(id)arg3;
- (void)closeTipView:(_Bool)arg1;
- (void)showTipView:(_Bool)arg1;
- (void)hideTipView:(_Bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)getAnimationLayer;
- (void)performBgAction;
- (void)initView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


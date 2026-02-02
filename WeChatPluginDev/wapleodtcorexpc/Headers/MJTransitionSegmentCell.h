//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJDashLine, MMUIButton, NSString, UIView;

@interface MJTransitionSegmentCell
{
    MJDashLine *_dashLine;
    UIView *_transitionButtonContainer;
    MMUIButton *_transitionButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MMUIButton *transitionButton; // @synthesize transitionButton=_transitionButton;
@property(readonly, nonatomic) UIView *transitionButtonContainer; // @synthesize transitionButtonContainer=_transitionButtonContainer;
@property(readonly, nonatomic) MJDashLine *dashLine; // @synthesize dashLine=_dashLine;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) UIView *specialHitTestReceiver;
- (void)applyLayoutAttributes:(id)arg1;
- (void)transitionButtonTouchUpInside:(id)arg1;
- (void)hideBorderViewAnimated:(_Bool)arg1;
- (void)showBorderViewAnimated:(_Bool)arg1;
- (void)updateButtonIconIsBlank:(_Bool)arg1 isEnabled:(_Bool)arg2 isHighlighted:(_Bool)arg3;
- (void)syncWithMutation;
- (void)setupWithSegmentViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


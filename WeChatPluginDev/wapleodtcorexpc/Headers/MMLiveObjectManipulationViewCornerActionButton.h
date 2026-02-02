//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIGestureRecognizer;
@protocol MMLiveObjectManipulationViewCornerAction, MMLiveObjectManipulationViewCornerActionButtonDelegate;

@interface MMLiveObjectManipulationViewCornerActionButton
{
    _Bool _forManipulationAction;
    id <MMLiveObjectManipulationViewCornerActionButtonDelegate> _delegate;
    id <MMLiveObjectManipulationViewCornerAction> _actionDescriptor;
    UIGestureRecognizer *_actionGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIGestureRecognizer *actionGestureRecognizer; // @synthesize actionGestureRecognizer=_actionGestureRecognizer;
@property(retain, nonatomic) id <MMLiveObjectManipulationViewCornerAction> actionDescriptor; // @synthesize actionDescriptor=_actionDescriptor;
@property(nonatomic) __weak id <MMLiveObjectManipulationViewCornerActionButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool forManipulationAction; // @synthesize forManipulationAction=_forManipulationAction;
- (void)onManipulationGesture:(id)arg1;
- (void)onTapped;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)updateWithManipulationAction:(id)arg1 manipulatedView:(id)arg2 accessibilityDescriptor:(id)arg3;
- (void)updateWithCustomAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


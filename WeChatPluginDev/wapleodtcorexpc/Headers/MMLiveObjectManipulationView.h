//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveObjectManipulationGestureRecognizer, MMLiveObjectManipulationViewConfiguration, MMLiveObjectManipulationViewCornerActionButton, NSString;
@protocol MMLiveObjectManipulationViewDelegate;

@interface MMLiveObjectManipulationView : UIView
{
    UIView *_content;
    id <MMLiveObjectManipulationViewDelegate> _delegate;
    MMLiveObjectManipulationViewConfiguration *_config;
    MMLiveObjectManipulationGestureRecognizer *_gesture;
    UIView *_borderView;
    UIView *_cornerButtonsContainerView;
    MMLiveObjectManipulationViewCornerActionButton *_topLeftActionButton;
    MMLiveObjectManipulationViewCornerActionButton *_topRightActionButton;
    MMLiveObjectManipulationViewCornerActionButton *_bottomLeftActionButton;
    MMLiveObjectManipulationViewCornerActionButton *_bottomRightActionButton;
    double _actualBorderWidth;
    struct CGSize _contentSize;
}

- (void).cxx_destruct;
@property(nonatomic) double actualBorderWidth; // @synthesize actualBorderWidth=_actualBorderWidth;
@property(retain, nonatomic) MMLiveObjectManipulationViewCornerActionButton *bottomRightActionButton; // @synthesize bottomRightActionButton=_bottomRightActionButton;
@property(retain, nonatomic) MMLiveObjectManipulationViewCornerActionButton *bottomLeftActionButton; // @synthesize bottomLeftActionButton=_bottomLeftActionButton;
@property(retain, nonatomic) MMLiveObjectManipulationViewCornerActionButton *topRightActionButton; // @synthesize topRightActionButton=_topRightActionButton;
@property(retain, nonatomic) MMLiveObjectManipulationViewCornerActionButton *topLeftActionButton; // @synthesize topLeftActionButton=_topLeftActionButton;
@property(retain, nonatomic) UIView *cornerButtonsContainerView; // @synthesize cornerButtonsContainerView=_cornerButtonsContainerView;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) MMLiveObjectManipulationGestureRecognizer *gesture; // @synthesize gesture=_gesture;
@property(retain, nonatomic) MMLiveObjectManipulationViewConfiguration *config; // @synthesize config=_config;
@property(nonatomic) __weak id <MMLiveObjectManipulationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) UIView *content; // @synthesize content=_content;
- (_Bool)hasAnyCornerActions;
- (id)updatedCornerActionButtonWithOriginal:(id)arg1 action:(id)arg2;
- (void)updateCornerActions;
- (void)createBorderView;
- (void)configureBorderAndCornerActions;
- (void)applyContentAccessibilityDescriptor:(id)arg1;
- (void)updateBorder;
- (void)onManipulationViewScaleRotationCornerActionInvokedByGestureRecognizer:(id)arg1;
- (void)onManipulationViewCustomCornerActionInvoked:(id)arg1;
- (void)onVoiceOverStatusChanged;
- (void)onTapped;
- (void)onManipulationGesture:(id)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setTransform:(struct CGAffineTransform)arg1;
@property(readonly, nonatomic) struct CGAffineTransform contentTransform;
@property(readonly, nonatomic) struct CGPoint contentCenter;
- (void)dealloc;
- (id)initWithContent:(id)arg1 contentSize:(struct CGSize)arg2 contentAccessibilityDescriptor:(id)arg3 configuration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


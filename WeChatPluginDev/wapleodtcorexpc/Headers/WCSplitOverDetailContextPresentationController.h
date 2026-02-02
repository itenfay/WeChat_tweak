//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIPresentationController.h>

@class NSString, UIView;
@protocol WCSplitOverDetailContextPresentationDelegate;

@interface WCSplitOverDetailContextPresentationController : UIPresentationController
{
    _Bool _maskHidden;
    _Bool _isTransitioning;
    id <WCSplitOverDetailContextPresentationDelegate> _overDetailDelegate;
    UIView *_dimmingMaskView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property(retain, nonatomic) UIView *dimmingMaskView; // @synthesize dimmingMaskView=_dimmingMaskView;
@property(nonatomic) _Bool maskHidden; // @synthesize maskHidden=_maskHidden;
@property(nonatomic) __weak id <WCSplitOverDetailContextPresentationDelegate> overDetailDelegate; // @synthesize overDetailDelegate=_overDetailDelegate;
- (void)updatePresentedViewFrameWithContainerSize:(struct CGSize)arg1;
- (void)notifySplitOverDetailContextMaskHidden:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)containerViewDidLayoutSubviews;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (_Bool)shouldRemovePresentersView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


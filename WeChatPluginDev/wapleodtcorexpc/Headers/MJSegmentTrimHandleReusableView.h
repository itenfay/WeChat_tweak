//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UIView;
@protocol MJSegmentReusableViewDelegate, MJSegmentTrimHandleProtocol;

@interface MJSegmentTrimHandleReusableView : UICollectionReusableView
{
    id <MJSegmentReusableViewDelegate> _delegate;
    UIView<MJSegmentTrimHandleProtocol> *_backingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView<MJSegmentTrimHandleProtocol> *backingView; // @synthesize backingView=_backingView;
@property(nonatomic) __weak id <MJSegmentReusableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hideSnapIndicatorDot;
- (void)showSnapIndicatorDotWithEdge:(unsigned long long)arg1;
- (void)hideSnapIndicatorLine;
- (void)showSnapIndicatorLineWithEdge:(unsigned long long)arg1;
- (unsigned long long)trimmingEdgeForPanGesture:(id)arg1;
- (_Bool)respondsToPanGesture:(id)arg1;
@property(nonatomic) _Bool isRightExpandable;
@property(nonatomic) _Bool isLeftExpandable;
@property(nonatomic) struct UIEdgeInsets rightHitInsets;
@property(nonatomic) struct UIEdgeInsets leftHitInsets;
@property(nonatomic) struct UIEdgeInsets trimHandleViewInsets;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)applyLayoutAttributes:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MoveWithTouchAlgorithm, NSString, UIImageView;
@protocol MMLiveMinimizeBackgroundMoveViewDelegate;

@interface MMLiveMinimizeBackgroundMoveView : UIView
{
    UIImageView *_blurView;
    MoveWithTouchAlgorithm *_moveAlgorithm;
    id <MMLiveMinimizeBackgroundMoveViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMLiveMinimizeBackgroundMoveViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MoveWithTouchAlgorithm *moveAlgorithm; // @synthesize moveAlgorithm=_moveAlgorithm;
@property(retain, nonatomic) UIImageView *blurView; // @synthesize blurView=_blurView;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)onMoveWithTouchAlgorithmRequestView;
- (void)onMoveWithTouchAlgorithmTaped:(struct CGPoint)arg1;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (void)adsorbToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


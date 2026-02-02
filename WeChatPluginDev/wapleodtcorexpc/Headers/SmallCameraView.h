//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MoveWithTouchAlgorithm, NSString;
@protocol SmallCameraViewDelegate;

@interface SmallCameraView : UIView
{
    _Bool _hasMoved;
    MoveWithTouchAlgorithm *m_moveAlgorithm;
    id <SmallCameraViewDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SmallCameraViewDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) MoveWithTouchAlgorithm *m_moveAlgorithm; // @synthesize m_moveAlgorithm;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)transformPointWithPoint:(struct CGPoint)arg1;
- (id)onMoveWithTouchAlgorithmRequestView;
- (void)onMoveWithTouchAlgorithmTaped:(struct CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)adsorbToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


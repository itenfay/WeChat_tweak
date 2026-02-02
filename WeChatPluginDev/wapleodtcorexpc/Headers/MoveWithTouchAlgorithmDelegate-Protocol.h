//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UITouch, UIView;

@protocol MoveWithTouchAlgorithmDelegate <NSObject>

@optional
- (struct CGPoint)transformPointWithPoint:(struct CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmDecideEndStateIsFold:(_Bool)arg1 triggerdByTouch:(_Bool)arg2;
- (_Bool)isFoldEnabled;
- (_Bool)shouldForcePortrait;
- (_Bool)shouldLockToPortrait;
- (UIView *)onMoveWithTouchAlgorithmRequestView;
- (void)onMoveWithTouchAlgorithnMoveEnd:(struct CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmMoveLong;
- (void)onMoveWithTouchAlgorithmTaped:(struct CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1 Touch:(UITouch *)arg2;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)onMoveBeginWithTouchAlgorithmBegin:(struct CGPoint)arg1;
@end


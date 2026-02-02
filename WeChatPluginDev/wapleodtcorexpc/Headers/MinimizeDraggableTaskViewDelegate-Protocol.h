//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MinimizeDraggableTaskView, UITouch;

@protocol MinimizeDraggableTaskViewDelegate <NSObject>
- (void)onDraggableTaskViewDeleteBtnClicked:(MinimizeDraggableTaskView *)arg1;
- (void)onDraggableTaskViewTap:(MinimizeDraggableTaskView *)arg1;

@optional
- (void)onDraggableTaskViewLongPress:(MinimizeDraggableTaskView *)arg1;
- (void)onDraggableTaskViewMoveEnd:(MinimizeDraggableTaskView *)arg1 Point:(struct CGPoint)arg2;
- (void)onDraggableTaskViewMoveTo:(struct CGPoint)arg1 Touch:(UITouch *)arg2;
- (void)onDraggableTaskViewMoveLong;
- (void)onDraggableTaskViewBegin:(MinimizeDraggableTaskView *)arg1 Point:(struct CGPoint)arg2;
@end


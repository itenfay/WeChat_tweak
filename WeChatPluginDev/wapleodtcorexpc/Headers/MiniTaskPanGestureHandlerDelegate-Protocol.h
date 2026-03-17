//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MiniTaskPanGestureHandler;

@protocol MiniTaskPanGestureHandlerDelegate <NSObject>
- (void)onMiniInteractiveTransitionBeginOfPanGesture:(MiniTaskPanGestureHandler *)arg1;

@optional
- (void)onMiniInteractiveTransitionDidEndOfPanGesture:(MiniTaskPanGestureHandler *)arg1 isComplete:(_Bool)arg2;
- (void)onMiniInteractiveTransitionWillEndOfPanGesture:(MiniTaskPanGestureHandler *)arg1 isComplete:(_Bool)arg2;
- (void)onMiniInteractiveTransitionChangedOfPanGesture:(MiniTaskPanGestureHandler *)arg1 progress:(double)arg2;
- (_Bool)shouldMiniInteractiveTransitionBeginOfPanGesture:(MiniTaskPanGestureHandler *)arg1;
@end


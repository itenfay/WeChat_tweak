//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MinimizeEdgeGestureHandler;

@protocol MinimizeEdgeGestureHandlerDelegate <NSObject>

@optional
- (double)transitionProgressConvertedFromGestureProgress:(double)arg1;
- (void)onEdgeInteractiveTransitionDidEnd:(MinimizeEdgeGestureHandler *)arg1 isComplete:(_Bool)arg2;
- (void)onEdgeInteractiveTransitionWillEnd:(MinimizeEdgeGestureHandler *)arg1 isComplete:(_Bool)arg2;
- (void)onEdgeInteractiveTransitionChanged:(MinimizeEdgeGestureHandler *)arg1 progress:(double)arg2 translation:(struct CGPoint)arg3;
- (void)onEdgeInteractiveTransitionBegin:(MinimizeEdgeGestureHandler *)arg1;
@end


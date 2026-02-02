//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MiniTaskEdgeGestureHandlerInterface;

@protocol MiniTaskEdgeGestureHandlerDelegate <NSObject>
- (void)onMiniInteractiveTransitionBegin:(id <MiniTaskEdgeGestureHandlerInterface>)arg1;

@optional
- (void)onMiniInteractiveTransitionDidEnd:(id <MiniTaskEdgeGestureHandlerInterface>)arg1 isComplete:(_Bool)arg2;
- (void)onMiniInteractiveTransitionWillEnd:(id <MiniTaskEdgeGestureHandlerInterface>)arg1 isComplete:(_Bool)arg2;
- (void)onMiniInteractiveTransitionChanged:(id <MiniTaskEdgeGestureHandlerInterface>)arg1 progress:(double)arg2;
- (_Bool)shouldBlockMiniInteractiveTransitionComplete:(id <MiniTaskEdgeGestureHandlerInterface>)arg1;
- (_Bool)shouldMiniInteractiveTransitionBegin:(id <MiniTaskEdgeGestureHandlerInterface>)arg1;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MinimizePendingTaskContext, NSString, UIView, UIWindow;

@protocol MinimizeTransitionInterface <NSObject>

@optional
- (void)endAddMinimizeInteractionComplete:(_Bool)arg1;
- (_Bool)updateAddMinimizeInteractionWithProgress:(double)arg1 TouchPoint:(struct CGPoint)arg2 ShouldCancel:(_Bool *)arg3;
- (void)beginAddMinimizeInteraction;
- (void)endPopBackGesture:(NSString *)arg1 taskBizKey:(NSString *)arg2 isComplete:(_Bool)arg3 pendingTaskContext:(MinimizePendingTaskContext *)arg4;
- (void)endPopBackGesture:(NSString *)arg1 TaskBizKey:(NSString *)arg2 isComplete:(_Bool)arg3;
- (_Bool)updatePopBackGesture:(NSString *)arg1 TaskBizKey:(NSString *)arg2 Progress:(double)arg3 TouchPoint:(struct CGPoint)arg4 ShouldCancel:(_Bool *)arg5;
- (void)beginPopBackGesture:(NSString *)arg1 TaskBizKey:(NSString *)arg2;
- (UIView *)getCurrentFloatingView;
- (UIView *)getTransitionFloatingView:(NSString *)arg1 TaskBizKey:(NSString *)arg2;
- (struct CGRect)getConvertedVisbleFrameWithOuterContentSize:(struct CGSize)arg1;
- (struct CGRect)getConvertedVisibleFrame:(NSString *)arg1 TaskBizKey:(NSString *)arg2 toWindow:(UIWindow *)arg3;
- (struct CGRect)getConvertedVisibleFrame:(NSString *)arg1 TaskBizKey:(NSString *)arg2;
- (_Bool)checkInCurrentTransionWithTaskBizName:(NSString *)arg1 taskBizKey:(NSString *)arg2;
- (void)resetMinimizeAnimationTaskData;
- (void)performMinimizeAnimationWithTaskBizName:(NSString *)arg1 taskBizKey:(NSString *)arg2 animated:(_Bool)arg3;
- (void)performMinimizeAnimationWithTaskBizName:(NSString *)arg1 taskBizKey:(NSString *)arg2;
- (void)onMinimizeAnimationEnd:(NSString *)arg1 TaskBizKey:(NSString *)arg2;
- (void)onMinimizeAnimationBegin:(NSString *)arg1 TaskBizKey:(NSString *)arg2 FromFrame:(struct CGRect)arg3 toFrame:(struct CGRect)arg4 duration:(double)arg5;
@end


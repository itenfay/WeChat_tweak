//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmoticonCustomManagePopInteractiveTransition;

@protocol EmoticonCustomManagePopInteractiveTransitionDelegate <NSObject>

@optional
- (void)onPopBackInteractiveTransitionDidEnd:(EmoticonCustomManagePopInteractiveTransition *)arg1 isComplete:(_Bool)arg2;
- (void)onPopBackInteractiveTransitionWillEnd:(EmoticonCustomManagePopInteractiveTransition *)arg1 isComplete:(_Bool)arg2;
- (void)onPopBackInteractiveTransitionChange:(EmoticonCustomManagePopInteractiveTransition *)arg1 progress:(double)arg2;
- (void)onPopBackInteractiveTransitionBegin:(EmoticonCustomManagePopInteractiveTransition *)arg1;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveEnterSqaureTransitionContext, MMFinderLiveTaskId, MMLiveContainerLogic, MMUIViewController;

@protocol MMLiveContainerLogicTargetViewControllerDelegate <NSObject>

@optional
- (MMFinderLiveEnterSqaureTransitionContext *)getTargetTransitionContext:(_Bool)arg1 fromVC:(MMUIViewController *)arg2;
- (void)onFromVcTransitionEnd:(MMLiveContainerLogic *)arg1 liveTaskId:(MMFinderLiveTaskId *)arg2 isPop:(_Bool)arg3 isComplete:(_Bool)arg4;
- (void)onFromVcTransitionBegin:(MMLiveContainerLogic *)arg1 liveTaskId:(MMFinderLiveTaskId *)arg2 isPop:(_Bool)arg3;
@end


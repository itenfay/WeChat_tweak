//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController;
@protocol WCFinderFeedBaseViewControllerProtocol;

@protocol WCFinderFeedDetailFullScreenVideoViewControllerDelegate <NSObject>
- (void)videoFullScreenPlayerWillDismissSelfWithPause:(_Bool)arg1;
- (MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *)videoFullScreenPlayerFeedVC;
- (struct CGRect)videoFullScreenPlayerTransitionStartFrame;
- (void)videoFullScreenPlayerTransitionAnimationWithStart:(_Bool)arg1 present:(_Bool)arg2;
@end


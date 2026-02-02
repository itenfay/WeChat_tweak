//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class POPAnimation;

@protocol POPAnimationDelegate <NSObject>

@optional
- (void)pop_animationDidApply:(POPAnimation *)arg1;
- (void)pop_animationDidStop:(POPAnimation *)arg1 finished:(_Bool)arg2;
- (void)pop_animationDidReachToValue:(POPAnimation *)arg1;
- (void)pop_animationDidStart:(POPAnimation *)arg1;
@end


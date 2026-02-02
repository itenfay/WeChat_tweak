//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CAAnimation;

@protocol CAAnimationDelegate <NSObject>

@optional
- (void)animationDidStop:(CAAnimation *)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(CAAnimation *)arg1;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCCardCodeAnimator;

@protocol WCCardCodeAnimatorDelegate <NSObject>

@optional
- (void)codeAnimatorDidExitFullScreen:(WCCardCodeAnimator *)arg1;
- (void)codeAnimatorWillExitFullScreen:(WCCardCodeAnimator *)arg1;
- (void)codeAnimatorDidBecomeFullScreen:(WCCardCodeAnimator *)arg1;
- (void)codeAnimatorWillBecomeFullScreen:(WCCardCodeAnimator *)arg1;
@end


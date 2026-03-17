//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMVoidCallback;
@protocol MMKView;

@protocol MMKindaAnimator <NSObject>
- (void)startShakeRotateImpl:(id <MMKView>)arg1 completion:(MMVoidCallback *)arg2;
- (void)startAnimationImpl:(float)arg1 animation:(MMVoidCallback *)arg2 completion:(MMVoidCallback *)arg3;
- (void)startAnimationImpl:(float)arg1 animation:(MMVoidCallback *)arg2;
@end


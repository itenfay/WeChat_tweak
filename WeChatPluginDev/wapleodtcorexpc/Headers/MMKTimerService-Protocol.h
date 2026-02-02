//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMVoidCallback;

@protocol MMKTimerService <NSObject>
- (void)dispatchAsyncInMainThreadImpl:(MMVoidCallback *)arg1;
- (void)dispatchAsyncInBgThreadImpl:(MMVoidCallback *)arg1;
- (void)throttleImpl:(float)arg1 handler:(MMVoidCallback *)arg2;
- (double)now;
- (void)dispatchAfterImpl:(float)arg1 handle:(MMVoidCallback *)arg2;
- (void)stopTimeCheck;
- (void)startTimeCheck;
- (void)initIntervalAndCheckedCallbackImpl:(float)arg1 timeCheckCallback:(MMVoidCallback *)arg2;
@end


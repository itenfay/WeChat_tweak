//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface NSObject (MMContextSwizzleForPerformSelector)
+ (void)load;
+ (void)mmCancelPreviousPerformRequestsWithTarget:(id)arg1;
+ (void)mmCancelPreviousPerformRequestsWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)mmRemoveObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)mmRemoveObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)mmAddObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)mmPerformSelectorInBackground:(SEL)arg1 withObject:(id)arg2;
- (void)mmPerformSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(_Bool)arg4 modes:(id)arg5;
- (void)mmPerformSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(_Bool)arg3 modes:(id)arg4;
- (void)mmPerformSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
- (void)mmContextPerformedSelector:(id)arg1;
- (void)mmRemoveAllArguments;
- (void)mmRemoveArgument:(id)arg1;
- (void)mmAddArgument:(id)arg1;
- (id)mmArgumentQueue;
@end


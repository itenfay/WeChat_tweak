//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface NSObject (SafePerform)
+ (void)safeCancelPreviousPerformRequestsWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
+ (void)safeCancelPreviousPerformRequestsWithTarget:(id)arg1;
+ (id)safeCast:(id)arg1;
- (void)gcdAfterDelay:(double)arg1 delayPrecision:(double)arg2 isCanceledBlock:(CDUnknownBlockType)arg3 finalblock:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)preciselyPerformSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 delayPrecision:(double)arg4 inModes:(id)arg5;
- (void)safePerformSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
- (void)safePerformSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3;
- (id)objectWrapperIfExist;
- (id)objectWrapper;
@end


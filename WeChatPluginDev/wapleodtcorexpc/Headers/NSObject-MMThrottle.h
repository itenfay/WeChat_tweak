//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface NSObject (MMThrottle)
- (void)doThrottledTaskWithMode:(unsigned long long)arg1 interval:(double)arg2 taskId:(id)arg3 taskBlock:(CDUnknownBlockType)arg4;
- (void)doThrottledTaskWithInterval:(double)arg1 taskId:(id)arg2 taskBlock:(CDUnknownBlockType)arg3;
@end


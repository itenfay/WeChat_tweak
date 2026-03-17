//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface NSObject (MMDebounce)
- (void)doDebouncedTaskWithInterval:(double)arg1 taskId:(id)arg2 taskBlock:(CDUnknownBlockType)arg3;
@end

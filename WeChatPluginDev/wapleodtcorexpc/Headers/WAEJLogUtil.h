//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAEJLogUtil : NSObject
{
}

+ (void)logGLError:(int)arg1 name:(id)arg2;
+ (void)systemLog:(const char *)arg1 line:(int)arg2 format:(id)arg3;
+ (void)systemLog:(const char *)arg1 line:(int)arg2 format:(id)arg3 argList:(char *)arg4;
+ (void)innerLog:(const char *)arg1 line:(int)arg2 level:(int)arg3 format:(id)arg4;
+ (void)removeDelegate;
+ (void)addDelegate:(id)arg1;

@end


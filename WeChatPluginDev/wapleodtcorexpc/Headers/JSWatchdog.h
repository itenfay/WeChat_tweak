//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface JSWatchdog : NSObject
{
}

+ (void)hook;
+ (void)setName:(id)arg1 forVM:(struct OpaqueJSContextGroup *)arg2;
+ (id)nameForVM:(struct OpaqueJSContextGroup *)arg1;
+ (_Bool)isEnable;
+ (void)setupWithCallback:(CDUnknownFunctionPointerType)arg1;
+ (void)hook4Watchdog;
+ (void)setupWithTime:(double)arg1 strip:(_Bool)arg2 callback:(CDUnknownFunctionPointerType)arg3;

@end


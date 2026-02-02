//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMVisableLogger : NSObject
{
}

+ (void *)getSwiftUIMachHeader;
+ (void)setupSwiftUISO;
+ (void)__onLogWithType:(unsigned long long)arg1 module:(id)arg2 file:(id)arg3 line:(int)arg4 func:(id)arg5 message:(id)arg6;
+ (void)logWithLevel:(unsigned long long)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 func:(const char *)arg5 printXLog:(_Bool)arg6 format:(id)arg7;
+ (void)__setupSwiftUIDSO;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPThumbPlayerLog : NSObject
{
}

+ (id)getLogLevelName:(long long)arg1;
+ (void)logWithLevel:(long long)arg1 tag:(id)arg2 content:(id)arg3;
+ (void)setLogLevel:(long long)arg1;
+ (void)setLogDelegate:(id)arg1;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WXGRoamLogger : NSObject
{
    unsigned long long _loggerPtr;
}

+ (id)sharedInstance;
- (void)logWithLevel:(int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 func:(const char *)arg5 message:(id)arg6;
- (_Bool)shouldLog:(int)arg1;
- (void)dealloc;
- (id)init;

@end


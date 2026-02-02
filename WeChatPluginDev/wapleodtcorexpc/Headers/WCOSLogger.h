//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCOSLogger : NSObject
{
    unsigned long long _loggerPtr;
}

+ (id)sharedInstance;
- (void)logToFile:(const char *)arg1;
- (unsigned long long)getLoggerPtr;
- (id)init;

@end


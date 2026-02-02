//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableString, NSString;

@interface FBSDKLogger : NSObject
{
    _Bool _active;
    unsigned long long _loggerSerialNumber;
    NSString *_loggingBehavior;
    NSMutableString *_internalContents;
}

+ (void)registerStringToReplace:(id)arg1 replaceWith:(id)arg2;
+ (void)registerCurrentTime:(id)arg1 withTag:(id)arg2;
+ (void)singleShotLogEntry:(id)arg1 timestampTag:(id)arg2 formatString:(id)arg3;
+ (void)singleShotLogEntry:(id)arg1 formatString:(id)arg2;
+ (void)singleShotLogEntry:(id)arg1 logEntry:(id)arg2;
+ (unsigned long long)generateSerialNumber;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableString *internalContents; // @synthesize internalContents=_internalContents;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, copy, nonatomic) NSString *loggingBehavior; // @synthesize loggingBehavior=_loggingBehavior;
@property(readonly, nonatomic) unsigned long long loggerSerialNumber; // @synthesize loggerSerialNumber=_loggerSerialNumber;
- (void)emitToNSLog;
- (void)appendKey:(id)arg1 value:(id)arg2;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1;
@property(copy, nonatomic) NSString *contents;
- (id)initWithLoggingBehavior:(id)arg1;

@end


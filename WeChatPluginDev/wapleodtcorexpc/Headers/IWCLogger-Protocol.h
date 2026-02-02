//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IWCLogger <NSObject>
+ (void)asyncCustomDump:(NSString *)arg1;
+ (void)customDump:(NSString *)arg1;
+ (void)silentCrash:(NSString *)arg1;
+ (void)logWithLevel:(int)arg1 module:(const char *)arg2 errorCode:(unsigned int)arg3 file:(const char *)arg4 line:(int)arg5 func:(const char *)arg6 format:(NSString *)arg7;
+ (void)logWithLevel:(int)arg1 module:(const char *)arg2 errorCode:(unsigned int)arg3 file:(const char *)arg4 line:(int)arg5 func:(const char *)arg6 message:(NSString *)arg7;
+ (_Bool)shouldEnableDebugLog;
+ (_Bool)shouldLog:(int)arg1;
@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WALogProxy : NSObject
{
}

+ (void)asyncCustomDump:(id)arg1;
+ (void)customDump:(id)arg1;
+ (void)silentCrash:(id)arg1;
+ (void)logWithLevel:(int)arg1 module:(const char *)arg2 errorCode:(unsigned int)arg3 file:(const char *)arg4 line:(int)arg5 func:(const char *)arg6 format:(id)arg7;
+ (void)logWithLevel:(int)arg1 module:(const char *)arg2 errorCode:(unsigned int)arg3 file:(const char *)arg4 line:(int)arg5 func:(const char *)arg6 message:(id)arg7;
+ (_Bool)shouldEnableDebugLog;
+ (_Bool)shouldLog:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


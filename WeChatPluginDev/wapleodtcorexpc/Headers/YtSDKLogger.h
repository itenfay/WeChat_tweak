//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface YtSDKLogger : NSObject
{
}

+ (void)showLog:(long long)arg1 withMessage:(id)arg2;
+ (void)logError:(id)arg1;
+ (void)logWarnning:(id)arg1;
+ (void)logInfo:(id)arg1;
+ (void)logDebug:(id)arg1;
+ (_Bool)needNativeLog;
+ (void)registerLoggerListener:(CDUnknownBlockType)arg1 withNativeLog:(_Bool)arg2;

@end


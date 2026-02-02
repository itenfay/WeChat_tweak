//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WeVisSettingReporter : NSObject
{
}

+ (void)reportSettingInfo:(id)arg1 scene:(int)arg2;
+ (void)reportSettingUsage:(id)arg1 scene:(int)arg2;
+ (void)reportSysMsgCgi;
+ (void)reportSingleAction:(int)arg1;
+ (void)reportLoadingFail;
+ (void)reportCgiFail;
+ (void)reportWithInfo:(id)arg1 action:(int)arg2 cgiSettingsInfo:(id)arg3 scene:(id)arg4;

@end


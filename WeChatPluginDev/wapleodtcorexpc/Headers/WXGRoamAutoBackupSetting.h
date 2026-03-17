//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WXGRoamAutoBackupSetting : NSObject
{
}

+ (unsigned long long)msgBeforeTime;
+ (unsigned long long)autoBackupMsgBeforeTime;
+ (unsigned long long)autoBackupFirstCheckDelay;
+ (unsigned long long)autoBackupInterval;
+ (unsigned long long)checkSDKMinimizeVersion;
+ (unsigned long long)checkAutoBackupInterval;

@end


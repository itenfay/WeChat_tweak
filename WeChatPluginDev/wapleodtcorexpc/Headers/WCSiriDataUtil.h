//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCSiriDataUtil
{
}

+ (id)logFolderPath;
+ (id)avatarFolderPath;
+ (id)reportFilePath;
+ (id)reportFolderPath;
+ (id)contactsFilePath;
+ (_Bool)clearAllValues;
+ (_Bool)syncUserDefaults;
+ (void)saveShortHost:(id)arg1;
+ (void)saveExtensionKey:(id)arg1;
+ (void)saveExtensionServerID:(id)arg1;
+ (void)saveHeadDeviceType:(unsigned short)arg1;
+ (void)saveDeviceType:(id)arg1;
+ (void)saveDeviceID:(id)arg1;
+ (void)saveAppVersion:(unsigned int)arg1;
+ (void)saveCryptUin:(unsigned long long)arg1;
+ (void)saveUsername:(id)arg1;
+ (id)containerURL;
+ (id)appGroupID;
+ (id)userDefaults;

@end

